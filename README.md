# Banking-and-Fiance
Semester Project using Linked Lists and Data structures

Idea 1: An cashapp like app that works as your personal checking account
> keep track of bills
> savings

Idea 2: An application that compares the top banking institutions on their services for 

Idea 3: // include all the libraries first
#include <iostream>
#include <string>
#include <list>
using namespace std;

// structure for node in a linked list
struct nodeType
{
     int info;
     nodeType *link;
};

// Write an application that creates a linked list and prints it out

int main() {

// Function that allows username and password, Brendon.
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
}else{
    cout<<"Incorrect username try again "<<endl;
    }
}
    //Function that allows user to decide if they want notifcations. Ke'Yonna
    {
      std::list<int> myTransactions;

      for (int i=30; i<60; ++i) myTransactions.push_back(i);

      myTransactions.reverse();

      std::cout << " myTransactions:";
      for (std::list<int>::iterator it=myTransactions.begin(); it!=myTransactions.end(); ++it)
        std::cout << ' ' << *it;

      std::cout << '\n';
    }

// Miah
    {
        int curry = 0, value_curry = 0;
        double rate = 0;
        
        while (1>0)
        {
          cout << "Convert to 1: Yen, 2: Peso, 3: Euro" << endl;
          cin >> curry;
          
          switch (curry)
          {
          case 1:
            cout << "Enter Dollar amount: ";
            cin >> value_curry;
            rate = value_curry * 107.83;
            cout << value_curry << "Dollars is "<< rate << "Yen" << endl;
            break;
          
          case 2:
            cout << "Enter Dollar amount: ";
            cin >> value_curry;
            rate = value_curry * 0.91;
            cout << value_curry << "Dollars is "<< rate << "Euro" << endl;
            break;
          
          case 3:
            cout << "Enter Dollar amount: ";
            cin >> value_curry;
            rate = value_curry * 19.51;
            cout << value_curry << "Dollars is "<< rate << "Peso" << endl;
            break;
          }
        }
    }
        
    nodeType *head = nullptr;
    nodeType *current = nullptr;
    nodeType *newNode = nullptr;
    int value; // obtain value from user
    
    cout << "Enter an integer (-1 to stop):";
    cin >> value;
    
while (value !=-1)
{
    
      // Add data to the list
      newNode = new nodeType;
      newNode -> info = value;
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
      cout << "Enter an integer (-1 to stop):";
      cin >> value;
    }
    // Print out list
    cout<< " The list is" << endl;
    current = head;
    
    while (current != nullptr)
    {
      cout << current -> info << endl;
      current = current -> link;
    }
}
    // Determine whether the list is empty
bool isLinkedListEmpty(nodeType *head)
{
    if (head == nullptr) // if linked list is empty them return true
        return true;

    else    // If the linked list is not empty then return false
        return false;
}


// function that insert info in the linked list is below:
void insertInfo_in_linkedList(nodeType* &head, int givenInfo)
{
    nodeType *current = head;
    nodeType *newNode = new nodeType();
    newNode->info = givenInfo;
    newNode->link = nullptr;
    if (current == nullptr)
    {
        head = newNode;
        return;
    }
    while (current->link != nullptr)
    {
        current = current->link;
    }
    current->link = newNode;
}


// Function that adds items in the linked list

void add_items_in_list(nodeType* &head)
{
    int data_enter; // variable that store data
    while (1)
    {
        cout << "Enter an integer (-1 to stop): ";
        cin >> data_enter;
        if (data_enter == -1)
            break;

        else
        {
            insertInfo_in_linkedList(head, data_enter);
        }
    }
}


// function that find length of the linked list
int length_of_list(nodeType *head)
{
    int len = 0;
    nodeType *current = head;
    while (current != nullptr)
    {
        len++;
        current = current->link;
    }
    
    return len;
}


// function that destroy the linked list is below:
void destroy_Linked_List(nodeType *head)
{
    nodeType *prev = nullptr, *current = head;
    while (current != nullptr)
    {
        prev = current;
        current = current->link;
        delete prev;
    }

delete prev;
delete current;
head = nullptr;

}

// Function to print info of first node in a list
int First_node_Info(nodeType *head)
{
    if (isLinkedListEmpty(head) == true)
    {
        cout << "List is empty.\n";
        return -1;
    }

    else
        return head->info;

}


// function to print info of last node in a List

int Last_node_info(nodeType *head)
{
    nodeType *current = head;
    while (current->link != nullptr)
    {
        current = current->link;
    }

return current->info;
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


// function that copies the linked List

nodeType *copyLinkedList(nodeType *head)
    {
        nodeType *newHead = nullptr, *current = head;
        while (current != nullptr)
        {
            insertInfo_in_linkedList(newHead, current->info);
            current = current->link;
        }
    return 0;
    }


