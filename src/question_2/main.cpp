#include "question2.h"
#include<iostream>
using namespace std;
int main()
{
    int cookies;
    char choice;
    do{
        cout<<"Enter the cookies you want to bake: ";
        cin>>cookies;
        if (cookies<0){
            cout<<"Invalid input. Please enter a positive interger";
        } else
        {
            vector <double> ingredients  = get_cookie_ingredients(cookies);
            cout<< "Cups of sugar: "<< ingredients[0]<< endl;
            cout<< "Cups of butter: "<< ingredients[1]<< endl;
            cout<< "Cups of flour: "<< ingredients[2]<< endl;
        }
        cout<<"Do you want to continue (y/n): ";
        cin>> choice;

    } while(choice =='y'|| choice =='y');


    cout<< "End of Program"<<endl;
    
    return 0;
}