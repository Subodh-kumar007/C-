#include<iostream>
#define size 50
using namespace std;
void display(int d[size],int l)
{
	int i;
	for(i=0;i<l;i++)
	{
		cout<<d[i]<<" ";
	}
	cout<<endl;
}
void mergeSort(int a[size],int c,int b[size],int n,int X[size])
{
	int i,j,k;
	for(i=0,j=0,k=0;i<c&&j<(n-c);k++)
	{
		if(a[i]>b[j])
		{
			X[k]=b[j];
			j++;
		}
		else
		{
			X[k]=a[i];
			i++;
		}
	}
	if(i==c)
	{
		for(;j<(n-c);j++,k++)
		{
			X[k]=b[j];
		}
	}
	else
	{
		for(;i<c;i++,k++)
		{
			X[k]=a[i];
		}
	}
	display(X,n);
}
void sort(int a[size],int b[size],int c,int n,int X[size])
{
	int i,j,t;
	for(i=0;i<(c-1);i++)
	{
		for(j=i+1;j<=(c-1);j++)
		{
			if(a[i]>a[j])
			{
				t=a[j];
				a[j]=a[i];
				a[i]=t;
			}
		}
	}
	for(i=0;i<(n-c)-1;i++)
	{
		for(j=i+1;j<=(n-c)-1;j++)
		{
			if(b[i]>b[j])
			{
				t=b[j];
				b[j]=b[i];
				b[i]=t;
			}
		}
	}
	cout<<"sort first array:- ";
	display(a,c);
	
	cout<<"sort second array:- ";
	display(b,(n-c));
	
	mergeSort(a,c,b,n,X);
}
void divide(int X[size],int n)
{
	int a[size],b[size],i=0,j=0,k=0,c=n/2;
	while(i<n)
	{
		while(j<c)
		{
			a[j]=X[i];
			i++;
			j++;
		}
		b[k]=X[i];
		i++;
		k++;
	}
	cout<<"first array:- ";
	display(a,c);
	
	cout<<"second array:- ";
	display(b,(n-c));
	
	sort(a,b,c,n,X);
}
void array(int X[size],int n)
{
	int i,e;
	for(i=0;i<n;i++)
	{
		cout<<"enter the element:- ";
		cin>>e;
		X[i]=e;
	}	
}
int main()
{
	int X[size],n;
	cout<<"how many element you enter:- ";
	cin>>n;
	array(X,n);
	divide(X,n);
	return 0;
}
