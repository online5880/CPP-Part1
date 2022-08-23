//#include <iostream>
//using namespace std;
//
//// 오늘의 주재 : nullptr
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
//// NullPtr 구현
//const
//class //NullPtr
//{
//public:
//	// 그 어떤 타입의 포인터와도 치환 가능
//	template<typename T>
//	operator T* () const
//	{
//		return 0;
//	}
//
//	// 그 어떤 타입의 멤버 포인터와도 치환이 가능
//	template<typename C, typename T>
//	operator T C::* () const
//	{
//		return 0;
//	}
//
//private:
//	void operator&() const; // 주소값 &을 막는다.
//} _nullptr;
//
//int main()
//{
//	int* ptr = NULL; // 0 NULL
//	// 0 NULL
//
//	// 1) 오작동
//	Test(0);
//	Test(NULL);
//	Test(_nullptr);
//
//	// 2) 가독성
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