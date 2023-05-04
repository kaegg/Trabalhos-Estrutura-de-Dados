/*
Alunos:
Kauan Eiji Kataoka Eguchi
Henrique Hiroshi Maeda
*/

/*
Escreva um TADABB para uma Árvore Binária de Busca que contém as seguintes funções: criar
árvore, inserir elementos na árvore e destruir árvore. A função que destrói a árvore deve liberar
cada nó individualmente. Para isso, utilize um algoritmo para percurso em árvore. Esta função
deve receber como parâmetro um ponteiro para um nó da árvore. A função principal (main)
também deve ser implementada. Para remover somente nós folhas, utilize um dos percursos em
árvore binária de busca para chegar nas folhas.
*/

typedef struct no NO;
typedef struct arvore_binaria ARVORE_BINARIA;

struct no {
    int valor;
    NO *filhoesq;
    NO *filhodir;
};

struct arvore_binaria {
    NO *raiz;
};

// Cria uma árvore
ARVORE_BINARIA *criar_arvore();

// Cria um nó
NO *criar_no(int valor);

// inserir valor na árvore com um auxiliar
NO *inserir_aux(NO *no, int valor);

// insere um valor na árvore
void inserir(ARVORE_BINARIA *arvore, int valor);

// Percurso em ordem da árvore
void posordem_aux(NO *raiz);

// Percurso em ordem da árvore com remoção
void posordem_free(NO *raiz);

void posordem(ARVORE_BINARIA *arvore);
