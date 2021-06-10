#include <iostream>
using namespace std;

int addition(int a, int b) {
	return (a+b);
}

int subtract(int a, int b) {
	return (a-b);
}

int multiply(int a, int b) {
	return (a*b);
}

float divide(int a, int b) {
	return (a/b);
}

int main() {
	
	int fVal;
	int sVal;
	char oper;
	cout<< "Enter the first value ";
	cin>> fVal;
	cout<< "enter the second value ";
	cin>> sVal;
	cout<< "Enter opertation ";
	cin>> oper;

	switch (oper){
		case '*':
			cout<< multiply(fVal, sVal);
			break;
		case '/':
			cout<< divide(fVal, sVal);
			break;
		case '-':
			cout<< subtract(fVal, sVal);
			break;
		case '+':
			cout<< addition(fVal, sVal);
			break;
	}

}