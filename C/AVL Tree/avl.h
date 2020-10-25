#ifndef AVLH
#define AVLH

typedef struct avlno AVL;

typedef struct
{
	int value;
}Info;

struct avlno
{
	Info *info;
	int balance;
	struct avlno *left, *right;
};

/* funcao: AVL *createAVL()
   *  acao:        funcao que cria uma AVL
   *  entrada:     void
   *  saida:       ponteiro para uma AVL
   *  suposicoes:  nenhuma
*/
AVL *createAVL(void);

/* funcao: Node *createNode()
   *  acao:        funcao que cria um novo no o qual devera ser inserido na arvore
   *  entrada:     elemento de informacao do novo no
   *  saida:       ponteiro para um no
   *  suposicoes:  nenhuma
*/
struct avlno *createNodeAVL(Info *inf);

/* funcao: AVL * leftAVL(AVL *avl)
   *  acao:        retorna a sub�rvore esquerda de uma �rvore avl
   *  entrada:     ponteiro para a �rvore avl (avl)
   *  saida:       ponteiro para a sub�rvore esquerda de avl
   *  suposicoes:  �rvore avl
*/
AVL *leftAVL(AVL *avl);

/* funcao: Info *createInfo(int i)
   *  acao:        funcao que aloca espaco para um elemento de informacao
   *  entrada:     inteiro representando o novo elemento de informacao
   *  saida:       ponteiro para a area de memoria do elemento de informacao
   *  suposicoes:  nenhuma
*/
Info *createInfo(int i);


/* funcao: AVL * rightAVL(AVL *avl)
   *  acao:        retorna a sub�rvore direita de uma �rvore avl
   *  entrada:     ponteiro para a �rvore avl (avl)
   *  saida:       ponteiro para a sub�rvore direita de avl
   *  suposicoes:  �rvore avl
*/
AVL *rightAVL(AVL *avl);

/* funcao: Info * rootAVL(AVL *avl)
   *  acao:        retorna o elemento de informacao da raiz de uma �rvore avl
   *  entrada:     ponteiro para a �rvore avl (avl)
   *  saida:       ponteiro para o elemento de informacao da raiz da �rvore avl
   *  suposicoes:  �rvore avl
*/
Info *rootAVL(AVL *avl);

/* funcao: int isEmptyAVL(AVL *avl)
   *  acao:        verifica se uma �rvore avl esta vazia ou nula
   *  entrada:     ponteiro para a �rvore avl (avl)
   *  saida:       1, se a arvore avl � vazia ou nula
				   0, caso contrario
   *  suposicoes:  �rvore avl
*/
int isEmptyAVL(AVL *avl);

/* funcao: AVL searchAVL(AVL *avl,Info *inf)
   *  acao:        busca por um elemento de informacao na arvore avl
   *  entrada:     ponteiro para a �rvore avl (avl) e um ponteiro para o elemento de informa��o (inf)
   *  saida:       pontiro para o no da arvore que contem o elemento de informacao buscado
				   NULL, caso contrario
   *  suposicoes:  �rvore avl
*/
AVL *searchAVL(AVL *avl,Info *inf);


/* funcao: int heightAVL(AVL *avl)
   *  acao:        calcula a altura de uma arvore avl
   *  entrada:     ponteiro para a �rvore avl (avl)
   *  saida:       inteiro representando a altura da arvore
   *  suposicoes:  �rvore avl
*/
int heightAVL(AVL *avl);

/* funcao: int insertAVL(AVL **avl,Info *inf)
   *  acao:        insere um elemento de informacao na arvore avl
   *  entrada:     endere�o de um ponteiro para a �rvore avl (avl) e um ponteiro para o elemento de informa��o a ser inserido (inf)
   *  saida:		1, caso a inser��o ocorra com sucesso
   					0, caso contrario
   *  suposicoes:  �rvore avl
*/
int insertAVL(AVL **avl,Info *inf);

