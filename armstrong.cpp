#include<iostream>
using namespace std;
int main(){
	int m,n,sum = 0;
	cout << "Enter a number : ";
	cin >> n;           // Input a number
	int num = n;        // storing number to print later
	while(n>0){  
		m = n%10;       // obtain seperate digit
		sum += m*m*m;   // evaluate sum of cubes
		n/=10;          // move between 10s places
	}
	if (num == sum)
	cout << "Yes ! "<< num << " is a Armstrong number.";
}
