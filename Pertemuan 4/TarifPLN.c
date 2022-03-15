// Nama          : Galih Aji Syafaat
// NIM           : 24060121130072
// Kelas         : B
// TGL Pembuatan : 09-03-2022 00.00 am
// Nama File     : TarifPLN.c
// Deskripsi     :  Menghitung besar tarif listrik.

#include<stdio.h>
int main(){
// Kamus
     int  gol, daya, TF;

// Algoritma
        printf("Masukan nilai daya...\n");
        scanf("%d", &daya);
        printf("Masukan golongan daya...\n");
        scanf("%d", &gol);

        if (gol = 1){
            if (daya < 100) {
                TF = (100 * 1000);}
            else if ( 100<= daya && daya < 1000)  {
                TF = (daya * 1000);}
            else if (daya >= 1000)   {
                    TF = (1.1 * daya * 1000);}
           printf("Maka biaya PLN %d", TF);
        }
        if (gol = 2) {
                if (daya < 100) {
                    TF = (100 * 2000);}
        else if (100 <= daya && daya < 1000) {
          TF = (daya * 2000);}
        else if (daya >= 1000)   {
          TF = (1.1 * daya * 2000);}
        printf("Maka biaya PLN %d", TF);
        }


}
