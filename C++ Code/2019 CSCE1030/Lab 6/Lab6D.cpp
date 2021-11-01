/* Author: Haskell Cappers
 Date:03/21/2019
 Instructor:  Dr. Joseph Helsing
  Description: 
*/
#include<iostream>
#include<cstring>
using namespace std;

int main(){
  char str1[30], str2[30];
  int len1, len2;

  strcpy(str1, "This is CSCE1030");

  cout << "Enter a word with 29 or fewer characters at the prompt: ";
  cin  >> str2;

  // Assigning lengths
  len1 = strlen(str1);
  len2 = strlen(str2);

  if(len1 == len2){
    cout << "The C-strings have the same length." << endl;
  } else {
    cout << "The C-strings are not the same length." << endl;
    return 0;
  }

  // Using strcmp to compare the strings, 0 means they are the same
  if(strcmp(str1,str2) == 0){
    cout << "The two C-strings \"" << str1 << "\" & \"" << str2 << "\" are the same." << endl;
  } else {
    cout << "The two C-strings \"" << str1 << "\" & \"" << str2 << "\" are NOT the same." << endl;
  }

  return 0;
}