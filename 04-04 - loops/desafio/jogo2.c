#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");

	int num, adv, i;
	i = 1;
	
	printf("======= REGRAS DO JOGO ======= \n O primeiro jogador dever� digitar um n�mero \ninteiro de 0 a 50, e o segundo jogador ter� 15 tentativas para adivinhar. \n\n");
	printf("Jogador n�1, digite o n�mero a ser adivinhado: ");
	scanf("%d", &num);
	if (num > 50) {
		printf("N�mero maior do que 50!");
		return 0;
	}
	else {
		if (num < 0) {
			printf("N�mero menor que 0!");
			return 0;
		}
	}
	system("cls");
	while (i <= 15) {
		printf("Tentativa n�%d, tente acertar o n�mero: ", i);
		scanf("%d", &adv);
		if (adv == num) {
			printf("Parab�ns! Voc� acertou o n�mero.");
			break;
		}
		else {
			if (adv == num - 5 || adv == num + 5) {
				printf("Voc� est� perto! Continue tentando. \n");
			}
		}
		i++;
	}
	if (i > 15) {
		printf("Voc� ultrapassou o n�mero de tentativas. Voc� perdeu.");
	}
	return 0;
}

