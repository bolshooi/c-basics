#include <stdio.h>
#include <locale.h>

void cadastro(int x[5]){
	int i;
	printf("Cadastro os n�meros: \n");
	for (i = 0; i < 5; i++){
		printf("Digite o n�mero[%d]: ", i);
		scanf("%d", &x[i]);
	}
}

void quadrado(int x[5], int y[5]){
	int i;
	for (i = 0; i < 5; i++){
		y[i] = x[i] * x[i];
	}
}

void exibe(int x[5]){
	int i;
	printf("Exibindo o quadrado dos n�meros: \n");
	for (i = 0; i < 5; i++){
		printf("N�mero[%d]: %d \n", i, x[i]);
	}
}

int main(){
setlocale(LC_ALL, "Portuguese");
	
	int a[5], b[5], i;
	
	cadastro(a);
	quadrado(a, b);
	exibe(b);	
	return 0;
}
