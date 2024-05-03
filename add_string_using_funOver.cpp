#include<iostream>
#include<string.h>
using namespace std;
class two;
class one
{
	char a[30];
	public:
		one(char a[30])
		{
			strcpy(this->a,a);
		}
		void show()
		{
			cout<<a<<endl;
		}
		friend void operator +(one x,two y);
};
class two
{
	char a[30];
	public:
		two(char a[30])
		{
			strcpy(this->a,a);
		}
		void show()
		{
			cout<<a<<endl;
		}
		friend void operator +(one x,two y);
};
void operator +(one x,two y)
{
	char m[50];
	strcat(x.a,y.a);
	cout<<x.a;
}
int main()
{
	char c[30];
	cout<<"enter the string 1:- ";
	fflush(stdin);
	gets(c);
	one S(c);
	cout<<"enter the string 2:- ";
	fflush(stdin);
	gets(c);
	two S1(c);
	S.show();
	S1.show();
	S+S1;
}
