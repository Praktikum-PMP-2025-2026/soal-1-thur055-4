#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Artefak
{
    char *nama;
    char *kategori;
    int tahun;
    int nilai;
} Artefak;


int main (){
    int N;
    scanf("%d ", &N);
    Artefak A[100];
    char buffer[100];
    for (int i = 0; i < N-1 ; i++){
        A[i].nama = (char*)malloc(strlen(buffer));
        A[i].kategori = (char*)malloc(strlen(buffer));
        scanf("%s %s %d %d ", &A[i].nama, &A[i].kategori, &A[i].nilai, &A[i].tahun);
    }
    A[N-1].nama = (char*)malloc(strlen(buffer));
    A[N-1].kategori = (char*)malloc(strlen(buffer));
    scanf("%s %s %d %d", &A[N-1].nama, &A[N-1].kategori, &A[N-1].nilai, &A[N-1].tahun);

    //test print
    /*
    for (int i = 0; i< N;i++){
        printf("%s %s %d %d \n", &A[i].nama, &A[i].kategori, A[i].nilai, A[i].tahun);
    }
    */
    Artefak temp;
    for (int i = 0; i < N-1;i++){
        //sort dulu
        //printf("%c\n", &A[i].kategori[0]);
        temp.nama = (char*)malloc(strlen(buffer));
        temp.kategori = (char*)malloc(strlen(buffer));
        int min_idx = i;
        for (int j = i+1; j<N;j++){
            if(&A[i].kategori[0] - 'a' > &A[j].kategori[0] - 'a'){
                min_idx = j;
            }
        }
        temp = A[i];
        A[i] = A[min_idx];
        A[min_idx] = temp;
    }
    for (int i = 0; i < N-1;i++){
        //sort dulu
        //printf("%c\n", &A[i].kategori[0]);
        temp.nama = (char*)malloc(strlen(buffer));
        temp.kategori = (char*)malloc(strlen(buffer));
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
        //sort dulu
        //printf("%c\n", &A[i].kategori[0]);
        temp.nama = (char*)malloc(strlen(buffer));
        temp.kategori = (char*)malloc(strlen(buffer));
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
        //sort dulu
        //printf("%c\n", &A[i].kategori[0]);
        temp.nama = (char*)malloc(strlen(buffer));
        temp.kategori = (char*)malloc(strlen(buffer));
        int min_idx = i;
        for (int j = i+1; j<N;j++){
            if (i != j){
                if(A[i].kategori == A[j].kategori){
                    if(A[i].tahun == A[j].tahun){
                        if(A[i].nilai == A[j].nilai){
                            if(strcmp(A[i].nama, A[j].nama) > 0){
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
