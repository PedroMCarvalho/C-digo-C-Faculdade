#include <stdio.h>
#include <stdlib.h>
#include "func.h"

/*
1 Fa�a um programa que receba como dados de entrada a altura e o sexo de 10 pessoas
e mostre como resultado:
A)A lista com a altura e o sexo respectivamente digitado;
B)Qual foi a maior altura para homens;

2 Fa�a um prorgama que receba como ados de entrada a matricula e o salario de dez funcionarios e mostre como resultado:
A)A lista com a matricula e o salario de cada funcionario digitado;
B)Qual a m�dia dos salarios entre mil e trem mil reais;

 */


main() {
	
	int opcao=0;
	

	opcao = perguntarQuantidadePessoas();

	
 	loopEntradaSexoAltura(opcao);
	
	
	loopRespostaA(opcao);
	
	
	loopRespostaB();
	
	
	return 0;
}


