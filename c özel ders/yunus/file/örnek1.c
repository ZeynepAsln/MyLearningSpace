#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 50
#define MAX_STUDENTS 100
#define MAX_SUBJECTS 5

typedef struct {
    char name[MAX_NAME_LENGTH];
    char surname[MAX_NAME_LENGTH];
    int student_id;
    int grades[MAX_SUBJECTS];
} Student;

void add_student(FILE *file);
void display_students(FILE *file);
void search_student(FILE *file);
void update_student(FILE *file);
void delete_student(FILE *file);

int main() {
    int choice;
    FILE *file;

    while (1) {
        printf("\nÖğrenci Yönetim Sistemi\n");
        printf("1. Öğrenci Ekle\n");
        printf("2. Öğrencileri Görüntüle\n");
        printf("3. Öğrenci Ara\n");
        printf("4. Öğrenci Notlarını Güncelle\n");
        printf("5. Öğrenci Sil\n");
        printf("6. Çıkış\n");
        printf("Seçiminiz: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                file = fopen("students.txt", "a+");
                if (file == NULL) {
                    printf("Dosya açılamadı.\n");
                    return 1;
                }
                add_student(file);
                fclose(file);
                break;
            case 2:
                file = fopen("students.txt", "r");
                if (file == NULL) {
                    printf("Dosya açılamadı.\n");
                    return 1;
                }
                display_students(file);
                fclose(file);
                break;
            case 3:
                file = fopen("students.txt", "r");
                if (file == NULL) {
                    printf("Dosya açılamadı.\n");
                    return 1;
                }
                search_student(file);
                fclose(file);
                break;
            case 4:
                file = fopen("students.txt", "r+");
                if (file == NULL) {
                    printf("Dosya açılamadı.\n");
                    return 1;
                }
                update_student(file);
                fclose(file);
                break;
            case 5:
                file = fopen("students.txt", "r+");
                if (file == NULL) {
                    printf("Dosya açılamadı.\n");
                    return 1;
                }
                delete_student(file);
                fclose(file);
                break;
            case 6:
                printf("Çıkış yapılıyor...\n");
                exit(0);
            default:
                printf("Geçersiz seçim. Tekrar deneyin.\n");
        }
    }

    return 0;
}

void add_student(FILE *file) {
    Student student;
    printf("Öğrenci adı: ");
    scanf("%s", student.name);
    printf("Öğrenci soyadı: ");
    scanf("%s", student.surname);
    printf("Öğrenci numarası: ");
    scanf("%d", &student.student_id);

    for (int i = 0; i < MAX_SUBJECTS; i++) {
        printf("Ders %d notu: ", i + 1);
        scanf("%d", &student.grades[i]);
    }

    fwrite(&student, sizeof(Student), 1, file); //verinin bulunduğu adres,yazılaack öğe büyüklüğü, öğe sayısı,yazılacak dosya
    printf("Öğrenci başarıyla eklendi.\n");
}

void display_students(FILE *file) {
    Student student;
    rewind(file);//dosyanın başına döner

    printf("\nTüm Öğrenciler:\n");
    while (fread(&student, sizeof(Student), 1, file)) {//veriyi belleğe aktarmak için kullanılır
        printf("Adı: %s, Soyadı: %s, No: %d\n", student.name, student.surname, student.student_id);
        for (int i = 0; i < MAX_SUBJECTS; i++) {
            printf("Ders %d Notu: %d\n", i + 1, student.grades[i]);
        }
        printf("\n");
    }
}

void search_student(FILE *file) {
    int id;
    Student student;
    int found = 0;

    printf("Aramak istediğiniz öğrencinin numarası: ");
    scanf("%d", &id);

    rewind(file);//dosyanın başına döndürür
    while (fread(&student, sizeof(Student), 1, file)) {//ikili verileri okumak için kullanılır
        if (student.student_id == id) {
            printf("Adı: %s, Soyadı: %s, No: %d\n", student.name, student.surname, student.student_id);
            for (int i = 0; i < MAX_SUBJECTS; i++) {
                printf("Ders %d Notu: %d\n", i + 1, student.grades[i]);
            }
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Öğrenci bulunamadı.\n");
    }
}

void update_student(FILE *file) {
    int id;
    Student student;
    int found = 0;

    printf("Notlarını güncellemek istediğiniz öğrencinin numarası: ");
    scanf("%d", &id);

    rewind(file);
    while (fread(&student, sizeof(Student), 1, file)) {
        if (student.student_id == id) {
            printf("Öğrenci bulundu. Yeni notları girin:\n");
            for (int i = 0; i < MAX_SUBJECTS; i++) {
                printf("Ders %d notu: ", i + 1);
                scanf("%d", &student.grades[i]);
            }
            fseek(file, -sizeof(Student), SEEK_CUR);//dosyanın içerisinde rastgele erişim sağlar
            
            fwrite(&student, sizeof(Student), 1, file);//structı yazdırmak için kullanılır 
            found = 1;
            printf("Öğrenci notları güncellendi.\n");
            break;
        }
    }

    if (!found) {
        printf("Öğrenci bulunamadı.\n");
    }
}

void delete_student(FILE *file) {
    int id;
    Student student;
    FILE *temp_file;
    int found = 0;

    printf("Silmek istediğiniz öğrencinin numarası: ");
    scanf("%d", &id);

    temp_file = fopen("temp.txt", "w");
    if (temp_file == NULL) {
        printf("Geçici dosya açılamadı.\n");
        return;
    }

    rewind(file);
    while (fread(&student, sizeof(Student), 1, file)) {
        if (student.student_id != id) {
            fwrite(&student, sizeof(Student), 1, temp_file);
        } else {
            found = 1;
        }
    }

    fclose(file);
    fclose(temp_file);

    remove("students.txt");
    rename("temp.txt", "students.txt");

    if (found) {
        printf("Öğrenci başarıyla silindi.\n");
    } else {
        printf("Öğrenci bulunamadı.\n");
    }
}
