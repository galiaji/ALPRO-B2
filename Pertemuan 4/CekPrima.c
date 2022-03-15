#include<stdio.h>
// Nama             : Galih AJi Syafaat
// Kelas            : B
// NIM              : 24060121130072
// TGL Pembuatan    : 14-03-2022, 20.00 WIB
// Nama File        : CekPrima.c (Menentukan apakah masukan termasuk bil prima menggunakan metode looping)

//Kamus
 int N ; // N>0
//Algoritma
        int main() {
         int N, i;

         printf("--- Program Penentu Bilangan Prima atau Bukan ---");
         printf("\n________________________________________________");
         printf("\nMasukkan N: ");
         scanf("%d", &N);

         if(N <= 1) {
          printf("Masukkan angka lebih dari 1.");
         }
         else{
          if(N == 2){
           printf("%d merupakan bilangan prima.", N);
          }else{
           for(i=2; i<N; i++){
            if(N %i == 0){
              printf("%d merupakan bukan bilangan prima.\n", N);
             break;
            }else{
             printf("%d merupakan bilangan prima.", N);}
                            }
                }
            }
        }
