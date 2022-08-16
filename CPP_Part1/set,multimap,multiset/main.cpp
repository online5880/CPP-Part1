//#include <iostream>
//#include <map>
//#include <set>
//using namespace std;
//
//// 오늘의 주제 : set, multimap, multiset
//
//int main()
//{
//	// (Key = Value)
//	set<int> s;
//
//	// 넣고
//	// 빼고
//	// 찾고
//	// 순회하고
//
//	// 추가
//	s.insert(10);
//	s.insert(20);
//	s.insert(30);
//	s.insert(40);
//	s.insert(50);
//	s.insert(60);
//	s.insert(70);
//	s.insert(80);
//
//	// 삭제
//	s.erase(40);
//
//	// 검색
//	set<int>::iterator findIt = s.find(50);
//	if(findIt == s.end())
//	{
//		cout << "못 찾음" << endl;
//	}
//	else
//	{
//		cout << "찾음" << endl;
//	}
//
//	// s[10] = 10; X -> Key == Value 이기때문에
//
//	// 순회
//	for(set<int>::iterator it = s.begin(); it != s.end(); ++it)
//	{
//		cout << (*it) << endl;
//	}
//
//	cout << "----------------------------------" << endl;
//
//	multimap<int, int> mm;
//
//	// 추가
//	mm.insert(make_pair(1, 100));
//	mm.insert(make_pair(1, 200));
//	mm.insert(make_pair(1, 300));
//	mm.insert(make_pair(2, 400));
//	mm.insert(make_pair(2, 500));
//
//	// mm[1] = 500;
//
//	// 삭제
//	//unsigned int count = mm.erase(1);
//
//	// 검색
//	/*multimap<int,int>::iterator itFind = mm.find(1);
//	if(itFind != mm.end())
//	{
//		mm.erase(itFind);
//	}*/
//
//	pair<multimap<int, int>::iterator, multimap<int, int>::iterator> itPair;
//	itPair = mm.equal_range(1);
//
//	multimap<int, int>::iterator itBegin = mm.lower_bound(1);
//	multimap<int, int>::iterator itEnd = mm.upper_bound(1);
//
//	for(multimap<int,int>::iterator it = itBegin; it != itEnd; ++it)
//	{
//		cout << it->first << " " << it->second << endl;
//	}
//
//	cout << "----------------------------------" << endl;
//
//	multiset<int> ms;
//
//	// 추가
//	ms.insert(100);
//	ms.insert(100);
//	ms.insert(100);
//	ms.insert(200);
//	ms.insert(200);
//
//	// 검색
//	multiset<int>::iterator findmsIt = ms.find(100);
//	pair<multiset<int, int>::iterator, multiset<int, int>::iterator> itPair2;
//	itPair2 = ms.equal_range(100);
//
//	for(multiset<int>::iterator it = itPair2.first; it != itPair2.second; ++it)
//	{
//		cout << *it << endl;
//	}
//
//	multiset<int>::iterator itBegin2 = ms.lower_bound(100);
//	multiset<int>::iterator itEnd2 = ms.upper_bound(100);
//
//	for (multiset<int>::iterator it = itBegin2; it != itEnd2; ++it)
//	{
//		cout << *it << endl;
//	}
//
//	return 0;
//}
