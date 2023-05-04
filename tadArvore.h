/*
Alunos:
Kauan Eiji Kataoka Eguchi 128854
Henrique Hiroshi Maeda 131594
*/

/*
Escreva um TADABB para uma �rvore Bin�ria de Busca que cont�m as seguintes fun��es: criar
�rvore, inserir elementos na �rvore e destruir �rvore. A fun��o que destr�i a �rvore deve liberar
cada n� individualmente. Para isso, utilize um algoritmo para percurso em �rvore. Esta fun��o
deve receber como par�metro um ponteiro para um n� da �rvore. A fun��o principal (main)
tamb�m deve ser implementada. Para remover somente n�s folhas, utilize um dos percursos em
�rvore bin�ria de busca para chegar nas folhas.
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

// Cria uma �rvore
ARVORE_BINARIA *criar_arvore();

// Cria um n�
NO *criar_no(int valor);

// inserir valor na �rvore com um auxiliar
NO *inserir_aux(NO *no, int valor);

// insere um valor na �rvore
void inserir(ARVORE_BINARIA *arvore, int valor);

// Percurso em ordem da �rvore
void posordem_aux(NO *raiz);

// Percurso em ordem da �rvore com remo��o
void posordem_free(NO *raiz);

void posordem(ARVORE_BINARIA *arvore);
