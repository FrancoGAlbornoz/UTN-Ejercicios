#include <stdio.h>

int fib(int n1);

int main(){
	
	int n;
	printf("Ingrese un numero a calcular su serie de Fibonacci: ");
	scanf("%d",&n);
	printf("El numero de la serie de Fibonacci es: %d " ,fib(n));
	
	return 0;
}

int fib(int n1){
	if(n1>1){
		return fib(n1-1)+fib(n1-2);
	}
	
	else{
		if(n1==0){
			return 0;
		}
		if(n1==1){
			return 1;
		}
		
	}
	
	
}
