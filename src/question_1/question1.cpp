#include "question1.h"
#include<iostream>
using namespace std;

bool test_config()
{
    return true;
}

string decimal_to_binary(int decimal)
{
    string binary="";
    if (decimal<0){
        return "";

    }
    while (decimal>0)
    {
        binary.push_back((decimal%2)+ '0');
        decimal/= 2;
    }
    while(binary.length()<8)
    {
        binary.push_back('0');
    }
    string reversed_binary="";
    for (int i= binary.length() -1; i>=0; --i)
    {
        reversed_binary.push_back(binary[i]);
    }
    return reversed_binary;

}
