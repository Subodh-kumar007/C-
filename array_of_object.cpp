#include<iostream>
const int size=50;
#include<string.h>
using namespace std;
class student
{
	int roll,fee;
	char name[30];
	public:
		void readInput(int roll,int fee,char name[30]);
		void showOutput();
		int search(int key);
};
void student::readInput(int roll,int fee,char name[30])
{
	this->roll=roll;
	this->fee=fee;
	strcpy(this->name,name);
}
void student::showOutput()
{
	cout<<"Roll no.:- "<<roll<<", name:- "<<name<<", fee:- "<<fee<<endl;
}
int student::search(int key)
{
	int k=0;
	if(this->roll==key)
	{
		showOutput();
		//cout<<"name:- "<<name<<" , fee:- "<<fee<<endl;
		k=1;
	}
	return(k);
}
int main()
{
	int roll,fee,i,n,opt;
	char name[30],ch;
	student S[size];
	do
	{
		cout<<"1.Add"<<endl;
		cout<<"2.show"<<endl;
		cout<<"3.search"<<endl;
		cout<<"enter your option:- ";
		cin>>opt;
		switch(opt)
		{
			case 1:
				cout<<"how many record you enter:- ";
				cin>>n;
				for(i=0;i<n;i++)
				{
					cout<<"enter the roll no.:- ";
					cin>>roll;
					cout<<"enter the name:- ";
					fflush(stdin);
					gets(name);
					cout<<"enter the fee:- ";
					cin>>fee;
					S[i].readInput(roll,fee,name);
				}
				break;
			case 2:
				for(i=0;i<n;i++)
				{
					S[i].showOutput();
				}
				break;
			case 3:
				cout<<"enter the roll no. to search:- ";
				int key;
				cin>>key;
				for(i=0;i<n;i++)
				{
					if(S[i].search(key)==1)
					{
						break;
					}
				}
				if(i==n)
				{
					cout<<key<<" is not found"<<endl;
				}
				break;
			default:
				cout<<"worng option"<<endl;
				break;
		}
		cout<<"you wont to continue y/n:- ";
		cin>>ch;
	}while(ch=='y');
	return 0;
}
