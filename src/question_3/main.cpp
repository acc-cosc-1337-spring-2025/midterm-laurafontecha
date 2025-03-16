#include "question3.h"
#include <vector>
#include<iostream>
using namespace std;
int main()
{
    int num;
    char choice;
    do{
        cout<<"Enter a number to get all prime numbers up to that number: ";
        cin>>num;
        if (num<2)
        {
            cout<< "Enter a number greater or equal than 2"<<endl;

        } else {
            vector<int> primes= get_primes(num);
            cout<<"Prime numbers up to"<< num<<": ";
            for(int prime: primes){
                cout<<prime<< " ";
            }
            cout<<endl;
        }
        cout<<"Do you want to continue (y/n): ";
        cin>> choice;

    } while(choice =='y'|| choice =='y');
    cout<< "End of Program"<<endl;
    return 0;
}