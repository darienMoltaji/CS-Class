#include<iostream>
using namespace std;
int main(){

double dueCost, dueInterest, minPayment, balance;
char Continue;

do{ 
 	 cout<<"Enter balance due: ";
	 cin>>balance;
	 
	 if(balance <= 1000){
	  dueInterest = (balance * 0.015);
	 }else if (balance > 1000){
	dueInterest = ((balance - 1000) * 0.01) + (1000) * 0.015;}
	
	dueCost = balance + dueInterest;

    minPayment = dueCost<=10? 
    dueCost : ((dueCost*.1)> 10? (dueCost*.1):10);

	cout<<"Interest on balance:"<< " " << dueCost << endl ;
	
	cout<<"Would you like to continue? Press y for yes, n for no \n";
	cin>> Continue;
	 
	}while(Continue =='y' || Continue =='Y');
	
return 0;
}