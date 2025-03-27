#include<iostream>
using namespace std;

class Node{
public:
	int val;
	Node*next;
};

int main(){
	Node first,second,third,fourth,fifth;
	first.val=9;
	second.val=8;
	third.val=7;
	fourth.val=6;
	fifth.val=5;
	
	first.next=&second;
	second.next=&third;
	third.next=&fourth;
	fourth.next=&fifth;
	fifth.next=NULL;
	
//	printing linked list
	for(Node*temp=&first; temp!=NULL; temp=temp->next)
		cout<<temp->val<<' ';
	cout<<"\n";


//	deleting a node (3)
	second.next=&fourth;
	
	for(Node*temp=&first; temp!=NULL; temp=temp->next)
		cout<<temp->val<<' ';
	cout<<"\n";
	

//	adding a node between 1 and 2
	Node one_two;
	one_two.val=12;
	first.next=&one_two;
	one_two.next=&second;
	
	for(Node*temp=&first; temp!=NULL; temp=temp->next)
		cout<<temp->val<<' ';
	cout<<"\n";
	return 0;

}