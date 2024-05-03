#include<iostream>
using namespace std;
class number
{
	int n;
	public:
		number(){}
		number(int n)
		{
			this->n=n;
		}
		void showOutput()
		{
			cout<<"value is:- "<<n<<endl;
		}
		number sum(number &ob2);
	
};
number number::sum(number &ob2)
{
	number v;
	v.n=n+ob2.n;
	return(v);
}
int main()
{
	int n,m;
	cout<<"enter the no.1:= ";
	cin>>n;
	cout<<"enter the no.2:= ";
	cin>>m;
	number ob1(n);
	//ob1.showOutput();
	number ob2(m);
	number ob3;
	ob3=ob1.sum(ob2);
	ob3.showOutput();
	/*ob1.showOutput();
	ob2.showOutput();*/
	return 0;
}
