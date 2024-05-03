#include<iostream>
using namespace std;
class student
{
	int rollno;
	char nm[30];
	public:
		void readInput()
		{
			cout<<"Enter Detail";
			cin>>nm;
			cin>>rollno;
		}
		void showOutput()
		{
			cout<<nm<<rollno;			
		}
};
int main()
{
	student st1;//object
	st1.readInput();
	st1.showOutput();
	return 0;
}
