#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");

	int num, adv, tentativa;
	tentativa = 1;
	
	printf("========== REGRAS DO JOGO ========== \n O primeiro jogador dever� digitar um n�mero \ninteiro de 0 a 50, e o segundo jogador ter� tentativas ilimitadas para adivinhar. \n\n");
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
	while (num != adv) {
		printf("Jogador n�2, tente acertar o n�mero: ");
		scanf("%d", &adv);
		if (adv == num) {
			printf("Parab�ns! Voc� acertou o n�mero.");
		}
		else {
			tentativa += 1;
		}
	}

	printf("\nO n�mero de tentativas foi de: %d", tentativa);
	return 0;
}

