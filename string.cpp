#include<iostream>
using namespace std;
int main(){
	string s;
	cout << "Enter a string : ";
	cin >> s;
	cout << "Unique Alphabets : ";
	for(int i=0; s[i] != '\0';i++){    // outer loop to iterate over alphabets
		int flag = 0;
		for(int j=0 ; s[j] != '\0';j++){  // inner loop to compare with other alphabets
		  if( s[i]==s[j] && i != j )    // i != j -> not compare with same element
		    flag = 1;
		}
		if(flag == 0)           // flag = 0 -> alphabet is unique
		cout << s[i] <<"  ";
	}
	
}
