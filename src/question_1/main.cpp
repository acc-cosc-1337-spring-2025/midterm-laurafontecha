#include<iostream>
#include "question1.h"
using namespace std;

int main()
{
    int decimal;
    char choice;
    do{
        cout<< "Enter an interger value (1-255): ";
        cin >> decimal;
        if (decimal<0 || decimal >255){
            cout<<"Invalid number. Number is not between 0 and 255"<< endl;
        }else
        {
            string binary= decimal_to_binary(decimal);
            cout<< "Binary representation "<< binary<<endl;
        }
        cout<<"Do you want to continue (y/n): ";
        cin>> choice;

    } while(choice =='y'|| choice =='y');
    cout<< "End of Program"<<endl;

    return 0;
}