#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

	int idade;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	if (idade < 16){
		printf("Voc� � n�o-eleitor.");
	}
	else {
		if (idade >= 18 && idade <= 65){
			printf("Voc� � eleitor obrigat�rio.");
		}
		else {
			printf("Voc� � eleitor facultativo.");
		}
	}
	return 0;
}
