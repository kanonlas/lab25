#include<iostream>
using namespace std;


class Node{
    public:
    	int data;
    	Node *next;
    	~Node();
};

class List{
	public:
		Node *root;
		int size;
		void show();
		void append(int);
		void insert(int,int);
		void remove(int);
};

Node::~Node(){
    cout << data << " was deleted.\n";
}

void List::insert(int d,int idx){	
	Node *n = new Node;
	n->data = d;
	
	if(idx == 0){
		n->next = root;
		root = n;
		return;
	}
	Node *current = root;
	for(int i = 0; i < idx-1;i++){
		current = current->next;
	}
	n->next = current->next;
	current->next = n;		
}

void List::show(){
	Node *current = root;
	cout << current->data << " ";	
	while(current->next){
		current = current->next;
		cout << current->data << " ";
	}	
}

void List::append(int d){	
	Node *n = new Node;
	n->data = d; n->next = NULL;
	if(root == NULL) root = n;
	else{
		Node *current = root;
		while(current->next){
			current = current->next;
		}
		current->next = n;
	}
	size++;
}

void List::remove(int p){
	size--;
	Node *current = root;
	Node p = *current->next;
	Node q = *current->next->next;
	
	for(int i = 0; i < size; i++){
         current = current->next;
  } 
    Node q = p; 
  	Node p = *current;
	


	/*
	Node *n = new Node;
	n->data = d;
	n->next = NULL;
	while(n->next != NULL){
	 n->next = root; // การเเทรกค่าไว้ที่ข้างหน้า 
	}
	if(root != NULL){
		Node *current = root; //เริ่มค่าที่รูทเลย
		while(current->next){
			current = current->next;
		}
		current->next = n;
	}
	delete n;
	*/
}
//Write List::remove() here
