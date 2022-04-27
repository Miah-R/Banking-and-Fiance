// add to linked list code

 int main() 
{     //Miah Counts the numbeer of times a business is in the linked list
    string name; // name given by user
    cin >> name;
    
    int count = rep_count(head, business, 0);
    cout << string << "occurs" << count << "times";
    return 0;
}

int rep_count(nodeType *head, string name, int count) //counts the number of times it is in the linked list
    {
      if (head -> business == name)
      {
        count++;  
      }
      else (head -> link ==nullptr)
      {
        return count;
      }
    }

//Miah Currancy converter

int main() 
{
    int curry = 0;
    double rate = 0,  value_curry = 0; //both are doubles because user may enter a decimal amount
    
    while (1>0)// when not added to the linked list, this is used to start
    {
      cout << "Convert to 1: Yen, 2: Peso, 3: Euro" << endl;
      cin >> curry;
      
      switch (curry)
      {
      case 1:
        cout << "Enter Dollar amount: ";
        cin >> value_curry;
        rate = value_curry * 127.26;
        cout << value_curry << "Dollars is "<< rate << "Yen" << endl;
        break;
      
      case 2:
        cout << "Enter Dollar amount: ";
        cin >> value_curry;
        rate = value_curry * 0.94;
        cout << value_curry << "Dollars is "<< rate << "Euro" << endl;
        break;
      
      case 3:
        cout << "Enter Dollar amount: ";
        cin >> value_curry;
        rate = value_curry * 20.41;
        cout << value_curry << "Dollars is "<< rate << "Peso" << endl;
        break;
      }
    }
    
    return 0;
}

[project.txt](https://github.com/Miah-R/Banking-and-Fiance/files/8573111/project.txt)

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

struct nodeType
{
     int info;
     string business;
     nodeType *link;
};

void insert( string business, int info)
  {
    nodeType *head = nullptr;
    nodeType *current = nullptr;
    nodeType *newNode = nullptr;
    
    newNode = new nodeType;
    newNode -> business, info;
    newNode -> link = nullptr;
    
    if (head == nullptr)
      {
        head = newNode;
      }
      else
      {
        current = head;
        while (current -> link != nullptr)
        {
          current = current -> link;
        }
        current -> link = newNode;
      }
  }

void display()
    {
      current = head;
      while (current != nullptr)
      {
      cout << current -> business info << endl;
      current = current -> link; 
      }
    }
  
// function that search item in the list
bool search_Item_In_List(nodeType *head, int targetItem)
{
    nodeType *current = head;
    while (current != nullptr)
    {
        if (current->info == targetItem)
            return true;
    current = current->link;
    }
return true;
}

// function to delete the item from the linked list
void delete_item_from_list(nodeType *head, int targetItem)
    {
        nodeType *prev = nullptr, *current = head;
        if (isLinkedListEmpty(head) == true)
        {
            cout << "List is empty.\n";
            return;
        }
        
        else if (head->info == targetItem)
        {   
            head = head->link;
            delete current;
            return;
        }
        while (current != nullptr && current->info != targetItem)
        {
            prev = current;
            current = current->link;
        }
        
        if (current->info != targetItem)
        {
            cout << "Search Item is not present in Linked List.\n";
            return;
        }
        else
        {
            prev->link = current->link;
            delete current;
        }
    }


//Miah: swap function for bubble sort
void swap(nodeType* ptr1, nodeType* ptr2)
{
  int temp = ptr1 -> business, info;
  ptr1 -> business, info = ptr2 -> business, info;
  ptr2 -> business, info;
}
void Bubblesort(nodeType *head)
{
    int swap;
    nodeType *current;
    nodeType *newNode = nullptr;
    do{
      swapped = 0;
      current = head;
      while( current -> link != newNode)
      {
        if (current -> business, info)
        {
          swap(current, current -> link);
          swapped = 1;
        }
        current = current -> link;
      }
      newNode = current;
    }
    while (swapped);
}

int main() 
{ 
  
    string username;
    string password;
    cout <<"Enter username : ";cin>> username;
    cout<<"Enter password : ";cin>>password;
    if (username == "DrJackson") {
        if(password == "Computerscience") {
            cout<<"Allow login !"<<endl;
        }else{
        cout<<"Incorrect password try again "<<endl;
        }
      else{
        cout<<"Incorrect username try again "<<endl;
      }
    }
    
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
    
    cout << "Enter 6 to print" << endl;
    cout << "Enter 7 to search" << endl;
    cout << "Enter 9 to delete" << endl; 
    cout << "Enter 10 to sort" << endl; 
    cout << "Enter 11 to revese the order" << endl;
    cout << "Enter 12 to use currency converter" << endl; 
    cout << "Enter 13 to find your most frequent business" << endl; 
    cin >> value;
    
    Bubblesort(&head);
    
    delete(string business, int info);
    // Print out list 
    cout<< " The list is" << endl;
    display();
    
     std::list<int> myTransactions;

  for (int i=30; i<60; ++i) myTransactions.push_back(i);

  myTransactions.reverse();

  std::cout << " myTransactions:";
  for (std::list<int>::iterator it=myTransactions.begin(); it!=myTransactions.end(); ++it)
    std::cout << ' ' << *it;

  std::cout << '\n';
  
  //Miah: currency converter
    int curry = 0;
    double rate = 0, value_curry = 0;
    
    while (1>0)
    {
      cout << "Convert to 1: Yen, 2: Peso, 3: Euro" << endl;
      cin >> curry;
      
      switch (curry)
      {
      case 1:
        cout << "Enter Dollar amount: ";
        cin >> value_curry;
        rate = value_curry * 127.26;
        cout << value_curry << "Dollars is "<< rate << "Yen" << endl;
        break;
      
      case 2:
        cout << "Enter Dollar amount: ";
        cin >> value_curry;
        rate = value_curry * 0.94;
        cout << value_curry << "Dollars is "<< rate << "Euro" << endl;
        break;
      
      case 3:
        cout << "Enter Dollar amount: ";
        cin >> value_curry;
        rate = value_curry * 20.41;
        cout << value_curry << "Dollars is "<< rate << "Peso" << endl;
        break;
      }
    }
  //Miah Counts the numbeer of times a business is in the linked list
  string name; // name given by user
  cin >> name;
  int count = rep_count(head, business, 0);
  cout << string << "occurs" << count << "times";
  return 0;
} 
int rep_count(nodeType *head, string name, int count) //counts the number of times it is in the linked list
    {
      if (head -> business == name)
      {
        count++;  
      }
      else (head -> link ==nullptr)
      {
        return count;
      }
    }

