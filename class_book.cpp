#include<iostream>
using namespace std;
class book
{
	char Bname[30],author[30];
	int fee;
	public:
		void readInput()
		{
			cout<<"enter the book name:- ";
			cin>>Bname;
			cout<<"enter the price:- ";
			cin>>fee;
			cout<<"enter the author name:- ";
			cin>>author;
		}
		void showOutput()
		{
			cout<<Bname<<" "<<fee<<" "<<author;
		}
};

int main()
{
	book B;
	B.readInput();
	B.showOutput();
	return 0;
}
