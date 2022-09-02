#include <set>
#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

// 오늘의 주제 : 스마트 포인터 (smart pointer)

class Knight
{
public:
	Knight() { cout << "Knight 생성" << endl; }
	~Knight() { cout << "Knight 소멸" << endl; }

	void Attack()
	{
		if(_target.expired() == false)
		{
			const auto sptr = _target.lock();
			sptr->_hp -= _damage;
			cout << "HP : " << sptr->_hp << endl;
		}
	}

public:
	int _hp = 100;
	int _damage = 10;
	weak_ptr<Knight> _target;
};

class RefCountBlock
{
public:
	int _refCount = 1;
	int _weakCount = 1;
};

template<typename T>
class SharedPtr
{
public:
	SharedPtr() {}
	SharedPtr(T* ptr) : _ptr(ptr)
	{
		if(_ptr != nullptr)
		{
			_block = new RefCountBlock();
			cout << "RefCount : " << _block->_refCount << endl;
		}
	}

	SharedPtr(const SharedPtr& sptr) : _ptr(sptr), _block(sptr._block)
	{
		if(_ptr != nullptr)
		{
			_block->_refCount++;
			cout << "RefCount : " << _block->_refCount << endl;
		}
	}

	void operator=(const SharedPtr& sptr) 
	{
		_ptr = sptr._ptr;
		_block = sptr._block;

		if (_ptr != nullptr)
		{
			_block->_refCount++;
			cout << "RefCount : " << _block->_refCount << endl;
		}
	}

	~SharedPtr()
	{
		if(_ptr != nullptr)
		{
			_block->_refCount--;
			cout << "RefCount : " << _block->_refCount << endl;

			if(_block->_refCount == 0)
			{
				delete _ptr;
				//delete _block;
				cout << "Delete Data" << endl;
			}
		}
	}

public:
	T* _ptr = nullptr;
	RefCountBlock* _block = nullptr;
};


int main()
{
	// 스마트 포인터(smart pointer) : 포인터를 알맞는 정책에 따라 관리하는 객체 (포인터를 래핑해서 사용)
	// shared_ptr, weak_ptr, unique_ptr

	shared_ptr<Knight> k1 = make_shared<Knight>();

	// k1 [ 2]
	// k2 [ 1]
	{
		shared_ptr<Knight> k2 = make_shared<Knight>();
		k1->_target = k2;
		k2->_target = k1;
	}

	k1->Attack();

	unique_ptr<Knight> uptr = make_unique<Knight>();
	unique_ptr<Knight> uptr2 = std::move(uptr);

	return 0;
}