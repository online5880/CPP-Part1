#include <iostream>
#include <vector>
using namespace std;

// ������ ����  : ���� ����
int main()
{
	srand(static_cast<unsigned int>(time(nullptr)));

	vector<int>	v;

	for(int i = 0; i< 100; i++)
	{
		int num = rand() % 100;
		v.push_back(num);
	}

	// Q1) number��� ���ڰ� ���Ϳ� �� �ִ��� üũ�ϴ� ��� ( bool, ù ���� iterator)
	{
		const int number = 50;
		bool found = false;
		vector<int>::iterator it = v.end();
		// TODO
		for(int i = 0; i< v.size(); i++)
		{
			int data = v[i];
			if(data == number)
			{
				found = true;
				it = v.begin() + i;
				break;
			}
		}
	}

	// Q2) 11�� ������ ���ڰ� ���Ϳ� �ִ��� üũ�ϴ� ��� (bool, ù ���� iterator)
	{
		bool found = false;
		vector<int>::iterator it;

		// TODO
		for (unsigned int i = 0; i < v.size(); i++)
		{
			int data = v[i];
			if (data % 11 == 0)
			{
				found = true;
				it = v.begin() + i;
				break;
			}
		}
	}

	// Q3) Ȧ���� ������ ������? (count)
	{
		int count = 0;

		// TODO
		for (unsigned int i = 0; i < v.size(); i++)
		{
			int data = v[i];
			if (data % 2 != 0)
			{
				count++;
			}
		}
	}

	// Q4) ���Ϳ� �� �ִ� ��� ���ڵ鿡 3�� �����ּ���.!
	{
		// TODO
		for (unsigned int i = 0; i < v.size(); i++)
		{
			v[i] *= 3;
		}
	}

	return 0;
}