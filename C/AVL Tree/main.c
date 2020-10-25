#include<stdio.h>
#include "avl.c"

int main()
{
	Info *tempInfo;
	AVL *avl=createAVL();
	
	tempInfo=createInfo(50);
	insertAVL(&avl,tempInfo);
	printf("\n No % inserido",tempInfo->value);
	printAVL(avl);
	
	tempInfo=createInfo(60);
  	insertAVL(&avl,tempInfo);
  	printf("\n No % inserido",tempInfo->value);
	printAVL(avl);
	
	tempInfo=createInfo(70);
	insertAVL(&avl,tempInfo);	
	printf("\n No % inserido",tempInfo->value);
	printAVL(avl);
	
	tempInfo=createInfo(80);
	insertAVL(&avl,tempInfo);
	printf("\n No % inserido",tempInfo->value);
	printAVL(avl);
	
	tempInfo=createInfo(90);
	if(insertAVL(&avl,tempInfo))	printf("\n No % inserido",tempInfo->value);
	printAVL(avl);
	
	tempInfo=createInfo(100);
	insertAVL(&avl,tempInfo);
	printf("\n No % inserido",tempInfo->value);
	printAVL(avl);
	
	tempInfo=createInfo(110);
	insertAVL(&avl,tempInfo);
	printf("\n No % inserido",tempInfo->value);
	printAVL(avl);
	
	tempInfo=createInfo(30);
	insertAVL(&avl,tempInfo);
	printf("\n No % inserido",tempInfo->value);
	printAVL(avl);
	
	tempInfo=createInfo(80);
	insertAVL(&avl,tempInfo);
	printf("\n No % inserido",tempInfo->value);
	printAVL(avl);
	
	tempInfo=createInfo(72);
	insertAVL(&avl,tempInfo);
	printf("\n No % inserido",tempInfo->value);
	printAVL(avl);
	
	tempInfo=createInfo(70);
	insertAVL(&avl,tempInfo);
	printf("\n No % inserido",tempInfo->value);
	printAVL(avl);
	
	tempInfo=createInfo(60);
	insertAVL(&avl,tempInfo);
	printf("\n No % inserido",tempInfo->value);
	printAVL(avl);
	
	tempInfo=createInfo(92);
	insertAVL(&avl,tempInfo);
	printf("\n No % inserido",tempInfo->value);
	printAVL(avl);
	

	
	printf("\nArvore AVL impressa em EmOrdem= ");
	printAVL(avl);
	printf("\nArvore AVL impressa em PreOrdem= ");
	printPreOrderAVL(avl);
		
// verificar se elemento existe	
	printf("\n***2) Buscar por um elemento na Arvore AVL***");
	tempInfo=createInfo(12);
	if(searchAVL(avl,tempInfo))
	{
		printf("\n Elemento %d Pertence a AVL ",tempInfo->value);
	}
	tempInfo=createInfo(22);
	if(searchAVL(avl,tempInfo))
	{
		printf("\n Elemento %d Pertence a AVL ",tempInfo->value);
	}
	else printf("\n Elemento %d NAO Pertence a AVL ",tempInfo->value);
	tempInfo=createInfo(92);
	if(searchAVL(avl,tempInfo))
	{
		printf("\n Elemento %d Pertence a AVL ",tempInfo->value);
	}
	printf("\n***3) Calcular a altura (height) da Arvore AVL***");
	printf("\n Altura da arvore AVL eh= %d",heightAVL(avl));
	
// PARA VERIFICAR A EXECUCAO DO deleteAVL, DESCOMENTAR O CODIGO A SEGUIR E
//	EXECUTAR O TESTE.


	printf("\n***9) Deletar Elementos da Arvore AVL***");
	tempInfo=createInfo(80);
	printf("\n Deletar um elemento %d da arvore AVL",tempInfo->value);
	avl=deleteAVL(avl,tempInfo);
	printf("\nArvore AVL impressa em EmOrdem= ");
	printAVL(avl);
	printf("\nArvore AVL impressa em PreOrdem= ");
	printPreOrderAVL(avl);
	
	tempInfo=createInfo(23);
	printf("\n Deletar um elemento %d da arvore AVL",tempInfo->value);
	avl=deleteAVL(avl,tempInfo);
	printf("\nArvore AVL impressa em EmOrdem= ");
	printAVL(avl);
	printf("\nArvore AVL impressa em PreOrdem= ");
	printPreOrderAVL(avl);
	
	tempInfo=createInfo(12);
	printf("\n Deletar um elemento %d da arvore AVL",tempInfo->value);
	avl=deleteAVL(avl,tempInfo);
	printf("\nArvore AVL impressa em EmOrdem= ");
	printAVL(avl);
	printf("\nArvore AVL impressa em PreOrdem= ");
	printPreOrderAVL(avl);

	printf("\n***10) Inserir Elementos na Arvore AVL***");
	tempInfo=createInfo(180);
	printf("\n Inserir um elemento %d na arvore AVL",tempInfo->value);
	insertAVL(&avl,tempInfo);
	printf("\nArvore AVL impressa em EmOrdem= ");
	printAVL(avl);
	printf("\nArvore AVL impressa em PreOrdem= ");
	printPreOrderAVL(avl);
	
	tempInfo=createInfo(39);
	printf("\n Inserir um elemento %d na arvore AVL",tempInfo->value);
	insertAVL(&avl,tempInfo);
	printf("\nArvore AVL impressa em EmOrdem= ");
	printAVL(avl);
	printf("\nArvore AVL impressa em PreOrdem= ");
	printPreOrderAVL(avl);
	
	

}
