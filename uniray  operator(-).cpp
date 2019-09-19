#include<iostream>
using namespace std;
#include<conio.h>
class sample
{private:
	int num;
	public:
		void input()
		{
			cout<<"\n enter the value";
			cin>>num;
			
		}
		void display()
		{
			cout<<num;
			
		}
		sample operator-()
		{
			sample temp;
			temp.num=-num;
			return(temp);
		}
};
 main()
{
	sample a,b;
	a.input();
	b=-a;
	cout<<"\n value of A";
	a.display();
	cout<<"\n value of B";
	b.display();
	getch();
}
