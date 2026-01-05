# Derleyici
CC = gcc

# Derleyici bayrakları
CFLAGS = -Wall -Wextra -std=c11

# Hedef çalıştırılabilir dosya
TARGET = program

# Kaynak dosyalar
SRCS = main.c

# Nesne dosyaları
OBJS = $(SRCS:.c=.o)

# Varsayılan hedef
all: $(TARGET)

# Hedef çalıştırılabilir dosyayı bağla
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Kaynak dosyaları nesne dosyalarına derle
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Temizleme hedefi
clean:
	rm -f $(OBJS) $(TARGET)

# Çalıştırma hedefi
run: $(TARGET)
	./$(TARGET)
