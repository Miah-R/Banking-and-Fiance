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

