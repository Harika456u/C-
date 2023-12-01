#include<iostream>
using namespace std;
class student
{
public:
	int roll_no;
	string name;
};
int main()
{
	student s;
	s.roll_no=2;
	s.name="john";
	cout<<s.roll_no<<endl;
	cout<<s.name<<endl;
}
	
