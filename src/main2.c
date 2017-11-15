/* $begin main2 */
/* main2.c */
#include <stdio.h>
#include <vector.h>

Vector vector1;
Vector vector2; 

int z[2];

int main() 
{
	int x, y;
	int w, v;	
	
	printf("Ingrese el primer valor para el vector 1: ");
	scanf("%d", &x);

	printf("\nIngrese el segundo valor para el vector 1: ");
	scanf("%d", &y);

	printf("\n\nIngrese el primer valor para el vector 2: ");
	scanf("%d", &w);

	printf("\nIngrese el segundo valor para el vector 2: ");
	scanf("%d", &v);	

	vector1.vector[0] = x;
	vector1.vector[1] = y;
	vector2.vector[0] = w;
	vector2.vector[1] = v;

	addvec(vector1.vector, vector2.vector, z, 2);
	printf("\nz = [%d %d]\n", z[0], z[1]);
	multvec(vector1.vector, vector2.vector, z, 2);
	printf("z = [%d %d]\n", z[0], z[1]);
	return 0;
}
/* $end main2 */
