#include <iostream>

using namespace std;

int main()
{

	int a;
	int b;
	int sumAdd;
	int sumMultiply;
	int sumDivide;
	int sumSubtract;
	int sumModulus;

	cout << endl << "bashCalc v0.0.1 is Open Source and is free to distribute or modify" << endl;

	cout << endl << "First Number:" << endl << "> ";
	cin >> a; cout << endl;

	cout << "Second Number" << endl << "> ";
	cin >> b; cout << endl;

	sumAdd = a + b;
	sumMultiply = a * b;
	sumDivide = a / b;
	sumSubtract = a - b;
	sumModulus = a % b;

	cout << "+ | " << sumAdd << endl;
	cout << "x | " << sumMultiply << endl;
	cout << "/ | " << sumDivide << endl;
	cout << "- | " << sumSubtract << endl;
	cout << "% | " << sumModulus << endl << endl;

	return (0);

}