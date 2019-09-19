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
				cout<<"\n enter the value ";
				cin>>num;
			}
			void display()
			{
				cout<<num;
			}
			sample operator ++(int)
			{
				sample temp;
				temp.num=num++;
				return(temp);
			}
};
main()
{
	sample a,b;
	a.input();
	b=a++;
	cout<<"\n value is of A";
	a.display();
	cout<<"\n value is of B";
	b.display();
	return 0;
}
