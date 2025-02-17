#include <stdio.h>
#include <stdlib.h>
#include <string.h>



//aritimetica de ponteiros;;
//o nome de um vetor ja é um ponteiro.... ele contem o endereço de memoria;

typedef struct {
    int no;
    int raiz;
    int *valor_esquerda;
    int *valor_direita;

}arvore;


//procedimento para inserir um valor na arvore;;
void inserirValor(int raiz, int valor){
    arvore arvore;
    arvore.raiz = raiz;
    if(arvore.raiz == NULL){
        arvore.raiz = valor;//se a arvore for vazia o valor que o usuario inseriu sera a raiz da arvore;
    }
    else{
        if(valor > arvore.raiz){
            arvore.valor_direita = &valor;
            printf("\n\t valor %d inserido a direita ",valor);
        }
        else{
            arvore.valor_esquerda = &valor;
            printf("\n\t valor %d inserido na esquerda",valor);
        }
    }

}

//procedimento para excluir um valor na arvore;
void excluirValor(int valor){
    arvore arvore;
    if(arvore.no || arvore.raiz == NULL){
        return NULL;
    }
    else{
        valor == NULL;
        free(valor);//VALOR DISPONIVEL PARA RECICLAGEM;
    }

}

int main(void){
    arvore arvore;

    arvore.raiz = 250;//no raiz da minha arvore;

    printf("\n\t digite um valor para preencher a arvore :");
    scanf("%d",&arvore.no);

    inserirValor(arvore.raiz,arvore.no);

}




















/* int i, vet[10] ={78,0,1,2,3,4,5,6,7,8,9};

    /*for(int i=0;i<10;i++){
        printf(" %d ",*(vet+ i));//aritimetica de ponteiros para gerar a impressao de todos endereço do vetor(numero);//
    }

    for(i=0;i<10;i++){
        printf(" %d ",*vet);//a chamada do vetor vet ja é um ponteiro, ou seja, a partir que voce declara um vetor o nome de indetificaçao desse vetor ja torna um ponteiro.
    }

    return 0;*/