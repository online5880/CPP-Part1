#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 오늘의 주제  : 연습 문제
int main()
{

	// 자료구조 (데이터를 저장하는 구조)
	// 알고리즘 (데이터를 어떻게 사용할 것인가?)

	// find
	// find_if
	// count
	// count_if
	// all_of
	// any_of
	// none_of
	// for_each
	// remove
	// remove_if

	srand(static_cast<unsigned int>(time(nullptr)));

	vector<int>	v;

	for(int i = 0; i< 100; i++)
	{
		int num = rand() % 100;
		v.push_back(num);
	}

	// Q1) number라는 숫자가 벡터에 들어가 있는지 체크하는 기능 ( bool, 첫 등장 iterator)
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

		vector<int>::iterator itFind = find(v.begin(), v.end(), number);
		if(itFind == v.end())
		{
			// 못찾음
			cout << "못찾았음" << endl;
		}
		else
		{
			cout << "찾았음" << endl;
		}
	}

	// Q2) 11로 나눠는 숫자가 벡터에 있는지 체크하는 기능 (bool, 첫 등장 iterator)
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

		struct CanDivideBy11
		{
			bool operator()(int n)
			{
				return (n % 11) == 0;
			}
		};

		vector<int>::iterator itFind = find_if(v.begin(), v.end(),CanDivideBy11());
		// [](int n) {return (n % 11) == 0; } -> 람다
		if (itFind == v.end())
		{
			// 못찾음
			cout << "못찾았음" << endl;
		}
		else
		{
			cout << "찾았음" << endl;
		}
		
	}

	// Q3) 홀수인 숫자의 개수는? (count)
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
		struct IsOdd
		{
			bool operator()(int n)
			{
				return (n % 2) != 0;
			}
		};

		int n = count_if(v.begin(), v.end(), IsOdd());

		// 모든 데이터가 홀수입니까?
		bool b1 = all_of(v.begin(), v.end(), IsOdd());

		// 홀수인 데이터가 하나라도 있습니까?
		bool b2 = any_of(v.begin(), v.end(), IsOdd());

		// 모든 데이터가 홀수가 아닙니까?
		bool b3 = none_of(v.begin(), v.end(), IsOdd());

		int a = 0;
	}

	// Q4) 벡터에 들어가 있는 모든 숫자들에 3을 곱해주세요.!
	{
		// TODO
		for (unsigned int i = 0; i < v.size(); i++)
		{
			v[i] *= 3;
		}
		struct MultiplyBy3
		{
			void operator()(int& n) const
			{
				n = n * 3;
			}
		};

		for_each(v.begin(), v.end(), MultiplyBy3());
	}

	// 홀수인 데이터를 일괄 삭제
	{
		v.clear();

		v.push_back(1);
		v.push_back(4);
		v.push_back(3);
		v.push_back(5);
		v.push_back(8);
		v.push_back(2);

		// 1 4 3 5 8 2
		// 4 8 2 5 8 2 
		//remove(v.begin(), v.end(), 4);

		struct IsOdd
		{
			bool operator()(int n)
			{
				return (n % 2) != 0;
			}
		};

		v.erase(remove_if(v.begin(), v.end(), IsOdd()), v.end());

		int a = 3;
	}

	return 0;
}