#include <iostream>
using namespace std;

class Node{
	public:
//data
	int data;
//pointer to a next node
	Node * next;
//construct that make ptr to NULL
	Node(){
	next = NULL;	  }
};

class Linkedlist{
//Head and circles are linked together
	public:
//Head-> Node type ptr
	Node * head;
	Node * tail;
//Construct
	Linkedlist(){
		head = NULL;
		tail = NULL;
}

//Circles linked inside each other

//Rules how circles will be linked

//Insert
	void insert(int value){
	//1st node is added
	Node * temp = new Node;
	//Insert data in Node
	temp->data = value;
	//1st Node only
	if(head == NULL){  
	head = temp;
	}
	//any another Node only
	else{
	tail->next = temp;
	}
	tail = temp;
     }
	// for inserting a value at a point
	void insertAt(int pos, int value){
	//reach the place before the pos
	Node * current = head;
	int i =1;
	while(i < pos) {
	  i++;
	  current = current->next;
	}
    }

//Deletion
	//delete of last element
	void delet(){
	//store the tail in the temp
	Node*temp = tail;
	
	//before tail has  to point the NULL
	Node*current = head;
	while(current-> next != tail){
		current = current->next;}
	}

	//for deleting an element at a position
	void deleteAt(int pos, int value){
	//reach the place before the pos
	Node * current = head;
	int i =1;
	while(i < pos) {
	i++;
	current = current->next;
  	 }
	}
	//counting the number of Linklist
	int count(int search_for)
	{
		Node * current = head;
		int count = 0;
		while (current != NULL)
		{
			count++;
			current = current->next;
		}
	}
	
	//Display
	void display(){
	Node * current = head;
	while(current != NULL){
	cout << current -> data << "->";
	current = current->next;}
        cout <<endl;
        }
};


int main(){
	Linkedlist l1;
	l1.insert(1);
	l1.insert(2);
	l1.insert(3);
	l1.insert(4);
	l1.display();
return 0;

}
