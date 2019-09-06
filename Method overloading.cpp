#include<iostream>
using namespace std;
#include<conio.h>
class sample
{
	private :
		int num1,num2;
	
	public:
	    
		sample()
		  {
		  	num1=30;
		  	num2=60;
		  }	
		  
		int sum()
		{
			return(num1+num2);
		}
		int sum(int x, int y)
		{
			return(x+y);
		}
		int sum(float p,float q,float r)
		{
			return(p+q+r);
		}
};


 main()
{
	sample obj1;
	sample obj2;
        sample obj3;	
	cout<<"\n summation of integer no="<<obj1.sum();
	cout<<"\n summation of two integer no="<<obj2.sum(10,30);
	cout<<"\n summation of float number="<<obj3.sum(2.5,7.8,1.9);
	
	return 0;
	
}
