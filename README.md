# Banking-and-Fiance
Semester Project using Linked Lists and Data structures

 // reversing list
#include <iostream>
#include <list>

int main ()
{
  std::list<int> myTransactions;

  for (int i=30; i<60; ++i) myTransactions.push_back(i);

  myTransactions.reverse();

  std::cout << " myTransactions:";
  for (std::list<int>::iterator it=myTransactions.begin(); it!=myTransactions.end(); ++it)
    std::cout << ' ' << *it;

  std::cout << '\n';

  return 0;
}
  
  #include <iostream>
using namespace std;

int main()
{
    int number = 0;
    
    cout << "enter number:" << endl;
    cin>> number;
    
    if(number > 3)
    {
        cout << "You chose to have all notifications on for transactions, balances, and unknown activity" << endl;
    }
    else 
    {
        cout << "You chose not to have all notifications on for transactions, balances, and unknown activity" << endl;
    }
}
