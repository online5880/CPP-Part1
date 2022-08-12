#include <iostream>
#include <vector>
using namespace std;

class  Player
{
public:
	Player() : _playerId(0) {}
	Player(int playerId) : _playerId(playerId) {}

public:
	int _playerId;
};

int main()
{

	// 연관 컨테이너

	vector<Player*> v;

	return 0;
}