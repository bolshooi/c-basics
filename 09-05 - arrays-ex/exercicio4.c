#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");
	
	int num, par, impar, i;
	int somapar, somaimpar;
	float mediapar, mediaimpar;
	int vp[100], vi[100];
	
	par = 0;
	impar = 0;
	somapar = 0;
	somaimpar = 0;
	for (i = 0; i < 100; i++){
		printf("Digite o n�mero[%d]: ", i);
		scanf("%d", &num);
		if (num % 2 == 0){
			par += 1;
			vp[par] = num;
			somapar += num;
		}
		else {
			impar += 1;
			vi[impar] = num;
			somaimpar += num;
		}
	}
	mediapar = somapar / par;
	mediaimpar = somaimpar / impar;
	printf("Quantidade de n�meros pares: %d\n", par);
	printf("A m�dia dos n�meros pares foi: %.2f\n", mediapar);
	printf("Quantidade de n�meros �mpares: %d\n", impar);
	printf("A m�dia dos n�meros �mpares foi: %.2f\n", mediaimpar);
	return 0;
}
