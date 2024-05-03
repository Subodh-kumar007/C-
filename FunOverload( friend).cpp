#include<iostream>
using namespace std;
class two;
class one
{
	int a;
	public:
		one(int a)
		{
			this->a=a;
		}
		void showOutput()
		{
			cout<<a<<endl;
		}
		friend bool operator >(one ob1,two ob2);
};
class two
{
	int a;
	public:
		two(int a)
		{
			this->a=a;
		}
		bool showOutput()
		{
			cout<<a<<endl;
		}
		friend bool operator >(one ob1,two ob2);
};
bool operator >(one ob1,two ob2)
{
	
	if(ob1.a>ob2.a)
	{
		cout<<"greater ob1 object";
	}
	else
	{
		cout<<"greater ob2 object";
	}
	
	
}
int main()
{
	int a;
	cout<<"enter the no. object 1:-";
	cin>>a;
	one ob1(a);
	cout<<"enter the no. object 2:-";
	cin>>a;
	two ob2(a);
	ob1.showOutput();
	ob2.showOutput();
	if(ob1>ob2)
	return 0;
}
