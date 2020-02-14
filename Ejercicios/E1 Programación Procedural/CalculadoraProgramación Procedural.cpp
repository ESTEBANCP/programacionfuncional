#include <stdio.h>
#include <conio.h>

int main()
{
	float num1, num2, result;
	int opc;
	
	printf ("\n Calculadora Programacion Procedural: ");
	printf ("\n");
	printf ("\n Ingrese el primer numero: ");
	scanf ("%f",&num1);
	printf ("\n Ingrese el segundo numero: ");
	scanf ("%f",&num2);
	
	printf ("  _____________MENU___________");
	printf ("\n | 1.SUMA                     |");
	printf ("\n | 2.RESTA                    |");
	printf ("\n | 3.MULTIPLICACION           |");
	printf ("\n | 4.DIVIDIR                  |");
	printf ("\n  ____________________________");
	printf ("\n Ingrese la opcion que desea: ");
	scanf ("%d",&opc);
	
	switch(opc){
		case 1:
			result = num1 + num2;
			break;
	    case 2:
			result = num1 - num2;
			break;
		case 3:
			result = num1 * num2;
			break;
		case 4:
			result = num1 / num2;
			default:
				printf ("\n ");	
	}
	printf ("\n El resultao es: %f", result);
	getch();
	return 0;	
}

