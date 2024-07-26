#include "player.h"
#include "board.h"

class game {
public:
	vector<player> p;
	board b;

	void initializeGame() {
		player temp;
		
		for(int i = 0; i < 2; i++) {
			temp.initializePlayer(i+1);
			p.push_back(temp);
		}

		b.initializeBoard(p);
		b.printBoard();
	}
};
