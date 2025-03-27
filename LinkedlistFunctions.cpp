#include<iostream>
using namespace std;

class Node{
	public:
		int val;
		Node *next; 
		Node (int val){
			this -> val = val;
			this -> next = NULL;
		}
		Node (int val, Node *next){
			this -> val = val;
			this -> next = next;
		}
};
class LinkedList{
		Node *start, *end;
	public:
		LinkedList(){	start = NULL;		}
		void addAtStart(int val){
			if (!start)	end = start = new Node(val, start);
			else 		start = new Node(val, start);
		}
		
		void addAtEnd(int val){
			if (!start)	end = start = new Node(val, start);
			else		end = end -> next = new Node(val);
		}
		
		void addInOrder(int val){
			if (!start || start -> val >= val)	end = start = new Node(val, start);
			else{
				Node *temp;
				for (temp = start ; temp -> next && temp -> next -> val < val ; temp = temp -> next);
				temp -> next = new Node(val, temp -> next);
				if (temp == end)	end = temp -> next;
			}
		}
		
		void show() const{
			for (Node *temp = start ; temp != NULL ; temp = temp -> next)
				cout << temp -> val << ' ';
			cout << '\n';
		}
};

int main(){
	LinkedList list;
	list.addAtStart(20);
	list.addAtStart(10);
	list.addAtEnd(30);
	list.show();
	list.addAtStart(40);
	list.addAtEnd(50);
	list.show();
	list.addAtStart(60);
	list.addAtEnd(70);
	list.show();
	list.addInOrder(20);
	list.addInOrder(10);
	list.addInOrder(30);
	list.addInOrder(40);
	list.show();
	cout << "\n";
	return 0;
}