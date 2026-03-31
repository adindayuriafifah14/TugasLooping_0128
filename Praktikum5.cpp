#include <iostream>
#include <iostream>
using namespace std;

//Variabel global sesuai spesifikasi
int globalAngka = 0;
int globalPilihan = 0;

//Function untuk mengecek bilangan prima menggunakan while loop
bool cekPrima(int n){
    // Bilangan negatif dan 1 bukan prima
    if (n <= 1) {
        return false;
    }

    // Cek pembagian dari 2 sampai sqrt(n)
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) {
            return false;
        }
        i++;
    }
    return true;
}

// Function untuk mengecek bilangan Fibonacci menggunakan while loop
bool cekFibonacci(int n) {
    if (n < 0) {
        return false;
    }

    // Kasus khusus
    if (n == 0 || n == 1) {
        return true;
    }
    
    int fib1 = 0, fib2 = 1, fibSelanjutnya = 0;

    // Generate deret Fibonacci sampai melebihi n
    while (fibSelanjutnya <= n) {
        fibSelanjutnya = fib1 + fib2;

        // Cek apakah n sama dengan fibSelanjutnya
        if (fibSelanjutnya == n) {
            return true;
        }

         // Update nilai untuk iterasi berikutnya
        fib1 = fib2;
        fib2 = fibSelanjutnya;
    }
    return false;
}

// Prosedur untuk menerima input angka dari pengguna
void inputAngka() {
    cout << "\nMasukkan angka yang ingin dicek: ";
    cin >> globalAngka;

      // Validasi input
    while (globalAngka < 0) {
        cout << "Angka harus >= 0! Masukkan ulang: ";
        cin >> globalAngka;
    }
    
    cout << "Angka yang dimasukkan: " << globalAngka << endl;
}

// Prosedur untuk menampilkan hasil pengecekan prima
void tampilkanHasilPrima() {
    cout << "\n=== HASIL PENGECEKAN BILANGAN PRIMA ===" << endl;
    cout << "Angka: " << globalAngka << endl;
    
    if (cekPrima(globalAngka)) {
        cout << "✓ " << globalAngka << " adalah BILANGAN PRIMA" << endl;
    } else {
        cout << "✗ " << globalAngka << " BUKAN bilangan prima" << endl;
    }
    


    