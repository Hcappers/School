#include <iostream>
#include <cstdlib>
#include <time.h>
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
TILETYPE getTileType(char ch); // This function refers to the enum to get the correct movement type

int main(){
    const int SIZE = 7;

    Tile **tiles; // This is the dynamice 2D array for the game board
    tiles = new Tile*[SIZE];
    for (int i = 0; i < SIZE; i++)
        tiles[i] = new Tile[SIZE];

    intro();
    initalboard(tiles, SIZE);
    rules();

    while (!gameOver(tiles, SIZE)){
        UserTurn(tiles, SIZE);
        if(!gameOver(tiles, SIZE))
          AiTurn(tiles, SIZE);
    }
    printboard(tiles, SIZE);

    return 0;
}

void intro(){
    cout << "****************************************************************" << endl;
    cout << "             Computer Science and Engineering                   " << endl;
    cout << "              CSCE 1030 - Computer Science 1                    " << endl;
    cout << "Haskell Cappers   --   hac0078    --  haskellcappers@my.unt.edu " << endl;
    cout << "****************************************************************" << endl;
    cout << endl;
}

void rules(){
    cout << "********************The aMAZEing Labyrinth********************\n" << endl;
    cout << "                           Rules\n                              " << endl;
    cout << "The aMAZEing Labyrinth is a two player game in which players\n  ";
    cout << "take turns sliding tiles, marked with |, -, or +, into lanes\n  ";
    cout << "from their side of the board. The goal is to have at least one\n";
    cout << "lane that has a straight, connected path from one player's\n    ";
    cout << "side of the board to the opposite side. This game is as much\n  ";
    cout << "about offense as it is defense, as you will have to try to\n    ";
    cout << "extend your path while blocking your opponent's progress.\n     " << endl;
    cout << "                           Good luck!                           " << endl;
    cout << "**************************************************************  " << endl;
}

void initalboard(Tile **board, int size){
    ifstream in_s; // To let the user choose what file they want for the game board
    char infile[50]; // This is a 1D array for the input file.
    char c; // This is so the fucntion car grag the the grid
    string line, temp;

    cout << "Please enter the filename of the designated board: ";
    cin >> infile;
    in_s.open(infile);

    // This is an error checking prosses for the input file.
    while(in_s.fail()){
        cout << "The file you tired to open failed. Please try again: ";
        cin >> infile;
        in_s.open(infile);
    }

    int row = 0;
    while(getline(in_s, line)){
        int col = 0;
        stringstream ss(line);
        while(getline(ss, temp, ',')){
            board[row][col].lane = 0;
            board[row][col].type = getTileType(temp[0]);
            board[row][col].color = STANDARD;
            col++;
        }
        row++;
    }
}

void printboard(Tile **board, int size){
    cout << "   ";
    for(int i = 0; i < 7; i++){
        cout << i + 1 << " ";
    }
    cout << endl << "  ****************";
    for(int i = 0; i < size; i++){
        cout << endl << i + 1 << " *";
        for(int j = 0; j < size; j++){
            cout << (char)board[i][j].type << " ";
        }
        cout << '*';
    }
    cout << endl << "  ****************" << endl;

}

void AiTurn(Tile **board, int size){
    int lane;
    char TileType;
    TILETYPE type;

    srand(time(NULL)); // To have a different seeding for each time the AI makes a move
    lane = rand() % 7; // To randamly choose which lane the AI is going to make their move in
    cout << "Computer has chosen lane " << lane + 1 << ": " << endl;

    srand(time(NULL));
    TileType = rand() % 3; // To randamly choose what type of piece the AI is going to use for their turn
    switch (TileType){
        case 0:
            cout << "The computer has chosen - tile type"<< endl;
            type = getTileType('-');
            break;

        case 1:
            cout << "The computer has chosen | tile type"<< endl;
            type = getTileType('|');
            break;

        case 3:
            cout << "The computer has chosen + tile type"<< endl;
            type = getTileType('+');
            break;
    };
    placeTile(board, size, type, (lane), 2);
}

void UserTurn(Tile **board, int size){
    printboard(board, size);
    int lane;
    char TileType;

    cout << "Please choose a lane: 1-7 or type -1 to quit: ";
    cin >> lane;

    cout << "Please choose a tile to add (examples: '-' or '|' or '+')";
    cin >> TileType;

    placeTile(board, size, getTileType(TileType), lane, 1);
}

void placeTile(Tile **board, int size1, TILETYPE tiletype, int lane, int user){
    int row1 = size1 - 1;
    if (user == 1){

            //Check the lane
            while(true){
                if(board[row1][lane-1].type == LOCKED){
                    cout << "A locked tile is preventing your tile from being added. I wouldn't do that agin." << endl;
                    break;
                 } else if(board[row1][lane-1].type == EMPTY){
                     board[row1][lane-1].type = tiletype;
                    board[row1][lane-1].color = RED;
                    break;
                }
                    row1--;
            }
    }
    else{

       while(true){
                if(board[row1][lane-1].type == LOCKED){
                    cout << "A locked tile is preventing your tile from being added. I wouldn't do that agin." << endl;
                    break;
                } 
                else if(board[row1][lane-1].type == EMPTY){
                     board[row1][lane-1].type = tiletype;
                    board[row1][lane-1].color = RED;
                    break;
                }
                row1--;
            }
    }

}

TILETYPE getTileType(char ch){
    switch (ch){
        case 'X':
            return LOCKED;
            break;

        case '-':
            return HORIZONTAL;
            break;

        case'+':
            return CROSS;
            break;

        case '|':
            return VERTICAL;
            break;

        case ' ':
            return EMPTY;
            break;
    }
    return EMPTY;
}

bool gameOver(Tile **board, int size){
    bool wins = false;

    //checking horizontally
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            if (board[i][j].type == HORIZONTAL || board[i][j].type == CROSS){
                if (j == size - 1){
                    cout << "COMPUTER WON TRY AGAIN NEXT TIME!!" << endl;
                    return true;
                }
                else
                    continue;

            }
            else
                break;
        }
    }

    //checking vertically
    for (int col = 0; col < size; col++){
        for (int row = 0; row < size; row++){
            if (board[row][col].type == VERTICAL || board[row][col].type == CROSS){
                if (row == size - 1) {
                    cout << "YOU WIN!!" << endl;
                    return true;
                }
                else
                    continue;

            }
            else
                break;
        }
    }


    return false;
}