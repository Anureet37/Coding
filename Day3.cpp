//Day 3
//Determine whether a doubly linked list is a palindrome. What if it’s singly linked?
//For example, 1 -> 4 -> 3 -> 4 -> 1 returns True while 1 -> 4 returns False.
//
//Answer: once travel in forward direction and then traverse in reverse direction
//for single linked list: reverse the linked list using pointers 
#include<iostream>
using namespace std;
class node
{
	public:
		int val;
		node * next;
		node * prev;
	node * insertAtfront(int value)
	{
		node * newnode = new node()	;
		newnode->val= value;
		newnode->next=NULL;
		newnode->prev=NULL;
		if(this!=NULL)
		{
			newnode->next=this;
			this->prev= newnode;
		}
		return newnode;
	};
	void print(){
		node *curr = this;
		while(curr->next!=NULL)
		{
			cout<<curr->val;
			curr = curr->next;
		}
		cout<<curr->val<<"\n";
	}
};
int main()
{
	node * A=NULL;
	A=A->insertAtfront(1);
	A=A->insertAtfront(4);
	A=A->insertAtfront(3);
//	A=A->insertAtfront(3);
//	A=A->insertAtfront(4);
	A=A->insertAtfront(1);
	A->print();
	node * back=A;
	node *front=A;
	while(back->next!=NULL)																//taking pointer at end
		back=back->next;
	bool flag=true;
	while((front!=back)&&(front->next!=back))
	{
		if(front->val!=back->val)
		 flag= false;
		front= front->next;
		back= back->prev;	
	}
	if(flag)
	cout<<"TRUE";
	else
	cout<<"FALSE";
	return 0;
}
