#include <iostream>
#include<cstring>
using namespace std;
class Student{
    char *name;
    int roll_no;
    int length;
    public:
    Student()
    {
    roll_no=0;
        length=0;
        name=new char[length+1];
    }
    Student(char*s,int i)
    {
        roll_no=i;
        length=strlen(s);
        name=new char[length+1];
        strcpy(name,s);
    }
    void display_data(void)
    {
        if(length != 0)
		{
			cout<<"The name of the student is:"<<name<<endl;
        	cout<<"Roll number of the student is:"<<roll_no<<endl;
		}
		else
			cout << "No data found !";
    }
};
int main()
{
    Student S1("Ayush",24),S2;
    S1.display_data();
    S2.display_data();
    return 0;
}
