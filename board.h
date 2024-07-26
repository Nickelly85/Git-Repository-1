class board {
public:
    const static int boardSize = 20;
    char boardTiles[boardSize][boardSize];

    void initializeBoard(vector<player> p) {
        for (int i = 0; i < boardSize; i++) {
                
            for (int j = 0; j < boardSize; j++) {
                boardTiles[i][j] = 'x';
            }
        }
        for (int i = 0; i < 2; i++) {
            boardTiles[p[i].playerX][p[i].playerY] = p[i].playerID;
        }
    }

    void printBoard() {
        for (int i = boardSize - 1; i >= 0; i--) {
            for (int j = boardSize - 1; j >= 0; j--) {
                std::cout << boardTiles[i][j];
            }
            std::cout << '\n';
        }
    }
};