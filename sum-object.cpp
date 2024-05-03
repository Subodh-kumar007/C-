#include<iostream>
using namespace std;
class example
{
	int n;
	public:
		void readInput(int e)
		{
			n=e;
		}
		void showOutput()
		{
			cout<<n<<endl;
		}
		void sum(example G)
		{
			n=n+G.n;
		}
		
};

int main()
{
	int n,s;
	example E1,E2;
	cout<<"enter the 1.object no.:= ";
	cin>>n;
	cout<<"enter the 2.object no.:= ";
	cin>>s;
	E1.readInput(n);
	E2.readInput(s);
	E2.sum(E1);
	E2.showOutput();
	E1.sum(E2);
	E1.showOutput();
	//cout<<E1.n<<" "<<E2.n;
	return 0;
}
