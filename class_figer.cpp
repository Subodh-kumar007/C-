#include<iostream>
using namespace std;
class area
{
	int s1,s2,r;
	public:
		void rectangleInput()
		{
			cout<<"Enter the length and width:- ";
			cin>>s1;
			cin>>s2;
			r=s1*s2;
		}
		void rectangleOutput()
		{
			cout<<"area of rectangle:- "<<r;			
		}
		void squareInput()
		{
			cout<<"Enter the side:- ";
			cin>>s1;
			r=s1*s1;
		}
		void squareOutput()
		{
			cout<<"area of square:- "<<r;			
		}
		void triangleInput()
		{
			cout<<"Enter the height and base:- ";
			cin>>s1;
			cin>>s2;
			r=(s1*s2)/2;
		}
		void triangleOutput()
		{
			cout<<"area of triangle:- "<<r;			
		}
		void circleInput()
		{
			cout<<"Enter the radius:- ";
			cin>>s1;
			r=s1*s1*3.14;
		}
		void circleOutput()
		{
			cout<<"area of circle:- "<<r;			
		}
};
int main()
{
	area sd;//object
	int opt;
	cout<<"1.area of rectangle"<<endl;
	cout<<"2.area of square"<<endl;
	cout<<"3.area of triangle"<<endl;
	cout<<"4.area of circle"<<endl;
	cout<<"enter the option:- ";
	cin>>opt;
	switch(opt)
	{
		case 1:
			sd.rectangleInput();
			sd.rectangleOutput();
			break;
		case 2:
			sd.squareInput();
			sd.squareOutput();
			break;
		case 3:
			sd.triangleInput();
			sd.triangleOutput();
			break;
		case 4:
			sd.circleInput();
			sd.circleOutput();
			break;
		default:
			cout<<"worng option";
			break;
	}
	return 0;
}
