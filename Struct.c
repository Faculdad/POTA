#include <stdio.h>
#include <stdlib.h>

struct Pessoa { // inicia��o da crian��o da estrutura
	char nome [40]; // declara��o da variavel caractere 
	int idade; // declara��o da variavel inteira
	float salario; // 	declat��o da variavel float
}; struct Pessoa pes; // nome da estrutura

void preenche_registro(Pessoa pes){ // Abrindo estrutura de uma fun��o
	printf("Informe o nome da pessoa:"); // impress�o na tela
	scanf("%s", &pes.nome); // captura/ leitura para dentro do espa�o anteriormente reservado/ declarado
	printf("Informe a idade da pessoa:");
	scanf("%d", &pes.idade);
	printf("Informe o salari da pessoa:");
	scanf("%f", &pes.salario);
	printf("O nome da pessoa e: %s, a idade e %d, o salario e %.2f\n", pes.nome, pes.idade, pes.salario)
	
}


