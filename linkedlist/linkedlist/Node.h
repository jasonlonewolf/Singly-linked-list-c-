#pragma once

#include <iostream>

using namespace std;

namespace likedlist {
	class Node
	{
		friend class List;      // List클래스는 Node클래스의 private에 접근할 수 있음
	private:
		int     value;      // 밸류 저장용
		Node   *next;      // Node를 가르킬 수 있는 포인터(화살표)
		Node(int v, Node *n);

	};

	
}