/* funcao: int auxInsertAVL(AVL** avl, Info *inf, int *growup)
   *  acao:        aux insere um elemento de informacao na arvore avl
   *  entrada:     endere�o de um ponteiro para a �rvore avl (avl) e um ponteiro para o elemento de informa��o a ser inserido (inf)
   *  saida:		1, caso a inser��o ocorra com sucesso
   					0, caso contrario
   *  suposicoes:  �rvore avl
*/
int auxInsertAVL(AVL** avl, Info *inf, int *growup);

/* funcao: void LL_RotationAVL(AVL** avl)
   *  acao:        realiza rotacao LL em uma arvore avl
   *  entrada:     ponteiro para a �rvore avl (avl) apontando para o no critico
   *  saida:       void
   *  suposicoes:  �rvore avl
*/
void LL_RotationAVL(AVL** avl);

/* funcao: void RR_RotationAVL(AVL** avl)
   *  acao:        realiza rotacao RR em uma arvore avl
   *  entrada:     ponteiro para a �rvore avl (avl) apontando para o no critico
   *  saida:       void
   *  suposicoes:  �rvore avl
*/
void RR_RotationAVL(AVL** avl);

/* funcao: void LR_RotationAVL(AVL** avl)
   *  acao:        realiza rotacao LR em uma arvore avl
   *  entrada:     ponteiro para a �rvore avl (avl) apontando para o no critico
   *  saida:       void
   *  suposicoes:  �rvore avl
*/
void LR_RotationAVL(AVL** avl);

/* funcao: void RL_RotationAVL(AVL** avl)
   *  acao:        realiza rotacao RL em uma arvore avl
   *  entrada:     ponteiro para a �rvore avl (avl) apontando para o no critico
   *  saida:       void
   *  suposicoes:  �rvore avl
*/
void RL_RotationAVL(AVL** avl);

/* funcao: AVL * deleteAVL(AVL *avl,Info *inf)
   *  acao:        eliminar um elemento de informa��o da arvore, e mantem a arvore avl
   *  entrada:     ponteiro para a �rvore binaria avl e ponteiro para o elemento de informa��o a ser deletado inf
   *  saida:       ponteiro para a arvore com o elemento de informcao deletado
   *  suposicoes:  �rvore avl
*/
AVL *deleteAVL(AVL *avl,Info *inf);

/* funcao: void printPreOrderAVL(AVL *avl)
   *  acao:        imprime os elementos de informa��o considerando o caminho em PreOrdem da arvore
   *  entrada:     ponteiro para a �rvore binaria avl
   *  saida:       void
   *  suposicoes:  �rvore avl
*/
void printPreOrderAVL(AVL *avl);


/* funcao: void printAVL(AVL *avl)
   *  acao:        imprime os elementos de informa��o considerando o caminho em profundidade da arvore
   *  entrada:     ponteiro para a �rvore binaria avl
   *  saida:       void
   *  suposicoes:  �rvore avl
*/
void printAVL(AVL *avl);

/* funcao: void auxprintAVL(AVL *avl)
   *  acao:        imprime os elementos de informa��o considerando o caminho em profundidade da arvore
   *  entrada:     ponteiro para a �rvore binaria avl
   *  saida:       void
   *  suposicoes:  �rvore avl
*/
void auxprintAVL(AVL *avl);

/* funcao: *findLargestElementAVL(AVL *avl)
   *  acao:        encontra o elemento mais a direita da arvore AVL.
   *  entrada:     ponteiro para a arvore binaria avl
   *  saida:       ponteiro para o elemento mais a direita da arvore AVL
   *  suposicoes:  arvore avl
*/
AVL *findLargestElementAVL(AVL *avl);

/* funcao: AVL *auxDeleteAVL(AVL *avl, Info *inf, int *growup)
   *  acao:        Auxilia a função deleteAVL a eliminar o elemento da arvore.
   *  entrada:     ponteiro para a arvore binaria avl, ponteiro para o elemento de informação a ser deletado, valor do growup.
   *  saida:       ponteiro para arvore AVL;
   *  suposicoes:  arvore avl
*/
AVL *auxDeleteAVL(AVL *avl, Info *inf, int *growup);



#endif // AVLH