#include <stdio.h>
#include <locale.h>

int maior(int a, int b){
	if (a > b){
		return a;
	}
	else {
		return b;
	}
}

int main(){
setlocale(LC_ALL, "Portuguese");

	int x, y, m;
	printf("Digite um n�mero: ");
	scanf("%d", &x);
	printf("Digite outro n�mero: ");
	scanf("%d", &y);
	m = maior(x, y);
	
	printf("O maior n�mero entre %d e %d �: %d. \n", x, y, m);
	return 0;
}

