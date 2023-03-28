/*
Nama File : JumFrekNilTabel.c
Pembuat   : Muhammad Anshar Al Faruq - 24060122140148
Deskripsi : menampilkan jumlah nilai-nilai elemen tabel T yang frekuensi kemunculannya lebih dari satu kali
Tanggal   : 21 Maret 2023
*/

#include <stdio.h>

int main(){
    int N, i, j, count, sum = 0;

    scanf("%d", &N);
    int T[N];

    for(i = 0; i < N; i++){
        scanf("%d", &T[i]);
    }
    printf("Jumlah angka yang muncul lebih dari sekali : ");
    for(i = 0; i < N; i++){
        count = 0;
        for(j = 0; j < N; j++){
            if(T[i] == T[j] && i != j){
                count++;
                break;
            }
        }
        if(count > 0){
            sum += T[i];
        }
    }

    printf("%d\n", sum);
    return 0;
}
