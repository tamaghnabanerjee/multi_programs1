#include<iostream>

using namespace std;

int main(){
	
	int n, sum_of_divisors = 0, perfect_num = 0;

	cout << "Enter a number: ";
	cin >> n;

	for(int i=1; i<n; i++){
		if (n%i==0){
			sum_of_divisors += i;
		}
	}
	
	if (sum_of_divisors == n){
		cout << "Perfect Number" << endl;
	}
	else {
		cout << "Not a perfect Number" << endl;
	}
	return 0;
	}
