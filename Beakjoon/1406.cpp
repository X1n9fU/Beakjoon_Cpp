#include <iostream>
#include <string>
using namespace std;

class Node {
public:
	char data;
	Node* llink;
	Node* rlink;
};
// L 포인터를 왼쪽으로 옮김
// D 포인터를 오른쪽으로 옮김
// B 왼쪽 Node 삭제
// P $ 왼쪽에 Node 추가

Node* init(Node* temp) {
	temp = new Node();
	temp->llink = NULL;
	temp->rlink = NULL;
	temp->data = 0;
	return temp;
}

Node* leftcursor(Node* cursor) {
	if (cursor->llink == NULL) {
		return cursor;
	}
	cursor = cursor->llink;
}

Node* rightcursor(Node* cursor) {
	if (cursor->rlink == NULL) return cursor;
	
	cursor = cursor->rlink;
}

Node* put(Node* cursor, int data) {
	if (cursor == NULL) {
		cursor = init(cursor);
		cursor->data = data;
		return cursor;

	}
	Node* newnode = new Node();
	newnode->data = data;
	newnode->llink = cursor;
	newnode->rlink = cursor->rlink;
	cursor->rlink = newnode;
	return newnode;
}

Node* insert(Node* cursor, int data) {
	if (cursor == NULL) {
		cursor = init(cursor);
		cursor->data = data;
		return cursor;
		
	}
	Node* newnode = new Node();
	newnode->data = data;
	newnode->llink = cursor;
	newnode->rlink = cursor->rlink;
	newnode->llink->rlink = newnode;
	if (newnode->rlink !=NULL) newnode->rlink->llink = newnode;
	return newnode;
}

Node* remove(Node* cursor) {
	if (cursor->llink == NULL) {
		return cursor;
	}
	else if (cursor->rlink == NULL) {
		cursor = cursor->llink;
	}
	Node* removed = cursor;
	removed->llink->rlink = cursor->rlink;
	if (cursor->rlink !=NULL) cursor->rlink->llink = removed->llink;
	cursor = removed->llink;
	free(removed);
	return cursor;

}

void print_list(Node* cursor) {
	Node* current = cursor;
	while (current->llink != NULL) {
		current = current->llink;
	}
	while (current->rlink != NULL) {
		cout << current->data;
		current = current->rlink;
	}
	cout << current->data <<'\n';

}


int main() {
	string s;
	int num;
	Node* cursor = new Node();

	cin >> s >> num;

	for (int i = 0; i < s.size(); i++) {
		cursor = put(cursor, s[i]);
	}
	cursor = put(cursor, 0);

	char command;
	for (int i = 0; i < num; i++) {
		cin >> command;
		switch (command) {
		case 'P':
			char word;
			cin >> word;
			cursor = insert(cursor, word);
			break;
		case 'L':
			cursor = leftcursor(cursor);
			break;
		case 'B':
			cursor = remove(cursor);
			break;
		case 'D':
			cursor = rightcursor(cursor);
			break;
		}
	}
	print_list(cursor);


}