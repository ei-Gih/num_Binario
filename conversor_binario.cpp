#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{
	int i=0;
	int N,bin,bits;

	
	printf("\n CONVERSAO DE NUMERO DECIMAL PARA BINARIO.");
	
	printf("\n Digite um numero intero diferente de zero: ");
	scanf("%d",&N);
	printf("\n Voce quer a representação em quantos bits?");
	scanf("%d",&bits);
	
	while(i<bits){
		bin=N%2;
		printf("\n%d",bin);
		N=N/2;
		i=i+1;
	}
	if(N!=1){
		printf("\n\n O numero nao pode ser representado em %d",bits);
		printf("bits");
	}
	else{
		printf("\n\nRepresentacao bem sucedida.");
		printf("\n\n O numero deve ser lido de baixo para cima!\n");
	}
	printf("\n Pressione a tecla ENTER para sair!");
	return(0);
	
	
}
