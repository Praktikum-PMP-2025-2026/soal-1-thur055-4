#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
    char buffer[100];
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
    for (int i = 0; i < N-1;i++){
        int min_idx = i;
        for (int j = i+1; j<N;j++){
            if (i != j){
                if(strcmp(A[min_idx].kategori , A[j].kategori)>0){
                    min_idx = j;
                }
            }
        }
        temp = A[i];
        A[i] = A[min_idx];
        A[min_idx] = temp;
    }
    for (int i = 0; i < N-1;i++){
        
        int min_idx = i;
        for (int j = i+1; j<N ;j++){
            if (i != j){
                if(A[i].kategori == A[j].kategori){
                    if(A[i].tahun < A[j].tahun){
                        min_idx = j;
                    }
                }
            }
        }
        temp = A[i];
        A[i] = A[min_idx];
        A[min_idx] = temp;
    }

    for (int i = 0; i < N-1;i++){
        int min_idx = i;
        
        for (int j = i+1; j<N;j++){
            if (i != j){
                if(A[i].kategori == A[j].kategori){
                    if(A[i].tahun == A[j].tahun){
                        if(A[i].nilai > A[j].nilai){
                            min_idx = j;
                        }
                    }
                }
            }
        }
        temp = A[i];
        A[i] = A[min_idx];
        A[min_idx] = temp;
    }
    for (int i = 0; i < N-1;i++){
        
        int min_idx = i;
        for (int j = i+1; j<N;j++){
            if (i != j){
                if(A[i].kategori == A[j].kategori){
                    if(A[i].tahun == A[j].tahun){
                        if(A[i].nilai == A[j].nilai){
                            if(strcmp(A[min_idx].nama, A[j].nama)> 0){
                                min_idx = j;
                            }
                        }
                    }
                }
            }
        }
        temp = A[i];
        A[i] = A[min_idx];
        A[min_idx] = temp;
    }
    for (int i = 0; i< N;i++){
        printf("%s %s %d %d\n", &A[i].nama, &A[i].kategori, A[i].nilai, A[i].tahun);
    }
    

}
