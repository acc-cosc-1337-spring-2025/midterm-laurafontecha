#include<iostream>
using namespace std;
#include "question4.h"

bool test_config()
{
    return true;
}

int get_earned_points(int sold){
    if(sold>=16){
        return sold*15;
    } else if(sold>=11){
        return sold*10;
    }else if (sold>=6){
        return sold*5;
    }else if (sold>=1){
        return sold*1;
    }else{
        return 0;
    }
}
