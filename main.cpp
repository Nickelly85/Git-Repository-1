#include <iostream>
#include <vector>
#include <random>

using namespace std;

#include "board.h"

int main() {
    board b;

    b.initializeBoard();
    b.printBoard();

    return 0;
}