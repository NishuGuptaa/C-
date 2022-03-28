//C++ program where we check if a person is eligible to vote or not
#include <iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter age of a person: ";
	cin>>age;
	if(age>=18)
	{
	cout<<"You are eligible for vote";
	}
	else
	{
		cout<<"You are not eligible for vote";
	}
	return 0;
}
