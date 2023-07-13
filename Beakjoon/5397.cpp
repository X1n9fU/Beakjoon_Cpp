#include <iostream>
using namespace std;

class Node {
public:
	char data;
	Node* llink;
	Node* rlink;
};

void init(Node* prehead, Node* lasthead) {
	prehead->rlink = lasthead;
	prehead->llink = lasthead;
	lasthead->rlink = prehead;
	lasthead->llink = prehead;
}

void print_dlist(Node* phead) {
	Node* p;
	for (p = phead->rlink; p != phead; p = p->rlink) {
		cout << p->data;
	}
	cout << '\n';
}

Node* dinsert(Node* cursor, Node *phead, char data) {
	Node* newnode = new Node();
	newnode->data = data;
	if (cursor == phead) {
		newnode->llink = phead;
		newnode->rlink = phead->rlink;
		phead->rlink->llink = newnode;
		phead->rlink = newnode;
		return newnode;
	}
	newnode->llink = cursor;
	newnode->rlink = cursor->rlink;
	cursor->rlink->llink = newnode;
	cursor->rlink = newnode;
	return newnode;
}

Node* remove(Node* cursor, Node* phead) {
	if (cursor == phead) {
		return phead;
	}
	Node* removed = cursor;
	removed->llink->rlink = removed->rlink;
	removed->rlink->llink = removed->llink;
	cursor = removed->llink;
	free(removed);
	return cursor;
}

Node* leftmove(Node* cursor, Node* lasthead) {
	if (cursor->llink == lasthead) return cursor;
	cursor = cursor->llink;
}

Node* rightmove(Node* cursor, Node* lasthead) {
	if (cursor->rlink == lasthead) return cursor;
	cursor = cursor->rlink;
}

	int main() {
	int num;
	cin >> num;
	
	for (int i = 0; i < num; i++) {
		Node* prehead = new Node();
		Node* lasthead = new Node();
		init(prehead, lasthead);
		Node* cursor = prehead;

		string command;
		cin >> command;
		for (int j = 0; j < command.size(); j++) {
			switch(command[j]) {
			case'-':
				cursor = remove(cursor, prehead);
				break;
			case '<':
				cursor = leftmove(cursor, lasthead);
				break;
			case '>':
				cursor = rightmove(cursor, lasthead);
				break;
			default:
				cursor = dinsert(cursor, prehead, command[j]);
				break;
			}
		}
		print_dlist(prehead);
	}
}