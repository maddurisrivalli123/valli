#include<iostream>
using namespace std;
int digit_count(int n){       // returns number of digits in a number
	int c;
	while(n>0){
		n/=10;
		c++;
	}
	return c;
}
void digit_seperate(int *a,int n){   // seperates digits of number and stores in an array
	int i=0;
	while(n>0){
		a[i++] = n%10;
		n/=10;
	}
}
int cyclic_sum(int n){
	 int d = digit_count(n);
	 int ar[d];
	 digit_seperate(ar,n);
	 int sum = 0;
	 for(int i=0;i<d;i++){    // logic for cyclic sum eg. 123 -> (1+2)+(2+3)+(3+1)
	 	if(i==d-1)           // spc. case for last index
		 sum += (ar[i]+ar[0]);
		else
		 sum += (ar[i]+ar[i+1]);
	 }
	 return sum;
}
int main(){
	int n;
	cout << "Enter a number : ";
	cin >> n;
	cout << "Cyclic Sum of " << n << " : " << cyclic_sum(n);
}
