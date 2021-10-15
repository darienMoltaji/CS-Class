#include <iostream>3
using namespace std; 

void swapValues (int& userVal1, int& userVal2) {
   int temp; 
   temp = userVal1;
   userVal1 = userVal2; 
   userVal2 = temp;
}

void sort(int& userVal1, int& userVal2, int& userVal3){
    if(userVal1<userVal2){
        swapValues(userVal1,userVal2);
    }
    if(userVal1<userVal3){
        swapValues(userVal1,userVal3);
    }
    if(userVal2<userVal3){
        swapValues(userVal2,userVal3);
    }
}

int main(){
   int userVal1, userVal2, userVal3;
   cout<<"Enter first number: ";
   cin>>userVal1;
   cout<<"Enter second number: ";
   cin>>userVal2;
   cout<<"Enter third number: ";
   cin>>userVal3;
   sort(userVal1, userVal2, userVal3);
   cout<<userVal1<<" "<<userVal2<<" "<<userVal3<<endl;
   return 0;
}