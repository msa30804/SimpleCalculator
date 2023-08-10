#include<iostream>
using namespace std;
int main()
{
	cout << "\t\t\t\t\t<----------Simple Calculator---------->" << endl;
	int num1, num2;
	float result;
	char operation;
	cout << "Enter First Number : "; cin >> num1;
	cout << "Enter the operation (+,-,*,/) : "; cin >> operation;
	cout << "Enter Second Number : "; cin >> num2;
	
	switch (operation)
	{
	case '+':
		result=num1 + num2;
		
		break;
	case '-':
		result=num1 - num2;
		
		break;
	case '/':
		result=num1 / static_cast<float>(num2);
		
		break;
	case '*':
		result=num1 * num2;
		
		break;
	default:
		cout << "Invalid Operation Remember this is not Scientific calculator";
		break;
	}
	cout << "\t\t\t\t Result is = " <<"   " <<result;
	return 0;
}