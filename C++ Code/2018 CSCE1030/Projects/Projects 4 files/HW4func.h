#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

enum TILETYPE {LOCKED = 'X', HORIZONTAL = '-', CROSS = '+', VERTICAL = '|', EMPTY = ' '}; // These are the different type of momvemts that can be used
enum COLOR {RED, BLUE, STANDARD}; // This is to have a color difference between the computer and user movements

struct Tile{
    TILETYPE type;
    COLOR color;
    int lane; // for the 7 lanes for the board on the x and y axis
};


void intro(); // This function is only to display the defualt header
void rules(); // This function is only to display the rules of the game at the beginning.
void initalboard(Tile **board, int size); // This function is to have the user input the file the want for the board
void printboard(Tile **board, int size); // This funciton is to print the board everytime after either the computer or the user makes a turn
void AiTurn(Tile **board, int size); // This function is for the computer's movements
void UserTurn(Tile **board, int size); // This is for the users moves
void placeTile(Tile **board, int size, TILETYPE tiletype, int lane, int user);
bool gameOver(Tile **board, int size);//returns true if game over
TILETYPE getTileType(char type); // This function refers to the enum to get the correct movement type
