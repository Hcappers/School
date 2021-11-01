/*  Author:  Haskell Cappers (haskellcappers@my.unt.edu)
    Date: 4/19/2019
    Instructor: Dr.Helsing
    Description: inserting information to the struck and asking the user for experiance to give a bonus worth their experiance.
*/
#include <iostream>
#include <string>
using namespace std;

struct Employee{
    string name;
    double salary;
    int experience;
    double bonus;
};

int main(){
    Employee *employee_ptr;
    employee_ptr = new Employee;

    // Assining the name and years of experience to the employee
    cout << "Enter the employees name: ";
    cin >> employee_ptr->name;
    cout << "Enter number of years of experience: ";
    cin >> employee_ptr->experience;
    cout << "Enter the employees salary: ";
    cin >> employee_ptr->salary;

    // Assigning the bonus depending on the years experience
  if(employee_ptr->experience > 10){
      employee_ptr->bonus =  (.05 * employee_ptr->salary);
  }else{
      employee_ptr->bonus =  (.03 *  employee_ptr->salary);
  }

    // Displaying back the name and the amount for the bonus
    cout << "Employee name: " << employee_ptr->name << endl;
    cout << "Employee bonus: " << employee_ptr->bonus << endl;

    delete employee_ptr;

    return 0;
}