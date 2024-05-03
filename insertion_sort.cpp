#include<iostream>
#define size 50
using namespace std;
void insertionSort(int a[size],int n)
{
	int i,j,k;
	i=1;
	while(i<n)
	{
		k=a[i];
		j=i-1;
		while(j>=0&&a[j]>k)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=k;
		i++;
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
void array(int a[size],int n)
{
	int i,e;
	for(i=0;i<n;i++)
	{
		cout<<"enter the element:- ";
		cin>>e;
		a[i]=e;
	}
	insertionSort(a,n);
}
int main()
{
	int a[size],n;
	cout<<"how many element you enter:- ";
	cin>>n;
	array(a,n);
	return 0;
}
