#include <iostream>
#include <fstream>
#include <string>
#include <list>
using namespace std;
struct Node {
   int data;
   struct Node *next;
};
struct Node* head = NULL;
void insert(int new_data) {
   struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
   new_node->data = new_data;
   new_node->next = head;
   head = new_node;
}
void display() {
   struct Node* ptr;
   ptr = head;
   while (ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
}
int main()
{
   insert(1);
   cout<<"The app name:";
   cout<<"the date:";
   cout<<"transactions";
   display();
   
   {
    string chose; //

    cout << "Do you want to receive notifications? "; // outputs the question
    getline(cin, chose);

    // you can output the response
    cout << "You chose: " << chose;

    cin.get();
   }
   {
  std::list<int> myTransactions;

  for (int i=10; i<20; ++i) myTransactions.push_back(i);  (I need to change this line to so that it can generate different numbers its going back from 20-10) 

  myTransactions.reverse();

  std::cout << " myTransactions:";
  for (std::list<int>::iterator it=myTransactions.begin(); it!=myTransactions.end(); ++it)
    std::cout << ' ' << *it;

  std::cout << '\n';
   }
   return 0;
