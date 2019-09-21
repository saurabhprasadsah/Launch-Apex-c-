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
			 friend int operator>(sample obj1,sample obj2);
			
};
	int operator>(sample obj1,sample obj2)
			{
				if(obj1.num>obj2.num)
				{
					return(1);
				}
				else
				{
					return(0);
				}
			}

 main()
{
	sample a,b;
	a.input();
	b.input();
	if(a>b)
	{
		cout<<"\n A is grater";
	}
	else
	{
		cout<<"\n B is grater";
	}
	
	getch();
}
