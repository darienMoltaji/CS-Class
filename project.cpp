#include <iostream>
using namespace std;

int main(){

int day, time_of_day;
char user_continue;
enum week{Sun, Mon, Tue, Wed, Thu, Fri, Sat};
week now = Sun ;


cout<< "What is the day of the week?"
    << " 0 for Sun, 1 for Mon, 2 for Tue, 3 for Wed, 4 for Thu, 5 for Fri, and 6 for Sat. ";
cin>> day;
cout<< "What time of the day is it?"<< " (Enter in military time)";
cin>> time_of_day;

cout<< "\nContinue? (y for yes, n for no)";
cin>> user_continue;

while (user_continue = 'y'){    

        switch(now){
            
            case Sun:
            if (time_of_day = 800){
                cout<< "Walk the dog.";
            }else if (time_of_day = 1200){
                cout<< "Water the lawn.";
            }else if (time_of_day = 1500){
                cout<< "Get groceries";}
            break;
            
            case Mon:
                if (time_of_day = 800){
                cout<< "Dust the TV.";
            }else if (time_of_day = 1200){
                cout<< "Wash the dishes.";
            }else if (time_of_day = 1500){
                cout<< "Take out the trash.";}
            break;
            
            case Tue:
                    if (time_of_day = 800){
                cout<< "Make coffee.";
            }else if (time_of_day = 1200){
                cout<< "Make lunch. ";
            }else if (time_of_day = 1500){
                cout<< "Mop the floor.";}
            break;
            
            case Wed:
                    if (time_of_day = 800){
                cout<< "Do homework.";
            }else if (time_of_day = 1200){
                cout<< "Clean the toilet.";
            }else if (time_of_day = 1500){
                cout<< "Wash the dog.";}
            break;
            
            case Thu:
                    if (time_of_day = 800){
                cout<< "Go for a jog.";
            }else if (time_of_day = 1200){
                cout<< "Vacuum.";
            }else if (time_of_day = 1500){
                cout<< "Mow the lawn.";}
            break;
            
            case Fri:
                    if (time_of_day = 800){
                cout<< "Wash windows.";
            }else if (time_of_day = 1200){
                cout<< "Do laundry.";
            }else if (time_of_day = 1500){
                cout<< "Make up bed.";}
            break;
            
            case Sat:
                    if (time_of_day = 800){
                cout<< "Call grandma.";
            }else if (time_of_day = 1200){
                cout<< "Take a nap.";
            }else if (time_of_day = 1500){
                cout<< "Make a list.";}
            break;
        }
    }

    return 0;
}
