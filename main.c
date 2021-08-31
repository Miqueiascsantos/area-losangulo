#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float x=0;
	float y=0;
	float r=0;
	
	printf("Digite a diagonal maior do losangulo: ");
	scanf("%f", &x);

	printf("Digite a diagonal menor do losangulo: ");
	scanf("%f", &y);
	
	r= (x * y) / 2;
	
	printf("Area do losangulo: %f m2\n", r);
	
	system("pause");
		
	return 0;
}
