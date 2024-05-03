#include<iostream>
using namespace std;
class greaters
{
	int a;
	public:
		greaters(int a)
		{
			this->a=a;
		}
		void showOutput()
		{
			cout<<a<<endl;
		}
		int operator >(greaters ob2);
};
int greaters::operator >(greaters ob2)
{
	int t=0;
	if(a>ob2.a)
	{
		t=1;
	}
	else
	{
		t=0;
	}
	return(t);
	
}
int main()
{
	int a;
	cout<<"enter the no. object 1:-";
	cin>>a;
	greaters ob1(a);
	cout<<"enter the no. object 2:-";
	cin>>a;
	greaters ob2(a);
	ob1.showOutput();
	ob2.showOutput();
	if(ob1>ob2)
	{
		cout<<"greater ob1 object";
	}
	else
	{
		cout<<"greater ob2 object";
	}
	
	return 0;
}
