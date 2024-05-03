#include<iostream>
using namespace std;
class meter
{
	float m,cm,r;
	public:
		void readInput(int a,int b);
		void showOutput();
		void convertfeet(int c)
		{
			r=c*0.3048;
		}
		void convertinch(int d)
		{
			r=d*2.54;
		}
};
//m+f
//cm+inch
void meter::readInput(int a,int b)
{
	m=a;
	cm=b;
}
void meter::showOutput()
{
	cout<<m<<" "<<cm;
}
class feet
{
	float f,i,r;
	public:
		void readInput(int c,int d);
		void showOutput();
		void convertmeter(int a)
		{
			r=a*3.28;
		}
		void convertcentimeter(int b)
		{
			r=b*0.394;
		}
};
void feet::readInput(int c,int d)
{
	f=c;
	i=d;
}
int main()
{
	meter M;
	feet F;
	int opt,a,b,c,d;
	float k;
	cout<<"enter the meter value:- ";
	cin>>a;
	cout<<"enter the centimeter value:- ";
	cin>>b;
	cout<<"enter the feet value:- ";
	cin>>c;
	cout<<"enter the inch value:- ";
	cin>>d;
	M.readInput(a,b);
	F.readInput(c,d);
	cout<<"1.output of sum meter and feet in meter"<<endl;
	cout<<"2.output of sum feet and meter in feet"<<endl;
	cout<<"3.output of sum centimeter and inch in centimeter"<<endl;
	cout<<"4.output of sum inch and centimeter in inch "<<endl;
	cout<<"enter the option:- ";
	cin>>opt;
	switch(opt)
	{
		case 1:		
			M.convertfeet(c);
			break;
		case 2:
			F.convertmeter(a);
			break;
		case 3:
			M.convertinch(d);
			break;
		case 4:
			F.convertcentimeter(b);
			break;
			
		default:
			cout<<"worng opiton";
	}
	return 0;
}
