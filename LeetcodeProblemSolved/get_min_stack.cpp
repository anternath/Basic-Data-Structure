#include <bits/stdc++.h> 
// Implement class for minStack.
class Node{
	public:
	int val;
	Node* next;
	Node(int val){
		this->val=val;
		this->next=NULL;
	}
};
class minStack
{
	// Write your code here.
	
	public:
		Node* head=NULL;
		Node* tail=NULL;
		stack<int>st;
		// Constructor
		minStack() 
		{ 
			// Write your code here.
		}
		
		// Function to add another element equal to num at the top of stack.
		void push(int num)
		{
			// Write your code here.
			if(st.empty()|| num<=st.top()){
				st.push(num);
			}
			Node* newnode= new Node(num);
			if(head==NULL){
				head=newnode;
				tail=head;
				return;
			}
			newnode->next= head;
			head=newnode;
		}
		
		// Function to remove the top element of the stack.
		int pop()
		{
			// Write your code here.
			if(head==NULL){
				return -1;
			}
			else{
				int top= head->val;
				if(!st.empty()&&top==st.top()){
					st.pop();
					
				}
				Node* tem= head;
				head=head->next;
				delete tem;
				return top;
			}
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			// Write your code here.
			if(head==NULL){
				return -1;
			}
			else{
				return head->val;
			}
		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			// Write your code here.
			if(!st.empty()){
				return st.top();
			}
			else{
				return -1;
			}
		}
};