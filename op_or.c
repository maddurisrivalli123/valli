#include<iostream>
using namespace std;
class Grade{
	int cgpa;
	public:
		Grade(){
			cgpa = 0;
		}
		Grade(int icgpa){
			cgpa = icgpa;
		}
		void display(){
			cout << "Your CGPA is "<< cgpa <<endl;
		}
		Grade operator++(){    // prefix increment
			cgpa += 1;
			return *this;
		}
		Grade operator--(){    // prefix decrement
			cgpa -= 1;
			return *this;
		}
		Grade operator++(int){    // postfix increment
			Grade duplicate(*this);
			cgpa += 1;
			return duplicate;
		}
		Grade operator--(int){    // postfix decrement
			Grade duplicate(*this);
			cgpa -= 1;
			return duplicate;
		}
};
int main(){
	Grade ayush(7);
	ayush.display();   // cgpa -> 8
	(++ayush).display();  // cgpa -> 9
	(--ayush).display();  // cgpa -> 8
	(ayush++).display();  // cgpa -> 8
	(ayush--).display();  // cgpa -> 9
	ayush.display();   // cgpa -> 8
}
