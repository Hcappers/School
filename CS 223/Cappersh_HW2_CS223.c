/* 
-----------------------------------------------
 Submitted By: Haskell Cappers
 Homework Number: 2
 Credit to: n/a
 Submitted On: 02/04/2021
 By submitting this program with my name,
 I affirm that the creation and modification
 of this program is primarily my own work.
------------------------------------------------
*/
//Total area of the grass and the time it takes to mow the yard, or message about why mowing is not possible. 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MOW_SPEED 2

int main (void){
  //declared variables
  double width_yard = 0;
  double lenght_yard = 0;
  double width_house = 0;
  double lenght_house = 0;
  double area_yard = 0;
  double area_house = 0;
  double area_grass = 0;
  double mow_time = 0;
  int rain = 0;
  
  printf("Haskell Cappers \n"); //prints my name

  printf("Is it raining today? Enter 1 for yes or 0 for no.\n"); //asks the user if it raining or not
  scanf("%d", &rain);

  //runs a check to see if it is raining or not, if it is raining it closes the program if its not it continues on
  if(rain == 1){
      printf("Sorry, it is raining, you cannot mow now\n"); //closes the program if its raining
  }
  else{
      printf ("Please enter the width of the house that needs to be mowed.\n");	//Asking the user to enter the width of the house
      scanf ("%lf", &width_house);
      printf ("Please enter the length of the house that needs to be mowed.\n"); //Asking the user to enter the length of the house
      scanf ("%lf", &lenght_house);

      printf ("Please enter the width of the yard that needs to be mowed.\n");	//Asking the user to enter the width of the yard
      scanf ("%lf", &width_yard);
      printf ("Please enter the length of the yard that needs to be mowed.\n");	//Asking the user to enter the length of the yard
      scanf ("%lf", &lenght_yard);

      area_yard = width_yard * lenght_yard;
      area_house = width_house * lenght_house;
      area_grass = area_house - area_yard;
      
      //checks to see if the area of the house is small than the area of yard, if the yard is bigger then the house it closes the program if its smaller it continues on 
      if(area_yard  > area_house){
          mow_time = area_grass / (MOW_SPEED * 60);
          printf ("The total area to be mowed is %.2lf square feet and it takes %.2lf minutes to mow it\n", area_yard, mow_time); // prints to the user how the area of the yard was and how long it would take for it to be mowed in min.
      }
      else{
          printf ("Error, The area of the yard should be bigger than the house. Please re-run the program\n"); //closes the program if the area of the house is small then the yard
      }

  }
  return 0;
}