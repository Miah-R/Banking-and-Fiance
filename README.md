# Banking-and-Fiance
Semester Project using Linked Lists and Data structures

#include <iostream>
#include <string>
using namespace std;
int main()
{
    // Function that allows username and password, Brendon.
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
        return 0;
        }
}
