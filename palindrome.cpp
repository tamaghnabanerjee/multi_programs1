#include<iostream>

using namespace std;

int main(){
	
	int original_number, reverse_number = 0,remainder, reducing_number, count = 1;
	cout << "Enter a number: ";
	cin >> original_number;
	reducing_number = original_number;

	while (reducing_number > 0){
	
		remainder = reducing_number%10;
		reducing_number = reducing_number/10;
	
		reverse_number = reverse_number*10 + remainder;
	}
	
	cout << "reverse_number: " << reverse_number << endl;
	if (reverse_number == original_number){
		cout << "Palindrome" << endl;
	}
	else{
		cout << "Not a palindrome" << endl;
	}

	return 0;
}
