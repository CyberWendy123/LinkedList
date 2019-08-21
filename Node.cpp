/*
* Node.cpp 
*	by Wendy Xiao 
*	Aug 18, 2019 
*/ 
#include "Node.h"
#include <iostream> 

Node::Node(){ //default constructor 
	next = NULL;  
}
Node::Node(const string& dataArg){
	next = NULL; 
	data = dataArg; 
}
Node::~Node(){ //deconstructor 
}
//=====================================================
//		functions of this class 
//=====================================================
void Node::setData(const string dataArg){
	data = dataArg; 
}
string Node::getData(){
	return company; 
}
void Node::setNext(Node* newNext){
	next = newNext; 
}
Node* Node::getNext(){
	return next; 
}
/*Node& Node::operator=(const Node& nodeArg){
	if(this != &nodeArg){

	}
	return *this
}*/ 