// Nama          : Galih Aji Syafaat
// NIM           : 24060121130072
// TGL Pembuatan : Senin, 07-03-2022 18.30 am
// Nama File     : CekHari.c
// Deskripsi     : Menampilkan nama hari sesuai nomor hari.

#include<stdio.h>
int main(){
    // Kamus
    int H;
    // Algoritma
    printf("Masukan Nomor Hari...");
    scanf("%d",&H);

    if (H<1, H>7) {
        printf("Masukan Nomor hari tidak tepat...");}
    else if (H == 1) {
        printf("Hari Senin...");}
    else if (H == 2) {
        printf("Hari Selasa...");}
    else if (H == 3) {
        printf("Hari Rabu...");}
    else if (H == 4) {
        printf("Hari Kamis...");}
    else if (H == 5) {
        printf("Hari Jumat...");}
    else if (H == 6) {
        printf("Hari Sabtu...");}
    else if (H == 7) {
        printf("Hari Minggu...");}

    return 0;

}
