//
//#include <iostream>
//#include <map>
//#include <vector>
//
//using namespace std;
//
//// ������ ���� : auto
//
//
//class Knight
//{
//public:
//	int _hp;
//};
//
//template<typename T>
//void Print(T t)
//{
//	std::cout << t << endl;
//};
//
//int main()
//{
//	// Modern C++ (C++ 11)
//
//	/*int a = 3;
//	float b = 3.14f;
//	double c = 1.23;
//	Knight d = Knight();
//	const char* e = "mane";*/
//
//	auto a = 3;
//	auto b = 3.14f;
//	auto c = 1.23;
//	auto d = Knight();
//	auto e = "mane";
//
//	// auto �� ������ ��Ŀī��
//	// ���� ���� (type deduction)
//	// -> ���� �ǰ� �� ����� (�߷�)
//	// �߷� ��Ģ�� �������� �������� �� �ִ�.
//
//	// ����!
//	// �⺻ auto�� const, & ���� !!!!
//	int& reference = a;
//	const int cst = a;
//
//	auto test1 = reference;
//	auto test2 = cst;
//
//	Print(1);
//	Print("mane");
//
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//
//	for(vector<int>::size_type i = 0; i<v.size(); i++)
//	{
//		auto& data = v[i];
//
//		data = 100;
//	}
//
//	// �ƹ�ư ���� ������ Ÿ���� �ؾ������ auto�� ����� �ؿ�
//	// NO (�ְ�������)
//	// -> Ÿ������ ������� ��� OK
//	// -> �������� ���� �Ϲ������δ� ���δ°� ����.
//
//	map<int, int> m;
//	auto ok = m.insert(make_pair(1, 100));
//
//	for(auto it = v.begin(); it != v.end(); ++it)
//	{
//		cout << *it << endl;
//	}
//
//	return 0;
//}
