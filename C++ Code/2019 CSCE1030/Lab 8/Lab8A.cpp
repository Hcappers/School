#include <iostream>
using namespace std;

const int SIZE = 20;

void swap(int& a, int& b);
void ascend(int array[], int size);
void descend(int array[], int size);
void getarray(int array[], int size);
void showarray(int array[], int size);

int main(){
   int my_array[SIZE];
   int my_size;
   getarray(my_array, my_size);
   ascend(my_array, my_size);

   cout << "In ascending order: " << endl;
   showarray(my_array, my_size);

   cout << "In decending order: " << endl;
   showarray(my_array, my_size);

   return 0; 
}

/*Function: swap
  Parameters: a, b
  Return: swaps a, b value
  Description: This array takes the two variables and swaps their values
*/
void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

/*Function: ascend
  Parameters: array, SIZE
  Return: the array in ascending order
  Description: This function takes the the array in ascending order
*/
void ascend(int array[], int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(array[i] < array[j]){
                swap(array[i], array[j]);
            }
        }
    }

}

/*Function: descend
  Parameters: array, size
  Return: the array in descend order
  Description: This function takes the the array in descending order
*/
void descend(int array[], int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(array[i] > array[j]){
                swap(array[i], array[j]);
            }
        }
    }

}

/*Function: getarray
  Parameters: array, size
  Return: users array
  Description: This function gets the user defined array
*/
void getarray(int array[], int size){
    cout << "Please enter the size of the array: ";
    cin >> size;

    for(int i = 0; i < size; i++){
        cout << "Enter the value for the array: " << endl;
        cin >> array[i];
    }
}

/*Function: showarray
  Parameters: array, size
  Return: the array in ascending order
  Description: This function shows the user defined array
*/
void showarray(int array[], int size){
    for(int i = 0; i < size; i++){
        cout << array[i] << endl;
    }
}