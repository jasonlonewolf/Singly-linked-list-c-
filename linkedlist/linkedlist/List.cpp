#pragma once
#include "List.h"
using namespace std;
namespace likedlist {


	// 노드가 하나인 리스트를 생성
	List::List(int v)
	{
		head = tail = new Node(v, NULL);
		size = 1;
	}


	void List::insert(int value, int pinx)      
	{


		size++; //사이즈 1 증가
	}


	void List::pushHead(int value)
	{
		cout << "----------------in pushHead----------------" << endl;
		cout << "value:" << value << endl;

		Node *newNode = new Node(value, NULL);
		Node *temph = head;


		if (head == NULL) {
			head = newNode; 
			cout << "head:" << tail->value << " [1] " << tail->next << endl;

		}
		else {

			head = newNode;
			head->next = temph;

			cout << "temph:" << temph->value << " [2]  " << temph->next << endl;
			cout << "head:" << head->value << " [2] " << head->next << endl;
			cout << "tail:" << tail->value << " [2]  " << tail->next << endl;

		}

		size++;       
		cout << "----------------out pushFront----------------" << endl;

	}

	void List::pushTail(int value)
	{

		cout << "----------------in pushBack----------------" << endl;
		cout << "value:" << value << endl;
		Node *newNode = new Node(value, NULL);
		Node *temt = tail;

		if (head == NULL) {
			head = newNode;
			cout << "head:" << head->value << " [1] " << head->next << endl;
		}
		else {
			tail = newNode;
			temt->next = tail;
			cout << "temt:" << temt->value << " [2]  " << temt->next << endl;
			cout << "head:" << head->value << " [2]  " << head->next << endl;
			cout << "tail:" << tail->value << " [2] " << tail->next << endl;

		}

		size++;         //사이즈 1 증가.
		cout << "----------------out pushBack----------------" << endl;

	}




	void List::popHead()      //리스트의 맨 처음 노드를 제거
	{
		if (head != NULL)      // 리스트에 노드가 최소 하나 존재해야지 제거가 가능
		{
			Node *removal = head;   // 제거될 노드의 정보를 담을 임시노드 생성 (swap 구현할때 temp 변수와 같은 용도)
			head = head->next;   // 두번째 노드가 첫 노드가 된다.
			delete removal;      // 첫째 노드 제거
			size--;         // 사이즈 1 감소
		}
	}


	void List::popTail()  
	{
		if (head != NULL)      // 리스트에 노드가 최소 하나 존재해야지 제거가 가능
		{
			Node *removal = tail;   // 제거될 노드의 정보를 담을 임시노드 생성 (swap 구현할때 temp 변수와 같은 용도)
			Node *scan = this->head;
			Node *bf = scan;

			int cnt = 0;

			while (scan->next != NULL)
			{
				cout << "scan:" << scan->value << " [ ] " << scan->next << endl;
				bf = scan;
				scan = scan->next;

				cnt++;
			}
			bf->next = NULL;
			delete removal;
			tail = bf;

			size--;         // 사이즈 1 감소
		}
	}



	void List::print2()
	{
		cout << "----------------in print2----------------" << endl;

		Node *scan = this->head;

		for (Node* p = head; p; p = p->next) {
			std::cout << p->value << " " << &p->value << "-> " << p->next << '\n';
		}
		cout << "----------------out print2----------------" << endl;

	}



	void List::print()
	{
		cout << "----------------in print----------------" << endl;

		Node *scan = this->head;


		while (scan != NULL)
		{
			cout << scan->value << " " << &scan->value << " -> " << scan->next << endl;
			scan = scan->next;
		}
		cout << "----------------out print----------------" << endl;

	}


	List::~List()         // 소멸자
	{
		while (tail != NULL)
			popHead();
	}

}