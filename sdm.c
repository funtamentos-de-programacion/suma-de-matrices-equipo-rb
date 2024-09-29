#include <stdio.h>
#define TAM 1000
int main(){

    int m1,n1,m2,n2,j,i;
    int a[TAM][TAM], b[TAM][TAM], c[TAM][TAM];
    do{
        printf("Dame el numero de filas y columnas de la primer matriz\nfilas\ncolumnas\n");
        scanf("%d %d", &m1,&n1);
    }while(m1!=m2 || n1!=n2);

    for(j=0;j<n1;j++){
        for(i=0;i<m1;i++){
            printf("Dame el valor de la primer matriz en [%d] [%d]\n", j, i);
            scanf("%d",&a[j][i]);
        }

    }

    for(j=0;j<n1;j++){
        for(i=0;i<m1;i++){
            printf("Dame el valor de la segunda matriz en [%d] [%d]\n", j, i);
            scanf("%d",&b[j][i]);
        }

    }

    for(j=0;j<n1;j++){
        for(i=0;i<m1;i++){
            printf("La primer matriz es:\n", a[j][i]);
            printf("La primer matriz es:\n", b[j][i]);

            printf("La matriz resultante de la suma de las matrices es:\n", c[j][i]=a[j][i]+b[j][i]);

        }

    }

}