class player {
public:
    char playerID;
    int playerHealth = 20;
    int playerX;
    int playerY;

    player() {
        playerX = 0;
        playerY = 0;
        playerID = 'o';
    }

    int generateNum() {
        std::random_device dev;
        std::mt19937 rng(dev());
        std::uniform_int_distribution<std::mt19937::result_type> dist6(0, 19);

        return dist6(rng);
    }

    void initializePlayer(int value) {
        playerX = generateNum();
        playerY = generateNum();
        playerID = char(value);
    }


};