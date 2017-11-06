#include <iostream>
#include "List.h"
#include "Node.h"

using namespace std;
using namespace likedlist;


void main(){
	List *li = new List(1);
	li->print();
	cout << "---------------" << '\n';
	li->pushHead(2);
	li->pushTail(6);
	li->print();
	cout << "---------------" << '\n';
	li->pushHead(3);
	li->pushTail(7);
	li->print2();
	cout << "---------------" << '\n';
	li->popHead();
	li->print2();
	cout << "---------------" << '\n';

	li->popTail();
	li->print2();
	cout << "---------------" << '\n';


}