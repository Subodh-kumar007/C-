#include<iostream>
#define size 50
using namespace std;
bubble(int a[size],int n)
{
	int i,j,c=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				c=a[j+1];
				a[j+1]=a[j];
				a[j]=c;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
void add(int a[size],int n)
{
	int i,e;
	for(i=0;i<n;i++)
	{
		cout<<"enter the element:- ";
		cin>>e;
		a[i]=e;
	}
	
	bubble(a,n);
}
int main()
{
	int a[size],n;
	cout<<"how many element you wont:- ";
	cin>>n;
	add(a,n);
	return 0;
}
