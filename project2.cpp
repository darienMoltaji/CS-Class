#include<iostream>
using namespace std;
int main()
{
getRoman(int thousands, int hundreds, int tens, int ones){
    int getRoman;
    getRoman = thousands+hundreds+tens+ones;
    return getRoman;
}

    int number, thousands, tens, hundredsm ones;
    cout<< "Enter a four digit number";
    cin>> number;
    ones = number %10;
    number = number / 10;
    tens = number %10;
    number = number / 10;
    hundreds = number %10;
    number = number / 10;
    thousands = number %10;
    
    getRoman(thousands, 'M', NULL, NULL);
    getRoman (hund)



    return 0;
}