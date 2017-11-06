#pragma once
#include <iostream>

#include "Node.h"
using namespace std;

namespace likedlist {

class List
{
private:
	Node    *head;    // 리스트의 첫 노드를 가르킴
	Node	*tail;      // 리스트의 마지막 노드를 가르킴
	int     size;      // 노드의 갯수
public:
	List(int);            //생성자
	void pushTail(int);      //리스트의 맨 마지막에 노드를 삽입
	void pushHead(int value);
	void popHead();      //리스트의 맨 처음 노드를 제거
	void popTail();      //리스트의 맨 처음 노드를 제거
	void insert(int value, int inx);      //리스트의 중간에 노드를 삽입 (value의 크기 순서대로 삽입한다)
	void print();         //리스트의 내용물을 출력한다
	void print2();
	~List();            //소멸자
};
}