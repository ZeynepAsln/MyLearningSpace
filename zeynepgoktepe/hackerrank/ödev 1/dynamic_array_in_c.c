#include <stdio.h>
#include <stdlib.h>

// Toplam kitap sayısını tutan dizi (her raf için bir kitap sayısı)
int* total_number_of_books;

// Toplam sayfa sayısını tutan dizi (her raftaki kitaplar için sayfa sayıları)
int** total_number_of_pages;

int main()
{
    // Toplam raf sayısını tutan değişken
    int total_number_of_shelves;
    scanf("%d", &total_number_of_shelves); // Kullanıcıdan raf sayısı alınıyor
    
    // Toplam sorgu sayısını tutan değişken
    int total_number_of_queries;
    scanf("%d", &total_number_of_queries); // Kullanıcıdan sorgu sayısı alınıyor
    
    // Her bir raf için toplam kitap sayısını tutacak dizi (dinamik bellek tahsisi)
    total_number_of_books = (int *)malloc(sizeof(int) * total_number_of_shelves);
    
    // Her bir raf için kitapların sayfa sayılarını tutacak iki boyutlu dizi (dinamik bellek tahsisi)
    total_number_of_pages = (int **)malloc(sizeof(int *) * total_number_of_shelves);
    
    // Her raf için başlangıçta kitap sayısını 0 olarak ayarla
    for (int i = 0; i < total_number_of_shelves; i++) {
        *(total_number_of_books + i) = 0;  // Tüm rafların başta 0 kitabı var
    }
    
    // Sorguları işlemek için döngü (toplam sorgu sayısı kadar çalışacak)
    while (total_number_of_queries--) {
        int type_of_query;
        scanf("%d", &type_of_query); // Sorgu türünü al (1, 2 veya 3 olabilir)
        
        // Tip 1 sorgusu: bir rafa yeni bir kitap ekle ve sayfa sayısını güncelle
        if (type_of_query == 1) {
            int x, y;
            scanf("%d %d", &x, &y); // x: raf numarası, y: yeni kitabın sayfa sayısı
            
            int booksInShelf = *(total_number_of_books + x);  // x numaralı raftaki kitap sayısını al
            
            // Yeni kitabı eklemek için belleği genişlet (realloc ile dinamik olarak artır)
            *(total_number_of_pages + x) = (int*)realloc(*(total_number_of_pages + x), sizeof(int) * (booksInShelf + 1));
            
            // Yeni eklenen kitabın sayfa sayısını güncelle
            *(*(total_number_of_pages + x) + booksInShelf) = y;
            
            // x numaralı raftaki kitap sayısını 1 artır
            *(total_number_of_books + x) += 1;

        } 
        // Tip 2 sorgusu: bir raftaki kitabın sayfa sayısını yazdır
        else if (type_of_query == 2) {
            int x, y;
            scanf("%d %d", &x, &y); // x: raf numarası, y: o raftaki kitabın index'i
            
            // İlgili raftaki ilgili kitabın sayfa sayısını yazdır
            printf("%d\n", *(*(total_number_of_pages + x) + y));
        } 
        // Tip 3 sorgusu: bir raftaki toplam kitap sayısını yazdır
        else {
            int x;
            scanf("%d", &x); // x: raf numarası
            
            // İlgili raftaki toplam kitap sayısını yazdır
            printf("%d\n", *(total_number_of_books + x));
        }
    }

    // Dinamik olarak ayrılmış belleği serbest bırak (raf sayısı dizisi)
    if (total_number_of_books) {
        free(total_number_of_books);
    }
    
    // Her raf için dinamik olarak ayrılan kitap sayfa sayısı dizilerini serbest bırak
    for (int i = 0; i < total_number_of_shelves; i++) {
        if (*(total_number_of_pages + i)) {
            free(*(total_number_of_pages + i)); // Her bir raftaki kitap sayfalarını serbest bırak
        }
    }
    
    // Toplam sayfa sayısı dizisini serbest bırak
    if (total_number_of_pages) {
        free(total_number_of_pages);
    }
    
    return 0;
}
