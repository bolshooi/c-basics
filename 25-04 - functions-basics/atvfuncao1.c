#include <stdio.h>
#include <locale.h>

void soma(int a, int b){
	
	int i, soma;
	soma = 0;
	for(i = a; i <= b; i++){
		soma += i;
	}
	printf("%d", soma);
}

int main(){
setlocale(LC_ALL, "Portuguese");

	int x, y;
	printf("Digite um n�mero: ");
	scanf("%d", &x);
	printf("Digite outro n�mero: ");
	scanf("%d", &y);
	soma(x, y);
	return 0;
}

