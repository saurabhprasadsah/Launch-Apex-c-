#include<iostream>
using namespace std;
#include<conio.h>
class student
{
	private:
		int roll,marks;
		char grade;
		public:
			void getdata(int r, int m)
			{
				roll =r;
				marks =m;
				
			}
			void calculate(){
				if(marks>=60){
					grade ='A';
				}
				else if
				(marks>=50)
				{
					grade = 'B';
				}
				else {
					grade = 'c';
				}
			}
			void display()
			{
				cout<<"roll"<<roll;
				cout<<"marks"<<marks;
				cout<<"grade"<<grade;
			}
};
 main()
{
	student ram,shyam,mohan;
	ram.getdata(101,50);
	shyam.getdata(102,40);
	mohan.getdata(103,30);
	
	
	
	ram.calculate();
	shyam.calculate();
	mohan.calculate();
	
	ram.display();
	shyam.display();
	mohan.display();
	
	
}
