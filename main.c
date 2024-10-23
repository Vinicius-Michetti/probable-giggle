#include <stdio.h>
#include <stdlib.h>

/*
Desenvolva um programa que instancie um vetor de inteiros A utilizando malloc. O programa
deve ler um valor k, onde k é positivo e menor que o tamanho do vetor (rejeite entradas
inválidas). Implemente um procedimento que receba como parâmetros o vetor A, o tamanho do
vetor |A| e o valor k. Retorne o k-ésimo menor elemento do vetor.
Ex.: A = {3, 5, 7, 8 ,12, 14, 15, 16}, k = 3, retorno = 7.
*/

void procedimento (int *vetorA, int tamanho, int k){

     printf("O k-enesimo termo do vetor eh: %d", vetorA[k - 1]);
}

int main()
{
    int tamanho, k;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int *vetorA = (int*)malloc(tamanho*sizeof(int));

    printf("Digite valores para o vetor A\n");
    for (int i = 0; i < tamanho; i++){
        printf("Digite o valor do elemento %d: ", i);
        scanf("%d", &vetorA[i]);
    }

    do{
        printf("Digite um valor para k:");
        scanf("%d", &k);
        if (k > tamanho){
            printf("Digite novamente um valor para k, menor que o tamanho do vetor\n");
        }
        }while(k > tamanho || k < 1);

    procedimento(vetorA, tamanho, k);

    free(vetorA);

}
