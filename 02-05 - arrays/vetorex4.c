#include <stdio.h>
#include <locale.h>

void cadastro(int y, int x[]){
	int i;
	for (i = 0; i < y; i++){
		printf("Digite o n�mero[%d]: ", i);
		scanf("%d", &x[i]);
	}
}

int maior(int x, int y[]){
	int i, m = 0, aux = 0;
	for (i = 0; i < x; i++){
		if (y[i] > aux){
			aux = y[i];
		}
	}
}

int main(){
setlocale(LC_ALL, "Portuguese");
	
	int n, s;
	printf("Digite o n�mero de valores a serem cadastros: ");
	scanf("%d", &n);
	int vetor[n];
	cadastro(n, vetor);	
	s = maior(n, vetor);
	printf("O maior n�mero dentro do vetor �: %d", s);
	return 0;
}


