#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

	int opc1;
	
	printf("Digite o c�digo do seu cargo: ");
	scanf("%d", &opc1);
	if (opc1 == 1){
		printf("Voce � escritu�rio. ");
	}
	else {
		if (opc1 == 2){
			printf("Voce � secretario.");	
		}
		else {
			if (opc1 == 3){
				printf("Voce � caixa.");
			}
			else {
				if (opc1 == 4){
					printf("Voc� � gerente. ");
				}
				else {
					if (opc1 == 5){
						printf("Voc� � diretor.");
					}
					else {
						printf("Op��o inv�lida. ");
					}
				}
			}
		}
	}
	return 0;
}
