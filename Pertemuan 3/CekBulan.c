// Nama          : Galih Aji Syafaat
// NIM           : 24060121130072
// Kelas         : B
// TGL Pembuatan : 07-03-2022 18.30 am
// Nama File     : CekBulan.c
// Deskripsi     : Menampilkan nama Bulan sesuai nomor Bulan.

#include<stdio.h>
int main(){
    // Kamus
    int B;
    // Algoritma
    printf("Masukan Nomor Bulan...");
    scanf("%d",&B);

    if (B<1, B>12) {
        printf("Masukan Nomor Bulan tidak tepat...");}
    else if (B == 1) {
        printf("Bulan Januari...");}
    else if (B == 2) {
        printf("Bulan Februari...");}
    else if (B == 3) {
        printf("Bulan Maret...");}
    else if (B == 4) {
        printf("Bulan April...");}
    else if (B == 5) {
        printf("Bulan Mei...");}
    else if (B == 6) {
        printf("Bulan Juni...");}
    else if (B == 7) {
        printf("Bulan Juli...");}
    else if (B == 8) {
        printf("Bulan Agustus...");}
    else if (B == 9){
        printf("Bulan September...");}
    else if (B == 10){
        printf("Bulan Oktober...");}
    else if (B == 11) {
        printf("Bulan November...");}
    else if (B == 12) {
        printf("Bulan Desember...");}
    return 0;

}
