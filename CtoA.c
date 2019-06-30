#include<stdio.h>
#include<stdlib.h>
#include "network.h"


double* CtoA(int m, int n, double* C){//隣接行列ajust to connection
    double* A;
    A=(double*)malloc(sizeof(double)*m*m);
    int k=0;

    for(int j=0; j<m*m; j++){
        *(A+j)=0;
    }

    if(n != m*m){
        printf("This is not a Ajust matrix.\n");
    }else
    {
        for(int i=0; i<m; i++){
            for(int j=0; j<m; j++){
                *(A+i+j*m)=*(C+i+k*m);
                k++;
            }
        }
    }
    
    return A;

}
