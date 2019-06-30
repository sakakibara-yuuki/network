#include<stdio.h>
#include<stdlib.h>
#include "network.h"


double* AtoC(int m, int n, double* A){//隣接行列ajust to connection
    double* C;
    int k=0;
    C=(double*)malloc(sizeof(double)*m*m*m);
    

    for(int j=0; j<m*m*m; j++){
        *(C+j)=0;
    }

    if(m != n){
        printf("This is not a Ajust matrix.\n");
    }else
    {
        for(int i=0; i<m; i++){
            for(int j=0; j<m; j++){
                k=j+i*m;
                *(C+k*m+i)=*(A+i+j*m);
                *(C+k*m+j)=*(A+i+j*m);
            }
        }
    }
    
    return C;

}
