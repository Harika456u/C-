#include<iostream>
using namespace std;
class student
{
	public:
		int phoneno;
		int rollno;
		string address;
	};
	int main()
	{
		student s1;
		s1.phoneno=123456789;
		s1.rollno=23;
		s1.address="saveetha college";
	student s2;
     s2.phoneno=23456788;
        s2.rollno=34;
	s2.address="simats";
	cout<<s1.phoneno<<" "<<s1.rollno<<" "<<s1.address<<" "<<endl;
		cout<<s2.phoneno<<" "<<s2.rollno<<" "<<s2.address<<" "<<endl;
	}	
