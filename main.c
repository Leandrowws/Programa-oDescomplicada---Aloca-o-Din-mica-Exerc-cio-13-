#include<stdlib.h>
#include<stdio.h>


int Procurar(int **matriz, int nLinha, int nColuna, int valor) {
    for(int i=0; i<nLinha;i++) {
        for(int j=0;j<nColuna;j++) {
            if(valor==matriz[i][j])
            return 1;
        }
    }
    return 0;
}



int main(int argc, char const *argv[]) {
    
    int nLinha, nColuna, k=0;
    scanf("%d %d", &nLinha, &nColuna);
    int **matriz = (int**)malloc(sizeof(int*)*nLinha);

    if (matriz == NULL) return 1;

    for(int i=0; i<nLinha; i++)
        matriz[i] = (int*)malloc(sizeof(int)*nColuna);

    for(int i=0; i<nLinha; i++) {
        for(int j=0; j<nColuna;j++) {
            matriz[i][j] = k;
            k++;
        } 
    }

    printf("Matriz: \n");
    for(int i=0; i<nLinha; i++) {
        for(int j=0; j<nColuna; j++) {
            printf("%d  ", matriz[i][j]);
        }
         printf("\n");
    }

    
    printf("Restultado da Funcao: %d", Procurar(matriz, nLinha, nColuna, 12));



    for(int i=0; i<nLinha; i++)
        free(matriz[i]);

    free(matriz);
    return 0;
}
