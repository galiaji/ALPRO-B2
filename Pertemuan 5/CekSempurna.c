// Nama             : Galih AJi Syafaat
// Kelas            : B
// NIM              : 24060121130072
// TGL Pembuatan    : 15-03-2022, 20.00 WIB
// Nama File        : CekSempurna.c (Menentukan apakah jumlah nilai faktor dari masukan kecuali
//                    masukan itu sendiri sama dengan masukan tersebut menggunakan metode looping)

//Kamus
int N,i,b=0;
// Algoritma
#include <stdio.h>

int main()
{

    printf("masukkan bilangan : ");scanf("%d",&N);
    for(i=1;i<N;i++){
        if(N % i == 0){
            b=(b+i);
        }
    }
    if(b==N){
        printf("\n%d bilangan sempurna",N);
    }
    else if(b!=N){
         printf("\n%d bukan bilangan sempurna",N);
    }
return 0;
}
