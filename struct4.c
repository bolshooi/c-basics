#include <stdio.h>
#include <locale.h>
#include <string.h>

struct jornais{
	
	int quantidade;
	char titulo[20];
	float preco;
	
};

int main(){
setlocale(LC_ALL, "Portuguese");

	struct jornais j;
	int i, n, x;
	float menor, valorgeral;
	char barato[20];
	menor = 1000;
	printf("Digite quantos ti�tulos voc� deseja cadastrar: ");
	scanf("%d", &n);
	fflush(stdin);
	j.quantidade = n;
	
	for(i = 1; i <= n; i++){
		printf("Digite o t�tulo da revista[%d]: ", i);
		gets(j.titulo);
		printf("Digite o valor unit�rio da revista[%d]: ", i);
		scanf("%f", &j.preco);
		fflush(stdin);
		if (j.preco < menor){
			menor = j.preco;
			strcpy(barato, j.titulo);
		}
		else {
			menor = menor;
		}
		valorgeral += j.preco;
		
	}
	printf("\nA quantidade total de t�tulos foi: %d \nO valor total do estoque foi: %.2f \nA revista de menor valor foi: %.2f \nO t�tulo mais barato foi: %s", j.quantidade, valorgeral, menor, barato);
	return 0;
}
