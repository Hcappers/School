/*  Author: Haskell Cappers (haskellcappers@my.unt.edu)
    Date: 4/11/19
    Instructor: Dr. Helsing
    Description: calculating average of an input file
*/
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main(){
    float num;
    float maximum = 0;
    

    ifstream myfile;
    myfile.open("act9A.txt");

    for(int i=0; i < 9; i++){
        myfile >> num;
        if(num > maximum){
            maximum = num;
        }
    }
    return 0;
}