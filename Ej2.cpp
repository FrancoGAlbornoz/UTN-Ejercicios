#include <stdio.h>
#include <libreriaOperaciones.h>



int valor1, valor2;
int RResta=0;
int RSuma=0;
float RDivision=0.0;
int RProducto=0;

float dividendo, divisor;



main(){
	
	printf("Ingrese 2(dos) numeros para evaluar.\n");
	scanf("%d", &valor1);
	scanf("%d", &valor2);
	
	RSuma = Sumar(valor1, valor2);
	printf("El resultado de la suma (%d + %d ), es %d \n", valor1, valor2, RSuma);
	
	RResta = Restar(valor1, valor2);
	printf("El resultado de la resta (%d - %d), es %d \n", valor1, valor2, RResta );
	
	RProducto =Producto(valor1, valor2);
	printf("El resultado del producto de (%d * %d), es %d\n", valor1 , valor2 , RProducto);
	
	
	dividendo=(float)valor1;
	divisor=(float)valor2;
	
	
	
	if(divisor != 0){
		RDivision = Dividir(dividendo,divisor);
		printf("El resultado de la division (%.2f / %.2f ), es %.2f \n", dividendo, divisor, RDivision);
	}else{
		printf("\n No es posible realizar esta division \n\n");
	}
	
	
}

