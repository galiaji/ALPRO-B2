// Nama         : Galih Aji Syafaat
// Kelas        : Informatika B
// NIM          : 24060121130072
// Nama File    : Tetris1
// Deskripsi    : Membuat pola segitiga dengan * secara mengecil

#include<stdio.h>
int main(){
// Kamus
    int N, i, j;
// Algoritma
    printf("Masukan Nilai N");
    scanf("%d",&N);
    if (N<0){
        printf("Masukan harus lebih dari 0");
    }
    else {
        for (i=N ; i>=1; i--){
            for (j=1 ; j<=i; j++){
                printf("*");
            }
        printf("--%d",i);
        printf("\n");
        }
    }
    }
