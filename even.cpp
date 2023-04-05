#include<iostream>
using namespace std;
int main ()
{
    int num; 
    cout << "Enter the number to be checked : ";
    //declare number
    cin >> num;
    if (num % 2 == 0) 
     //condition
        cout << num << " is Even."; 
    else
        cout << num << " is Not Even ";
    return 0;
}