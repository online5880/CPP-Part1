#include <iostream>
using namespace std;

#include <set>
#include <algorithm>

// ������ ���� : enum class

// unscoped enum(��������)
enum PlayerTpye : char
{
	PT_None,
	PT_Knight,
	PT_Archer,
	PT_Mage
};

enum  MonsterType
{
	MT_None,
};

enum class ObjectType
{
	Player,
	Monster,
	Projectile
};

enum class ObjectType2
{
	Player,
	Monster,
	Projectile
};


int main()
{
	// enum class (scoped enum)
	// 1) �̸����� ���� (scoped)
	// 2) �Ϲ����� ��ȯ ����

	double value = static_cast<double>(ObjectType::Player);

	int choice;
	cin >> choice;

	if(choice == static_cast<int>(ObjectType::Monster))
	{
		
	}

	unsigned int bitFlag;
	bitFlag = (1 << static_cast<int>(ObjectType::Player));

	return 0;
}