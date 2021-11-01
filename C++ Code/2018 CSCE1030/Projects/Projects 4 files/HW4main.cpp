#include "hac0078func.cpp"

int main(){
   // BLUE = printf("\033[1;34m%c\033[0m\n", static_cast<char>(BLUE));
   // RED =  printf("\033[1;31m%c\033[0m\n", static_cast<char>(RED));

    const int SIZE = 7;

    Tile **tiles; // This is the pointer for the dynamice 2D array for the game board
    tiles = new Tile*[SIZE];
    for (int i = 0; i < SIZE; i++){
        tiles[i] = new Tile[SIZE];
    }

    intro();
    initalboard(tiles, SIZE);
    rules();

    while(!gameOver(tiles, SIZE)){
        UserTurn(tiles, SIZE);
        if(!gameOver(tiles, SIZE)){
          AiTurn(tiles, SIZE);
        }
    }
    printboard(tiles, SIZE);

    return 0;
}
