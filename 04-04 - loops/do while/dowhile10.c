#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");

	int i, num, par;
	i = 1;
	par = 0;
	
	do {
		printf("Digite um n�mero (%d): ", i);
		scanf("%d", &num);
		if (num % 2 == 0){
			par += 1;
		}
		i++;
	} while (i <= 30);
	}
	printf("A quantidade de n�meros pares foi: %d", par);
	return 0;
}
