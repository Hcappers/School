/*  Author:  Haskell Cappers (haskellcappers@my.unt.edu)
    Date: 11/20/18
    Instructor: Dr.Helsing
    Description: Creating a dynamic array with user defined size. Then entering number into the array and printing the backwar
*/
#include <iostream>
using namespace std;

int main(){
    int *numlist; // Declaring the pointer
    int size; // Declaring the size of the array
    int max =  0;

    // to give the user the option to define the size of the array
    cout << "What size array do u want? ";
    cin >> size;

    numlist = new int[size];

    // To let the user enter number into the array
    for(int i = 0; i < size; i++){
        cout << "Enter the value # " << i + 1 << ": ";
        cin >> *(numlist + i);
    }

    //finding the maximus value in the array
    for(int i = 0; i < size; i++){
        if(*(numlist + i) > max){
            max = *(numlist + i);
        }
    }

    cout << "The max value in the array is: " << max << endl;

    // Deleting the memory allocated to the pointer
    delete numlist;

    return 0;
}