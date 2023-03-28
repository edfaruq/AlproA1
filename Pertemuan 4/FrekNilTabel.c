/*
Nama File : JumFrekNilTabel.c
Pembuat   : Muhammad Anshar Al Faruq - 24060122140148
Deskripsi : menampilkan nilai elemen tabel T yang frekuensi kemunculannya lebih dari satu kali
Tanggal   : 21 Maret 2023
*/

#include <stdio.h>

#define MAX_SIZE 100

int main()
{
    int t[MAX_SIZE];
    int freq[MAX_SIZE] = {0};
    int n, i, j,count = 0;


    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d", &t[i]);
    }

    for (i = 0; i < n; i++){
        freq[t[i]]++;
    }

    printf("Angka yang muncul lebih dari sekali : ");
    for (i = 0; i < n; i++){
        if (freq[t[i]] > 1)
        {
            count = 0;
            for (j = 0; j < i; j++)
            {
                if (t[i] == t[j])
                {
                    count= 1;
                    break;
                }
            }

            if (!count)
            {
                printf("%d ", t[i]);
            }
        }
    }
}
