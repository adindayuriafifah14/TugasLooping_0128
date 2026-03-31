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