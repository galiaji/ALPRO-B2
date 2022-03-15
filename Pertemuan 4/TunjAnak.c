// Nama          : Galih Aji Syafaat
// NIM           : 24060121130072
// Kelas         : B
// TGL Pembuatan : 09-03-2022 00.00 am
// Nama File     : TunjAnak.c
// Deskripsi     :  Menghitung tunjangan anak berdasar gaji dan jumlah anak.

#include<stdio.h>
int main(){

        //Kamus
        int anak, gaji, T;

        //Algoritma
        printf("masukan Nilai Gaji\n");
        scanf("%d",&gaji);
        printf("masukan jumlah anak\n");
        scanf("%d",&anak);

        if (0 <= anak && anak <= 3) {
            T = anak * gaji/10;}
        else if (anak > 3) {
            T = 3* gaji/10;}
        printf("Maka tunjangan anak sebesar %d",T);

}
