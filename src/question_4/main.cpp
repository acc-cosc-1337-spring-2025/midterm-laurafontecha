#include<iostream>
#include "question4.h"
using namespace std;


int main()
{
    int sold;
    char choice;
    do{
        cout<<"Enter the number of widgets sold: ";
        cin>> sold;
        if (sold<0){
            cout<< "Invalid input. Please enter a positive interger."<<endl;

        }else{
            int points=get_earned_points(sold);
            cout<<"Points Earned: "<<points<<endl;
    
        }
        cout<<"Do you want to continue (y/n): ";
        cin>> choice;

    } while(choice =='y'|| choice =='y');
    cout<< "End of Program"<<endl;

    return 0;
}