#include <iostream>
#include <vector>
using namespace std;

// ������ ���� : �߰�ȣ �ʱ�ȭ { }

class Knight
{
public:

	Knight(initializer_list<int> li)
	{
		cout << "Knight(initializer_list)" << endl;
	};

	Knight()
	{
		
	}
};

int main()
{
	int a = 0;
	int b(0);
	int c{ 0 };

	Knight k1;
	Knight k2 = k1; // ���� ������(���� ������ X)

	Knight k3{ k2 };

	vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);

	vector<int> v2(10, 1);
	int arr[] = { 1,2,3,4 };

	// �߰�ȣ �ʱ�ȭ
	// 1) vector �� container�� �� ��︰��.
	vector<int> v3{ 1,2,3,4 };

	// 2) ��� ��ȯ ����
	int x = 0;
	// double y{x};

	// 3) Bonus
	Knight k4{};

	Knight k5{ 1,2,3,4,5 };

	// ��ȣ �ʱ�ȭ ()�� �⺻���� ����.
	// - �������� C++ (�źΰ��� ����)
	// - vector �� Ư���� ���̽��� ���ؼ��� { } ���

	// �߰�ȣ �ʱ�ȭ { }�� �⺻���� ����.
	// - �ʱ�ȭ ������ ��ġȭ
	// - ��� ��ȯ ����

	return 0;
}