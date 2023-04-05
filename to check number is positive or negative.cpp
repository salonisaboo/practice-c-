#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number to be checked:"<<endl;
    //declare number 
    cin>>num;
    //condition to be checked
    if (num >= 0)
        cout << num << " is a positive number.";
    else
        cout<<num<<"is a negative number.";
    return 0;

}