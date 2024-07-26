class player {
public:
    char playerID;
    int playerHealth = 20;
    int playerX;
    int playerY;

    int generateNum() {
        std::random_device dev;
        std::mt19937 rng(dev());
        std::uniform_int_distribution<std::mt19937::result_type> dist6(0, 19);

        return dist6(rng);
    }
};