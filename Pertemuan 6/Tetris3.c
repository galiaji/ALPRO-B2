// Nama         : Galih Aji Syafaat
// Kelas        : Informatika B
// NIM          : 24060121130072
// Nama File    : Tetris3
// Deskripsi    : Membuat pola segitiga * dengan panjang kolom hasil deret aritmatika

#include<stdio.h>
int main(){
// Kamus
    int N, i, j;
    int Un = (1*N*(N+1))/2;
// Algoritma
    printf("Masukan Nilai N");
    scanf("%d",&N);
    if (N<0){
        printf("Masukan harus lebih dari 0");
    }
    else {
        for (i=1 ; i<=N; i++){
            Un = (i*(i+1))/2;
            for (j=1 ; j<=Un; j++){
                printf("*");
            }
        printf("--%d",Un);
        printf("\n");
        }
    }
    }
