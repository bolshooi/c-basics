#include <stdio.h>
#include <locale.h>

void cadastro(int a, float c[]){
	int i, cont = 0;
	for(i = 0; i < a; i++){
		printf("Digite a m�dia do aluno[%d]: ", i);
		scanf("%f", &c[i]);
	}	
}

int mediaMenor(int a, float b[]){
	int i, cont = 0;
	for(i = 0; i < a; i++){
		if (b[i] < 5){
			cont++;
		}
	}
	return cont;
}
int main(){
setlocale(LC_ALL, "Portuguese");
	
	int n, s;
	printf("Digite o n�mero de alunos que voc� deseja cadastrar a m�dia: ");
	scanf("%d", &n);
	float media[n];
	
	cadastro(n, media);
	s = mediaMenor(n, media);
	printf("\n");
	printf("O n�mero de alunos com m�dia abaixo de 5.0 � de: %d", s);
	return 0;
}

