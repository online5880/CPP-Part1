//#include <iostream>
//using namespace std;
//
//// ������ ���� : nullptr
//
//class Knight
//{
//public:
//	void Test()
//	{
//		
//	}
//};
//
//Knight* FindKnight()
//{
//	return nullptr;
//}
//
//void Test(int a)
//{
//	cout << "Test(int)" << endl;
//}
//
//void Test(void* ptr)
//{
//	cout << "Test(*)" << endl;
//}
//
//// NullPtr ����
//const
//class //NullPtr
//{
//public:
//	// �� � Ÿ���� �����Ϳ͵� ġȯ ����
//	template<typename T>
//	operator T* () const
//	{
//		return 0;
//	}
//
//	// �� � Ÿ���� ��� �����Ϳ͵� ġȯ�� ����
//	template<typename C, typename T>
//	operator T C::* () const
//	{
//		return 0;
//	}
//
//private:
//	void operator&() const; // �ּҰ� &�� ���´�.
//} _nullptr;
//
//int main()
//{
//	int* ptr = NULL; // 0 NULL
//	// 0 NULL
//
//	// 1) ���۵�
//	Test(0);
//	Test(NULL);
//	Test(_nullptr);
//
//	// 2) ������
//	auto knight = FindKnight();
//	if(knight == _nullptr)
//	{
//		
//	}
//
//	void(Knight:: * memfunc)();
//	memfunc = &Knight::Test;
//
//	if(memfunc == _nullptr)
//	{
//		
//	}
//
//	//nullptr_t whoami = nullptr;
//
//	return 0;
//}