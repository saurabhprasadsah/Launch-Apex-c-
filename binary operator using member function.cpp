#include<iostream>
using namespace std;
#include<conio.h>
class sample
{
	private:
		int num;
		public:
			void input()
			{
				cout<<"\n enter the value:";
				cin>>num;
			}
			void display()
			{
				cout<<num;
			}
			sample operator+(sample obj)
			{
				sample temp;
				temp.num=num+obj.num;
				return (temp);
			}
};
 main()
{
	sample a,b,c;
	a.input();
	b.input();
	c=a+b;
	cout<<"\n value of A";a.display();
	cout<<"\n value of b";b.display();
	cout<<"\n value of c";c.display();
	
	getch();
}
