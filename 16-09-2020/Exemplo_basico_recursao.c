#include<stdio.h>

void mensagem(int i){ //fun��o que n�o retorna valor
	printf("Bom dia %d\n",i);
	if(i<5){
		mensagem (i+1);
	}
}

int main(){
	mensagem(1);
}
