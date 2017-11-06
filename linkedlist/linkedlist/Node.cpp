#pragma once
#include "node.h"

using namespace std;
namespace likedlist {

	Node::Node(int v, Node *n) {
		this->value = v;
		this->next = n;
	}

}