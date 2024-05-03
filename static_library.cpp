#include<iostream>
#define size 50
#include<string.h>
using namespace std;
class library
{
	char name[30];
	int fee,roll;
	static int v;
	public:
		void readInput(char name[30],int fee)
		{
			roll=v++;
			strcpy(this->name,name);
			this->fee=fee;
		}
		void showOutput()
		{
			cout<<roll<<" "<<name<<" "<<fee<<endl;
		}
};
int library::v=1112;
int main()
{
	library L[size];
	int n,fee;
	char name[30];
	cout<<"how many record you enter:- ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"enter the name:- ";
		fflush(stdin);
		gets(name);
		cout<<"enter the membership fee:- ";
		cin>>fee;
		L[i].readInput(name,fee);
	}
	for(int i=0;i<n;i++)
	{
		L[i].showOutput();
	}
	return 0;
}
