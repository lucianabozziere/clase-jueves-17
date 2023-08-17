#include <stdio.h>

int main(){
	
	float parcial1 = 9.5;
	float parcial2 = 8.5;
	float temp;
	
	printf("parcial 1 %f\n", parcial1);
	printf("parcial 2 %f\n", parcial2);
	
	temp = parcial1 ;     //parcial1 se copio en temp y ahora vale 9.5
	printf("temp %f\n", temp);
	parcial1 = parcial2; //parcial2 se copio en parcial1 y ahora vale 8.5
	printf("parcial 1 %f\n",parcial1);
	parcial2 = temp;    //temp se copio en parcial2 y ahora vale 9.5
    printf("parcial 2 %f\n", parcial2);
   
   return 0;
}
