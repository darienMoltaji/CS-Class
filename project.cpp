#include<iostream>
using namespace std;

int main(){
    
 char Player1, Player2, ans;
do{
   cout << "Rock, Paper, Scissors is a simple game. The rules are: \n Rock beats scissors. \n Scissors beats Paper. \n Paper beats rock.\n";

   cout << "Enter R for rock, P for paper, or S for scissors\n";

   cout << "Player1 what is your weapon of choice?" << endl;
   cin >> Player1;
   cout << "Player2 what is your weapon of choice?" << endl;
   cin >> Player2;

   cout << "ROCK, PAPER, SCISSORS, SHOOT" << endl;

       if ((Player1 = ('R' || 'r')) && (Player2 = ('S' || 's'))){
           (cout << " Player1 wins, Rock breaks scissors \n ");
       }else if ((Player1 = ('S' || 's')) && (Player2 = ('R' || 'r'))){
           (cout << "Player2 wins, Rock breaks scissors \n ");
       }else if ((Player1 = ('P' || 'p')) && (Player2 = ('R' || 'r'))){
           (cout << "Player1 wins, Paper covers rock \n ");
       }else if ((Player1 = ('R' || 'r')) && (Player2 = ('P' || 'p'))){
           (cout << "Player2 wins, Paper covers rock \n ");
       }else if ((Player1 = ('S' || 's')) && (Player2 = ('P' || 'p'))){
           (cout << "Player1 wins, Scissors cut paper \n ");
       }else if ((Player1 = ('P' || 'p')) && (Player2 = ('S' || 's'))){
           (cout << "Player2 wins, Scissors cut paper \n ");
       }
  
       cout << "Do you want to play again? Press 'Y' for yes or 'N' for no\n";
       cin >> ans;
       } while (ans == 'Y' || ans == 'y');

       cout << "Thanks for playing " << endl;


return 0;
}
