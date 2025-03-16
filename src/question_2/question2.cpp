#include "question2.h"
using namespace std;

bool test_config()
{
    return true;
}


vector <double> get_cookie_ingredients(int cookies){
    double sugar_per_cookie=(1.5/48.0);
    double butter_per_cookie=1.0/48.0;
    double flour_per_cookie=2.75/48.0;
    
    double sugar = sugar_per_cookie* cookies;
    double butter= butter_per_cookie* cookies;
    double flour= flour_per_cookie* cookies;
    return{sugar, butter, flour};
}