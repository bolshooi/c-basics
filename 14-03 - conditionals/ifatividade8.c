#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

	float nota1, nota2, nota3, nota4, media;
	
	printf("Digite sua primeira nota: ");
	scanf("%f", &nota1);
	printf("Digite sua segunda nota: ");
	scanf("%f", &nota2);
	printf("Digite sua terceira nota: ");
	scanf("%f", &nota3);
	printf("Digite sua quarta nota: ");
	scanf("%f", &nota4);
	media = (nota1 + nota2 + nota3 + nota4) / 4;
	printf("Sua m�dia: %.2f. \n", media);
	if (media >= 5) {
		printf("Voc� est� aprovado!");
	}
	else {
		printf("Voc� est� reprovado.");
	}
	return 0;
}
