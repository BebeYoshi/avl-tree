#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
    int chave, fatorb;
    struct no* esquerda;
    struct no* direita;
    struct no* pai;
}no;
typedef struct arvore
{
    no* raiz;
}arvore;
arvore* criarArvore()
{
    arvore* arv= (arvore*)malloc(sizeof(arvore));
    if (arv == NULL)
        return NULL;
    arv->raiz = NULL;
    return arv;
}
no* pesquisa(arvore* arv, int chave)
{
    no* aux=arv->raiz;
    if (arv == NULL)
        return NULL;
    while(aux!=NULL)
    {
        if(aux->chave==chave)
        {
            return aux;
        }
        if(aux->chave>chave)
        {
            aux=aux->esquerda;
            continue;
        }
        if(aux->chave<chave)
        {
            aux=aux->direita;
            continue;
        }
    }
    return NULL;
}
int altura(no* aux)
{
    while(aux)
    {

    }
    if(ae>ad)
    {
        return(ae+1);
    }
    else
    {
        return(ad+1);
    }
}
no* balanceia(no* des)
{
    if(des->fatorb < -1){
        if(des->esquerda->fatorb > 0){
            des->esquerda = rot_esquerda(des->esquerda);
        }

        des = rot_direita(des);
    }

    else if(des->fatorb > 1){
        if(des->direita->fatorb < 0){
            des->direita = rot_direita(des->direita);
        }

        des = rot_esquerda(des);
    }

    return des;
}
