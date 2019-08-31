#include<iostream>
using namespace std;
#include<conio.h>

class sample
{
	private:
		int a,b;
    
    public:
    	sample()
    	{
    		a=10;
    		b=20;
		}
		void print()
		{
			cout<<endl<<"value of a"<<a;
			cout<<endl<<"value of b"<<b;
		}
		friend void display(sample obj);
		
	
};
void display(sample obj)
{
	cout<<endl<<"value of non member function of a:"<<obj.a ;
	cout<<endl<<"value of non member function of b:"<<obj.b;
}


 main()

{
	sample obj;
	obj.print();
	display(obj);
	
}
