#include <stdio.h>

int main(){

    int nilai[5];
    int i;
    int sum = 0;
    int total = 0;

    printf("=== Program Nilai Mahasiswa ===\n\n");

    for(i = 0 ; i < 5 ; i++){
        printf("masukkan nilai ke-%d : ", i+1);
        scanf("%d", &nilai[i]);
    }

    printf("\n\n");
    for(i = 0 ; i < 5 ; i++){
        printf("nilai ke-%d : %d\n", i+1, nilai[i]);
        sum += nilai[i];
    }

    total = sum / 5;

    printf("hasil rata rata siswa adalah : %d", total);




    return 0;
}