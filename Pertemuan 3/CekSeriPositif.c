// Nama          : Galih Aji Syafaat
// NIM           : 24060121130072
// TGL Pembuatan : Selasa, 08-03-2022 17.53 am
// Nama File     : CekSeriPositif.c
// Deskripsi     : Merangkai 3 hambatan seri, Rtotal = R1 + R2 + R3

#include<stdio.h>
int main() {
    //Kamus
    int R1, R2, R3, Rtotal;
    Rtotal=R1+R2+R3;
    //Algoritma
    printf("Masukan Nilai R1\n");
    scanf("%d",&R1);
    printf("Masukan Nilai R2\n");
    scanf("%d",&R2);
    printf("Masukan Nilai R3\n");
    scanf("%d",&R3);

    if (R1 >= 0 && R2 >= 0 && R3 >= 0) {
        Rtotal=R1+R2+R3;

        printf("%d", Rtotal);}
    else if (R1 < 0 || R2< 0 || R3 < 0) {
        printf("masukan tidak boleh negatif");
    }

return 0;
}
