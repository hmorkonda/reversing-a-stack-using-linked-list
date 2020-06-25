#include <iostream>
#include <cassert>
#include <string>
using namespace std;

struct node {

	string name;
	string letter;
	int data;
	node *next;

};
class stack {
private:
	node *top;
public:
	stack() {
		top = nullptr;
	}
	~stack() {
		while (isNotEmpty()) {
			pop();
		}
	}

	node *returnTop() {
		return top;
	}

	bool isNotEmpty() {
		if (top != nullptr) {
			return true;
		}
		return false;
	}
	int pop() {
		node *temp = new node;
		temp = top;
		temp->data = top->data;
		top = top->next;
		return temp->data; //make sure 
		delete temp;
	}

	void push(int x) {
		node *temp = new node;
		temp->data = x;
		temp->next = top;
		top = temp;
	}

	void print() {
		node *cu = top;
		cout << "top";
		while (cu != nullptr) {
			int num = cu->data;
			//if (num ==2 || num == 3 || num == 5 || num == 7 || num == 11 || (num % 2 != 0 && num % 3 != 0 && num % 5 != 0 && num % 7 != 0 && num % 11 != 0)) {
			//	cout << num << " is prime, therefore in stack" << endl;

			//}
			if (num % 7 == 0) {
				pop();

			}
			//else {
			//	pop();
			//}
			cu = cu->next;
		}
	}

	void PrintRec(node *cu) {
		if (cu == nullptr) {
			return;
		}
		else {
			PrintRec(cu->next);
			cout << cu->data << endl;

		}
	}


};

int main() {

	stack object;
	//while (object.isNotEmpty()) {
		cout << "testing" << endl;
		object.push(1);
		object.push(3);
		object.push(7);
		object.push(35);
		object.push(8);
		object.push(10);
		object.push(21);
		object.push(2);
		object.push(3);
		object.push(6);

		//object.pop();
		object.PrintRec(object.returnTop());
		//object.print();
	//}
	system("pause");
	return 0;
}
