/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 3
 *   Hari dan Tanggal    : 29/04/2026
 *   Nama (NIM)          : Arthur (13224055)
 *   Nama File           : soal1.c
 *   Deskripsi           : sorting fungsi artefak
 * 
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Artefak
{
    char nama[100];
    char kategori[100];
    int tahun;
    int nilai;
} Artefak;


int main (){
    int N;
    scanf("%d ", &N);
    Artefak A[N];
    for (int i = 0; i < N-1 ; i++){
        scanf("%s %s %d %d ", &A[i].nama, &A[i].kategori, &A[i].nilai, &A[i].tahun);
    }
    scanf("%s %s %d %d", &A[N-1].nama, &A[N-1].kategori, &A[N-1].nilai, &A[N-1].tahun);

    //test print
    /*
    for (int i = 0; i< N;i++){
        printf("%s %s %d %d \n", &A[i].nama, &A[i].kategori, A[i].nilai, A[i].tahun);
    }
    */
    Artefak temp;
    bool swapped;
    for (int i = 0; i < N-1;i++){
        swapped = false;
        for(int j = 0;j<N-i-1;j++){
            if (strcmp(A[j].kategori, A[j+1].kategori)>0){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                swapped = true;
            }
        }
        if (swapped == false){
            break;
        }
    }
    for (int i = 0; i < N-1;i++){
        
        
        swapped = false;
        for(int j = 0;j<N-1-i;j++){
            if (strcmp(A[j].kategori, A[j+1].kategori) == 0){
                if(A[j].tahun < A [j+1].tahun){
                    
                    temp = A[j];
                    A[j] = A[j+1];
                    A[j+1] = temp;
                    swapped = true;
                }
            }
        }
        if (swapped == false){
            break;
        }
    }

    for (int i = 0; i < N-1;i++){
        swapped = false;
        for(int j = 0;j<N-i-1;j++){
            if (strcmp(A[j].kategori, A[j+1].kategori) == 0){
                if(A[j].tahun == A [j+1].tahun){
                    if(A[j].nilai < A[j+1].nilai){
                        temp = A[j];
                        A[j] = A[j+1];
                        A[j+1] = temp;  
                        swapped = true;
                    }
                }
            }
        }
        if (swapped == false){
            break;
        }
    }
    
    for (int i = 0; i < N-1;i++){
        
       swapped = false;
        for(int j = 0;j<N-i-1;j++){
            if (strcmp(A[j].kategori, A[j+1].kategori) == 0){
                if(A[j].tahun == A [j+1].tahun){
                    if(A[j].nilai == A[j+1].nilai){
                        if(strcmp(A[j].kategori , A[j+1].kategori)>0){
                            temp = A[j];
                            A[j] = A[j+1];
                            A[j+1] = temp;
                            swapped = true;
                        }
                    }
                }
            }
        }
        if (swapped == false){
            break;
        }
    }
    
    
    for (int i = 0; i< N;i++){
        printf("%s %s %d %d\n", &A[i].nama, &A[i].kategori, A[i].nilai, A[i].tahun);
    }
    

}
