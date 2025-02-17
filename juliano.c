#include <stdio.h>
#include <stdlib.h>
#include <string.h>



//desevolver um algoritmo de uma arvore binario, em que deve ter, também, o calculo e retorno da altura e quantidade de niveis que tem a arvore;
// retorna a quantidade total de elementos que estao na arvore;

//sempre preciso de um ponteiro para  o endereço do no raiz da minha arvore

typedef struct no {
    int info;// conteudo que sera referenciado(valor que sera inserido , buscado , manipulado...)
    struct no *noEsquerda;//struct do no que ira apontar para a esquerda
    struct no *noDireita;//struct do no qu e ira apontar para a direita;

}No;//representação dos no da arvore;

typedef struct {
    No *raiz;//representaçao da raiz da arvore;
    long int tamanhoArvore;//tamanho da arvore em bytes;
    int quantidadeElementos;//representa a quantidade de elementos na arvore;
    int nivel;//representa o nivel da arvore;
    int altura;//representa a altura da arvore;
    

}ArvBinaria;//representação da arvore;


//procedimento para inserir um valor a esquerda.. valor que sera menor que o no raiz(tanto da arvore quanto de uma sub-arvore);
void inserirEsquerda(No *no,int valor){
    if(no->noEsquerda == NULL){
        No *novo = (No*)malloc(sizeof(No));
        novo->info = valor;
        novo->noDireita = NULL;
        novo->noEsquerda = NULL;
        no->noEsquerda= novo;
    }
    else{
        if(valor < no->noEsquerda->info){
            inserirEsquerda(no->noEsquerda,valor);
        }
        else{
            inserirDireita(no->noEsquerda,valor);
        }
    }
}
//procedimento para inserir um valor a direita.. valor que sera maior que o no raiz(tanto da arvore quanto de uma sub-arvore);
void inserirDireita(No *no, int valor){
    if(no->noDireita == NULL){
        No *novo = (No*)malloc(sizeof(No));
        novo->info = valor;
        novo->noDireita = NULL;
        novo->noEsquerda = NULL;
        no->noDireita = novo;
    }
    else{
        if(valor > no->noDireita->info){
            inserirDireita(no->noDireita, valor);
        }
        else{
            inserirEsquerda(no->noDireita, valor);
        }
    }
}
//procedimento para inserir um novo valor na arvore;;
void inserirConteudo(ArvBinaria arvore, int valor){
    if(arvore.raiz == NULL){
        No *novo  = (No*)malloc(sizeof(No));//criando e alocando de forma dinamica um novo no na memoria de tamanho em bytes da estrutura No;
        novo->info = valor;
        novo->noEsquerda =NULL;
        novo->noDireita = NULL;
        arvore.raiz = novo;
    }
    else{
        if(valor < arvore.raiz->info){
            inserirEsquerda(arvore.raiz, valor);
        }
        else{
            inserirDireita(arvore.raiz, valor);   
        }
    }
}
//procedimento para imprimir os valores que estao na arvore na pre-ordem;
void imprimirArvorePreOrdem(No *raiz){
    if(raiz != NULL){
        printf(" %d ",raiz->info);
        imprimirArvorePreOrdem(raiz->noEsquerda);
        imprimirArvorePreOrdem(raiz->noDireita);
    }
    else{
        printf("\n\t a arvore binaria vazia.");
    }
}
//procedimento para imprimir os valores que estao na arvore de forma simetrica;
void imprimirArvoreSimetrica(No *raiz){
    imprimirArvoreSimetrica(raiz->noEsquerda);    
    printf(" %d ",raiz->info);
    imprimirArvoreSimetrica(raiz->noDireita);
}
//procedimento para imprimir os valores que estao na arvore de forma pos-ordem.
void imprimirArvorePosOrdem(No *raiz){
    imprimirArvoreSimetrica(raiz->noEsquerda);    
    imprimirArvoreSimetrica(raiz->noDireita);
    printf(" %d ",raiz->info);
}
//funcao para calcular a quantidade de elementos na arvore;
int quantidadeElementos(No *raiz){
    if(raiz == NULL){
        return 0;
    }
    else{
        return 1 + quantidadeElementos(raiz->noEsquerda) + quantidadeElementos(raiz->noDireita);
    }
}
//funcao busca , remover , indicar a quantidade de nivel, indicar o tamanho da altura da arvore,
//indicar a quantidade de elementos na arvore, a quantidade de bytes da arvore(tamanho em bytes da arvore), indicar em que nivel o no esta na arvore;

int main(void){
    
    printf("hello wrodl");
    return 0;
}
