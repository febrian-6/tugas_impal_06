#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BARANG 100
#define MAX_USER 100

// Struktur data untuk barang
typedef struct {
    char nama[50];
    float harga;
} Barang;

// Struktur data untuk pengguna
typedef struct {
    char email[50];
    char password[50];
} User;

// Variabel global untuk menyimpan barang dan pengguna
Barang barangList[MAX_BARANG];
User userList[MAX_USER];
int jumlahBarang = 0;
int jumlahUser = 0;

// Fungsi untuk menambah barang
void tambahBarang(const char* nama, float harga) {
    if (jumlahBarang < MAX_BARANG) {
        strcpy(barangList[jumlahBarang].nama, nama);
        barangList[jumlahBarang].harga = harga;
        jumlahBarang++;
    } else {
        printf("Daftar barang penuh!\n");
    }
}

// Fungsi untuk menampilkan daftar barang
void tampilkanBarang() {
    printf("Daftar Barang:\n");
    for (int i = 0; i < jumlahBarang; i++) {
        printf("Barang %d: %s - Harga: Rp %.2f\n", i + 1, barangList[i].nama, barangList[i].harga);
    }
    printf("Jumlah Barang: %d\n", jumlahBarang);
}

// Fungsi untuk menambah user
void tambahUser(const char* email, const char* password) {
    if (jumlahUser < MAX_USER) {
        strcpy(userList[jumlahUser].email, email);
        strcpy(userList[jumlahUser].password, password);
        jumlahUser++;
    } else {
        printf("Daftar pengguna penuh!\n");
    }
}

// Fungsi untuk menampilkan daftar pengguna
void tampilkanUser() {
    printf("Daftar Pengguna:\n");
    for (int i = 0; i < jumlahUser; i++) {
        printf("Email: %s\n", userList[i].email);
    }
    printf("Jumlah Pengguna: %d\n", jumlahUser);
}

// Fungsi utama
int main() {
    // Menambahkan beberapa barang (Contoh)
    tambahBarang("Barang1", 50000);
    tambahBarang("Barang2", 100000);
    tambahBarang("Barang3", 75000);

    // Menampilkan daftar barang
    tampilkanBarang();

    // Menambahkan beberapa pengguna (Contoh)
    tambahUser("user1@example.com", "password1");
    tambahUser("user2@example.com", "password2");

    // Menampilkan daftar pengguna
    tampilkanUser();

    return 0;
}
