#include<iostream>

using namespace std;

int main(){
	
	int num1, num2, diff, gcd = 1;
	
	cout << "Enter first number: ";
	cin >> num1;

	cout << "Enter second number: ";
	cin >> num2;
	
	do{
		if (num1>num2){
			diff = (num1-num2);
			num1 = diff;
			gcd = num2;
		}
		else{
			diff = (num2-num1);
			num2 = diff;
			gcd = num1;
		}

	}while(diff != 0);	
	cout << "GCD = " << gcd << endl;

	return 0;
}
