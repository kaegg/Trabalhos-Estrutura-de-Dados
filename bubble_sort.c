/*
Alunos:
Kauan Eiji Kataoka Eguchi 
Henrique Hiroshi Maeda
*/

/*
Escreva uma função para o BubbleSort aprimorado. Nessa função, a quantidade de comparações
deve ser reduzida em relação ao método tradicional do BubbleSort.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 500

void bubble_sort_melhorado(int vet[], int num){

    int i, j, aux, troca_passos = 0, trocas_total= 0;
    for(i = 0; i < num - 1; i++){

        printf("\n\n%d Passo: ", i+1);
        troca_passos = 0;

        for(j = 0; j < num - 1 - i; j++){

            if (vet[j] > vet[j+1]) {

                aux = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = aux;
                troca_passos++;
                trocas_total++;

                printf("\n%d ", troca_passos);

                for(int k = 0; k < num; k++){
                    printf("[%d] ", vet[k]);
                }
            }
        }

        if (troca_passos == 0)
            break;
    }

    printf("\n\nvetor final: ");
    for(int m = 0; m < num; m++){
        printf("[%d] ", vet[m]);
    }
    printf("\nnumero de trocas: %d\n", trocas_total);

}

int main(){

    int qtde_valores;
    int i  = 0;
    int valores[MAX];

    printf("Quantos valores voce deseja ordenar? ");
    scanf("%d", &qtde_valores);
    printf("\n");

    while(i < qtde_valores){

        printf("Digite um valor: ");
        scanf("%d", &valores[i]);
        i++;
    }

    printf("\nValores digitados: ");
    for (i = 0; i < qtde_valores; i++){
        printf("[%d] ", valores[i]);
    }

    bubble_sort_melhorado(valores, qtde_valores);
}
