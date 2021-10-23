#include<iostream>
#include<stdlib.h>
#include<ctime>
#include<cmath>

using namespace std;

double calculate_deviation(double arr[],int size);

int main()
{
    int i, n;
    double arr[1000];
    
    cout<<"Please enter the number of elements in the array: ";
    cin>>n;
    cout<<"Enter array elements: "<<endl;
    
    for(i=0;i<n;i++)
        {
        cin>>arr[i];
        }
    
    cout<<"Array is: "<< endl;
    
    for(int i =0; i< n; i++)
        {
        cout<<arr[i]<<" ";
        }

    cout << endl;

    double sd = calculate_deviation(arr, n);
    
    cout<<"Standard devaiation is: "<< sd << endl;
    cout<<endl;

}


double calculate_deviation(double arr[], int size)
{
    int i;
    double sum = 0, avg, std, varience, standard_deviation;
    
    for(i=0;i<size;i++)
        {
        sum = sum + arr[i];
        }

    avg = sum/size;
    
    for(i=0;i<size;i++)
        {
        std = std + pow(arr[i] - avg, 2);
        }
        
    varience = std/size;

    standard_deviation = sqrt(varience);

    return standard_deviation;
    
}