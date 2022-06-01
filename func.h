 //declaraçao de variaveis globais//
int sexo[];
float altura[];
int posicaomaiorAlturaHomem;
float alturamaiorhomem=0;

 
 //declaraçao de funções//
int perguntarQuantidadePessoas();
void loopEntradaSexoAltura(int numeroLoops);
void loopRespostaA(int numeroLoops);
 
 


int perguntarQuantidadePessoas(){
	int entrada;
	printf("Quantas pessoas vc gostaria de adicionar?");
	scanf("%d", &entrada);
	return entrada;
}

void loopEntradaSexoAltura(int numeroLoops){
	int cont;
	for(cont=0; cont<numeroLoops; cont++){
		printf("Digite 1 para homem e 2 para mulheres: ");
		scanf("%d", &sexo[cont]);
		printf("Digite sua altura: ");
		scanf("%f", &altura[cont]);
		
		
				
		if( sexo[cont]==1){
			
			if(alturamaiorhomem<altura[cont]){
				alturamaiorhomem=altura[cont];				
				posicaomaiorAlturaHomem=cont;
			}
		} 	
	}
}

void loopRespostaA(int numeroLoops){
	int cont;
	printf("Letra A\n\n");
	for(cont=0; cont<numeroLoops; cont++){
		if(sexo[cont]==1){
			printf("Homem, de altura:%2.2f\n",altura[cont]);
		}
		else{
			printf("Mulher, altura:%2.2f\n\n",altura[cont]);
		}
		
	}
}

void loopRespostaB(){
	printf("Letra B\n\n");
	printf("A maior altura dos Homens:%2.2f\n",alturamaiorhomem);
	printf("A posicao do homem de maior altura e:%d   e sua altura e:%2.2f\n",posicaomaiorAlturaHomem,altura[posicaomaiorAlturaHomem]);
}


