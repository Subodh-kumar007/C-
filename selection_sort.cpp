#include<iostream>
#define size 50
using namespace std;
void add(int a[size],int n)
{
	int i,e;
	for(i=0;i<n;i++)
	{
		cout<<"enter the element:- ";
		cin>>e;
		a[i]=e;
	}
	
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void sort(int a[size],int n)
{
	int i,j,c=0;
	for(i=0;i<=(n-1);i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				c=a[j];
				a[j]=a[i];
				a[i]=c;
			}
		}
	}	
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int a[size],n,opt;
	char ch;
	do
	{
		cout<<"1.add"<<endl;
		cout<<"2.sort"<<endl;
		cout<<"enter the choice:- ";
		cin>>opt;
		switch(opt)
		{
			case 1:
				cout<<"how many element you enter:- ";
				cin>>n;
				add(a,n);
				break;
			case 2:
				sort(a,n);
				break;
			default:
				cout<<"worng choice"<<endl;
				break;
		}
		cout<<"you wont to continue:- ";
		cin>>ch;
	}while(ch=='y');
	return 0;
}
