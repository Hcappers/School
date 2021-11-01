#include <iostream>
using namespace std;

void swap(int& a, int& b);

int main(){
    int a = 10, b = 20;
     cout << "Before: a = " << a << " b = " << b << endl;
     
     swap(a,b);

     cout << "AFTER: a = " << a << " b = " << b << endl;

    return 0;
}

void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}