/* $begin main2 */
/* main2.c */
#include <stdio.h>
#include <vector.h>

Vector vector1;
Vector vector2;

//int x[2] = {1, 2};
//int y[2] = {3, 4}; 

int z[2];

int main() 
{
	vector1.vector[0] = 1;
	vector1.vector[1] = 2;
	vector2.vector[0] = 3;
	vector2.vector[1] = 4;

	addvec(vector1.vector, vector2.vector, z, 2);
	printf("z = [%d %d]\n", z[0], z[1]);
	multvec(vector1.vector, vector2.vector, z, 2);
	printf("z = [%d %d]\n", z[0], z[1]);
	return 0;
}
/* $end main2 */
