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
				cout<<"enter the value:";
				cin>>num;
			}
			void display()
			{
				cout<<num;
				
			}
			friend sample operator-(sample obj);
};
sample operator-(sample obj)
{
	obj.num=-obj.num;
	return (obj);
}
 main()
{
	sample a,b;
	a.input();
	b=-a;
	cout<<"value of A";a.display();
	cout<<"value of B";b.display();
	getch();
}
