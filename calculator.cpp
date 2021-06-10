#include<iostream>
using namespace std;

int main() {
	double fVal, sVal;
	char operators;
	cout<< "Enter first value ";
	cin>> fVal;
	cout<< "Enter second value ";
	cin>> sVal;
	cout<< "Enter operator";
	cin>> operators;

	if(operators == '+') {
		cout<< fVal + sVal;
	} else if(operators == '-') {
		cout<< fVal - sVal;
	} else if (operators == '/') {
		cout<< fVal / sVal;
	} else if (operators == '*') {
		cout<< fVal * sVal;
	} else {
		cout<< "Invalid Operation";
	}
}