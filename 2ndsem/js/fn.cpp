#include <iostream>
using namespace std;
long printFactorials(int counter) 
{
     long number;
     if(counter == 1) 
          return 1;
      else 
          number = printFactorials(counter - 1) * counter;
     return number;
}
int main() 
{
     cout << "***** FACTORIALS *****" << endl;
     int counter = 15;
     cout << "Factorial of " << counter << " is " << printFactorials(counter);
}
