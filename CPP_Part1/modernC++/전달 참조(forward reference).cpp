//#include <set>
//#include <algorithm>
//#include <iostream>
//#include <stdio.h>
//
//using namespace std;
//
//// ������ ���� : ���� ���� (forward reference)
//
//class Knight
//{
//public:
//	Knight() { cout << "�⺻ ������" << endl; }
//	Knight(const Knight&) { cout << "���� ������" << endl; }
//	Knight(Knight&&) noexcept { cout << "�̵� ������" << endl; }
//};
//
//void Test_RValueRef(Knight&& k) // ������ ����
//{
//	
//}
//
//void Test_Copy(Knight k)
//{
//	
//}
//
//template<typename T>
//void Test_ForwardingRef(T&& param) // ���� ����
//{
//	
//	// �ް� ������� ����
//	// ������ ������� �̵�
//	Test_Copy(std::forward<T>(param));
//}
//
//int main()
//{
//	// ���� ���� (universal reference)
//	// ���� ���� (forwarding reference) C++ 17
//
//	// &&	&�� �� �� -> ������ ����
//
//	Knight k1;
//
//	Test_RValueRef(std::move(k1)); // rvalue_cast
//
//	//Test_ForwardingRef(k1);
//	//Test_ForwardingRef(std::move(k1));
//
//	auto&& k2 = k1;
//	auto&& k3 = move(k1);
//
//	// ������ : ���� ���� (type deduction)�� �Ͼ ��
//
//	// ���� ������ �����ϴ� ���
//	// -----------------------------------------------
//
//	Knight& K4 = k1; // �ް� ����
//	Knight&& k5 = move(k1); // ������ ����
//
//	
//	// ������ : �ް��� �ƴϴ�. = ���ϽĿ��� ����� ���  X
//	// ������ ���� : �������� ������ �� �ִ� ���� Ÿ��
//	//Test_RValueRef(std::move(k5));
//
//	Test_ForwardingRef(k1);
//	Test_ForwardingRef(move(k1));
//
//
//
//	return 0;
//}