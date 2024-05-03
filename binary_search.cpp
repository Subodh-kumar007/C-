#include<iostream>
#define size 50
using namespace std;
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

void add(int a[size],int n)
{
	int i,e;
	for(i=0;i<n;i++)
	{
		cout<<"enter the element:- ";
		cin>>e;
		a[i]=e;
	}
	sort(a,n);
}
void search(int a[size],int key,int n)
{
	int t=n-1,b=0,m=(b+t)/2;
	while(b<=t)
	{
		if(a[m]==key)
		{
			cout<<"element found:= "<<key<<endl;
			break;
		}
		else if(a[m]>key)
			{
				t=m-1;
				m=(b+t)/2;
			}
			else if(a[m]<key)
				{
					b=m+1;
					m=(b+t)/2;
				}
				/*else
				{
					cout<<"element not found"<<endl;
				}*/
	}
	if(b>t)
	{
		cout<<"element not found"<<endl;
	}
	
}
int main()
{
	int n,opt,a[size],key;
	char ch;
	do
	{
		cout<<"1.add"<<endl;
		cout<<"2.Bsearch"<<endl;
		cout<<"enter your choice:= ";
		cin>>opt;
		switch(opt)
		{
			case 1:
				cout<<"how many element insert:- ";
				cin>>n;
				add(a,n);
				break;
			case 2:
				cout<<"enter the search element:- ";
				cin>>key;
				search(a,key,n);
				break;
			default:
				cout<<"worng option"<<endl;
		}
		cout<<"you wont to continue:- ";
		cin>>ch;
	}while(ch=='y');
	return 0;
}
