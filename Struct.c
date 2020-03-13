#include <stdio.h>
#include <stdlib.h>

struct Pessoa { // iniciação da crianção da estrutura
	char nome [40]; // declaração da variavel caractere 
	int idade; // declaração da variavel inteira
	float salario; // 	declatção da variavel float
}; struct Pessoa pes; // nome da estrutura

void preenche_registro(Pessoa pes){ // Abrindo estrutura de uma função
	printf("Informe o nome da pessoa:"); // impressão na tela
	scanf("%s", &pes.nome); // captura/ leitura para dentro do espaço anteriormente reservado/ declarado
	printf("Informe a idade da pessoa:");
	scanf("%d", &pes.idade);
	printf("Informe o salari da pessoa:");
	scanf("%f", &pes.salario);
	printf("O nome da pessoa e: %s, a idade e %d, o salario e %.2f\n", pes.nome, pes.idade, pes.salario)
	
}


