#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"portuguese");
	int n1;
	int n2;
	printf("Digite um número inteiro: ");
	scanf("%d", &n1);
	printf("Digite outro número inteiro: ");
	scanf("%d", &n2);
	int mp = n1 * n2;
	printf("A multiplicação dos números é %d", mp);
	getchar();
	
	return 0;
}