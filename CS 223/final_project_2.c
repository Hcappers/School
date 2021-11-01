#include<stdio.h>
#include<stdlib.h>
#include <math.h>
#include <string.h>
#define SIZE 10
    struct Astronaunts //struct to check user name and pins
    {
        char name[SIZE];
        int pin;
    };
void UserCheck();

int main(void){
    struct Astronaunts astronaut[6];
    UserCheck(astronaut);
    return 0;
}

void UserCheck(struct Astronaunts *astronaut){


    
    int i;

    FILE *Fusers = fopen("ident.txt","r" );
    for(i = 0; i < 7; i++){
        fscanf(Fusers, "%s\t %d\n", (astronaut+i)->name, &(astronaut=i)->pin);
        printf("%s\t %d\n", (astronaut+i)->name, &(astronaut +i)->pin);
        }
    fclose(Fusers);
}