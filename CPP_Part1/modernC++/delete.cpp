//#include <iostream>
//using namespace std;
//#include <vector>
//#include <list>
//#include <deque>
//#include <map>
//#include <set>
//
//// ������ ���� : delete (������ �Լ�)
//
//class Knight
//{
//public:
//
//public:
//	void operator=(const Knight& k) = delete;
//
//	
//
//	// ��� ���� �մ� â vs ���� ����
//	friend class Admin;
//
//private:
//	int _hp = 100;
//};
//
//class Admin
//{
//public:
//	void CopyKnight(const Knight& k)
//	{
//		Knight k1;
//		// ���� ����
//		k1 = k;
//	}
//};
//
//int main()
//{
//	Knight k1;
//
//	Knight k2;
//
//	// ���� ������
//	k1 = k2;
//
//	Admin admin;
//	admin.CopyKnight(k1);
//	
//	return 0;
//}