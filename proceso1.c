#include <stdio.h>
#include <stdlib.h>

// estructura enviar mensaje de menu
typedef struct s1
{
	long Id_Mensaje;
	int operador1;
	int operador2;
	int operacion;
	int aproximacion;
	char Mensaje[10];
}Mensaje1;

// estructura recibir mensaje del proceso


typedef struct s2
{
	long Id_Mensaje;
	int resultado;
	int operacion;
	char Mensaje[10];
} Mensaje2;



int main(){

	int p1,p2,opcion,a,n;
	char p3;

	
	do{
		system("clear");
		printf("   MENU    \n\n");
		printf("1) SUMA \n");
		printf("2) RESTA \n");
		printf("3) MULTIPLICACION \n");
		printf("4) DIVICION \n");
		printf("5) MOSTRAR N CANTIDAD DE RESULTADOS \n");
		printf("6) SALIR \n");
		printf("-_-_-_-_-_-_-_-_-_-\n");
		printf("elige tu opcion : ");
		scanf("%d",&opcion);
		
		switch(opcion){

			case 1 :
			system("clear");
			printf(" SUMA \n");
			printf("ingrese operando 1 : ");scanf("%d",& p1);
			printf("ingrese operando 2 : ");scanf("%d",& p2);
			printf("desea aproximar s = si n = no  : ");scanf("%s",& p3);
			a = getchar();
			break;


			case 2 :

			system("clear");
			printf(" RESTA \n");
			printf("ingrese operando 1 : ");scanf("%d",& p1);
			printf("ingrese operando 2 : ");scanf("%d",& p2);
			printf("desea aproximar s = si n = no  : ");scanf("%s",& p3);
			a = getchar();
			break;


			case 3 :

			system("clear");
			printf(" MULTIPLICACION \n");
			printf("ingrese operando 1 : ");scanf("%d",& p1);
			printf("ingrese operando 2 : ");scanf("%d",& p2);
			printf("desea aproximar s = si n = no  : ");scanf("%s",& p3);
			a = getchar();
			break;


			case 4 :

			system("clear");
			printf(" DIVICION \n");
			printf("ingrese operando 1 : ");scanf("%d",& p1);
			printf("ingrese operando 2 : ");scanf("%d",& p2);
			printf("desea aproximar s = si n = no  : ");scanf("%s",& p3);
			a = getchar();

			break;
			
			
			case 5 :

			system("clear");
			printf(" VER RESULTADOS \n\n");
			printf(" ingrese el no de resultados que desea ver:  \n");
		    scanf("%d",&n);
			int i;
			for(i=0;i<=n;i++){
			
				
			}
			break;

			
			 default:
				system("clear");
				printf("OPCION NO VALIDA");
				a =getchar();
			
			
		}

	}while(opcion!=5);

}
