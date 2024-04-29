#include <stdio.h>
#include <stdlib.h>

int numero_um, numero_dois, resultado, operador, op;


int main(){
	do{
	printf("digite um numero inteiro: \n");
	scanf("%d", &numero_um);
	
	printf("digite outro numero inteiro: \n");
	scanf("%d", &numero_dois);
	
	printf("qual a operação: 1 - soma, 2 -subtração, 3 -divisão, 4 - multiplicação \n");
	scanf("%d", &operador);
	
	if(operador == 1){
		resultado = numero_um + numero_dois;
		printf("A soma resultou em %d \n", resultado);
	}
	else if(operador == 2){
		resultado = numero_um - numero_dois;
		printf("A subtracao resultou em %d \n", resultado);
	}
	else if(operador == 3){
		resultado = numero_um / numero_dois;
		printf("A divisao resultou em %d \n", resultado);
	}
	else if(operador == 4){
		resultado = numero_um * numero_dois;
		printf("A multiplicacao resultou em %d \n", resultado);
	}
	printf("Deseja fazer outra operacao: 1-S, 2-N \n");
	scanf("%d", &op);


	  }while(op==1);
		
	return 0;
}
