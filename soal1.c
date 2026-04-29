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
    Artefak *A;
    char buffer[100];
    A =  (Artefak*)malloc(sizeof(N));
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
    for (int i = 0; i < N;i++){
        //sort dulu
        //printf("%c\n", &A[i].kategori[0]);
        for (int j = i; j<N;j++){
            if (i != j){
                if(A[i].kategori[0] - 'a' > A[j].kategori[0] - 'a'){
                    strcpy(temp.nama, A[i].nama);
                    strcpy(temp.kategori, A[i].kategori);
                    temp.nilai = A[i].nilai;
                    temp.tahun = A[i].tahun;

                    strcpy(A[i].nama, A[j].nama);
                    strcpy(A[i].kategori, A[j].kategori);
                    A[i].nilai = A[j].nilai;
                    A[i].tahun = A[j].tahun;

                    strcpy(A[j].nama, temp.nama);
                    strcpy(A[j].kategori,temp.kategori);
                    A[j].nilai = temp.nilai;
                    A[j].tahun = temp.tahun;

                }
            }
        }
    }
    
    for (int i = 0; i< N;i++){
        printf("%s %s %d %d \n", &A[i].nama, &A[i].kategori, A[i].nilai, A[i].tahun);
    }
    

}
