#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

	char sexo;
	
	printf("Digite 'M' se voc� for homem e 'F' se voc� for mulher: ");
	scanf("%c",&sexo);
	if (sexo == 'F'){
		printf("Voc� � mulher.");
	}
	else {
		if (sexo == 'M'){
			printf("Voc� � homem.");
		}
		else {
			printf("Escreva a op��o corretamente.");
		}
	}
	return 0;
	
}
