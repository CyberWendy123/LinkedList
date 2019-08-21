/*
* Node.h
*	by Wendy Xiao 
*	Aug 18, 2019 
*
*/ 
#ifndef NODE_H_ 
#define NODE_H_ 

#include <iostream> 
#include <string> 
using namespace std; 

class Node{
	public: 
		Node(); 
		Node(const string&); //with string 
		//Node(const Node&); //with node 
		//Node(const string&, Node*); //with both 
		~Node(); 

		void setData(const string); 
		string getData(); 
		void setNext(Node* newNext); 
		Node* getNext(); 

	private: 
		string data; 
		Node *next; 

}; 

#endif 