#include <stdio.h>

int main()
{

	int a;
	int b;
	int sumAdd;
	int sumMultiply;
	int sumDivide;
	int sumSubtract;
	int sumModulus;

	printf ("\nbashCalc v0.0.1 is Open Source and is free to distribute or modify\n");

	printf ("\nFirst Number:\n> ");
	scanf ("%d",&a);

	printf ("\nSecond Number:\n> ");
	scanf ("%d",&b);

	sumAdd = a + b;
	sumMultiply = a * b;
	sumDivide = a / b;
	sumSubtract = a - b;
	sumModulus = a % b;

	printf ("\n+ | %.1i\n",sumAdd);
	printf ("x | %.1i\n",sumMultiply);
	printf ("/ | %.1i\n",sumDivide);
	printf ("- | %.1i\n",sumSubtract);
	printf ("%% | %.1i\n\n",sumModulus);

	return (0);

}