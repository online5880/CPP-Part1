//#include <iostream>
//using namespace std;
//#include <vector>
//#include <list>
//#include <deque>
//#include <map>
//#include <set>
//
//// ������ ���� : override, final
//
//class Creature
//{
//public:
//	virtual void Attack()
//	{
//		cout << "Player!" << endl;
//	}
//
//};
//
//class Player : public Creature
//{
//public:
//	virtual void Attack() override
//	{
//		cout << "Player!" << endl;
//	}
//};
//
//class Knight : public Player
//{
//public:
//	// ������ (override) : �Լ��� ������
//	virtual void Attack() override
//	{
//		cout << "Knight!" << endl;
//	}
//
//private:
//	int _stamina = 100;
//};
//
//int main()
//{
//	Player* player = new Knight();
//
//	player->Attack();
//	
//
//	return 0;
//}