#include<stdio.h>
//Prototipo da função
void le_posicoes(int tamanho, int Vet[]) {
    int i;
    for(i = 0; i < tamanho; i++) {
        printf("Leia a posicao do vetor %d", i + 1);
        scanf("%d" , &Vet[i]);
    }
}

int conta_Pares(int tamanho, int Vet[]) {
    int i;
    int cont = 0;
    for(i = 0; i < tamanho; i++) {
        if(Vet[i] % 2 == 0) {
            cont++;
        }
    }
    return cont;
}

//Função principal
int main() {
    int tamanho = 10;
    int valores[10];
    int contar =  0;

    //Chamar a função
    le_posicoes(tamanho, valores);
    contar = conta_Pares(tamanho, valores);

    //Saida
    printf("\n A quantidade de valores pares no vetor e: %d\n", contar);

    return 0;
}