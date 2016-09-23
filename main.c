#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float antiguosalario,aumento,nuevosalario;
	int continuar;
	system("cls");
	system("color F0");
	fflush(stdin);
	do{
		printf("\t\t\t\tCalculadora de aumento Salarial\t\t\t\t");	
		printf("\n\n\t\tIngrese antiguo salario: ");
		scanf("%f",&antiguosalario);
		printf("\n\t\tIngrese %c de aumento: ",37);
		scanf("%f",&aumento);
		nuevosalario=((antiguosalario*aumento)/100)+antiguosalario;
		printf("\n\t\tSu nuevo salario es: %.2f",nuevosalario);
		printf("\n\n\t\t\tPresiona (0) para continuar: ");
		scanf("%d",&continuar);
		system("cls");
	}
	while(continuar==0);
	printf("\t\t\t\tCalculadora de aumento Salarial\t\t\t\t");
	printf("\n\n\n\t\t\t\t--Arr%cvederc%c--",141,141);
	
	return 0;
}
