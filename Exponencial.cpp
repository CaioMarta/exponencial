#include <stdio.h>
#include <stdlib.h>

float potencia(float t, float n){
	if(n == 0){
		return 1;
	}
	else{
		return (t + 1) * potencia(t, n - 1);
	}
}

float exponencial(float x, float n, float t){
	if(n == 0){
		return 0;
	}
	else{
		return x / potencia(t,n) + exponencial(x, n - 1, t);
	}
}
int main()
{
	float t, n, x;
	printf("Informe os valores para T, N e X: ");
	scanf("%f%f%f", &t, &n, &x);
	
	printf("O resultado da exponenciacao e: %.2f \n", exponencial(x, n, t));
	return 0;
}