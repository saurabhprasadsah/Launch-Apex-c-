// syntax:-
 //~ destructor name()
// {
///	 _____
//	_____________
 //}		 
		 




#include<iostream>
using namespace std;
#include<conio.h>
class sample{
	private:
	       int num;
	
	public:
	      sample(int x)
		  {
		  	num = x;
		  } 
		  ~sample()
		  {
		   
		   }
		   
		   
		void display()
		{
			cout<<num;
			  }      
};
main()
{
	sample s(20);
	s.display();
	return 0;
}
