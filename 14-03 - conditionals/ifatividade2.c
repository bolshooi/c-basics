#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");
	
	int num20;
	
	printf("Insira um n�mero: ");
	scanf("%d", &num20);
	if (num20 >= 20) {
		printf("Esse n�mero � maior ou igual a 20 (vinte).");
	}
	else {
		printf("Esse n�mero � menor que 20 (vinte).");
	}
	return 0;
}
