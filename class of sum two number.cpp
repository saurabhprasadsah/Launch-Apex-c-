#include <iostream>
 
using namespace std;
 
class Mathematics {
  int x, y;
 
public:
  void input() {
    cout << "Input two integers\n";
    cin >> x >> y;
  }
 
  void add() {
    cout << "Result: " << x + y;
  }
 
};
 
int main()
{
   Mathematics m; // Creating an object of the class
 
   m.input();
   m.add();
 
   return 0;
}
