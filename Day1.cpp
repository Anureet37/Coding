//Day 1
//Given two singly linked lists that intersect at some point, find the intersecting node. The lists are non-cyclical.
//For example, given A = 3 -> 7 -> 8 -> 10 and B = 99 -> 1 -> 8 -> 10, return the node with value 8.
//In this example, assume nodes with the same value are the exact same node objects.
//Do this in O(M + N) time (where M and N are the lengths of the lists) and constant space.

//Answer getting to equal length of the linked list
#include <iostream>
class node {
	public:
		int val; 
		node *next;
	int getlen()
	{
		node * pointer = this;
		int len=0;
		while(pointer->next!=NULL)
		{
			len++;
			pointer=pointer->next;
		}	
		return len;
	};
	void print()
	{
		node * pointer = this;
		while(pointer->next!=NULL)
		{
			std::cout<<pointer->val<<" ";
			pointer=pointer->next;
		}	
		std::cout<<pointer->val<<" ";
		std::cout<<"\n";
	}
	node * insertAtFront(int value){	
		node * newnode = new node();
		newnode->val=value;
		if(this==NULL)
			{
				newnode->next=NULL;
			}
		else
			newnode->next=this;
		return newnode;
	};
};
	
node * commonNode(node **A, node ** B){
	node * pointerA=*A;
	node * pointerB=*B;
	int lenA=pointerA->getlen();
	int lenB=pointerB->getlen();
	int skip=0;
	if(lenA>lenB)
	{
		skip=lenB;
		for(int i=0; i<lenA-lenB;i++)
			pointerA=pointerA->next;
	}
	else
	{
		skip=lenA;
		for(int i=0; i<lenB-lenA;i++)
			pointerB=pointerB->next;
	}
	while(skip>=0)
	{
		skip--;
		if(pointerA->val==pointerB->val)
			break;	
		pointerA=pointerA->next;
		pointerB=pointerB->next;	
	}
	return pointerA;
};
int main(){
	node * A=NULL;
	node * B=NULL;
	A=A->insertAtFront(10);
	A=A->insertAtFront(8);
	B=A;
	A=A->insertAtFront(7);
	A=A->insertAtFront(3);
	B=B->insertAtFront(1);
	B=B->insertAtFront(99);
	std::cout<<"A : ";
	A->print();
	std::cout<<"B : ";
	B->print();
	node * common= commonNode(&A,&B);	
	if(common==NULL)
	std::cout<<"No intersection";
	else
	std::cout<<common->val;
	return 0;
};
