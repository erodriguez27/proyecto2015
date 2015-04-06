#include "Element.hpp"

class Node{
	
	private:
		Element e;
		Node *firstChild, *nextSibling;
		
	public:
		Node (Element n, Node *fC, Node *nS){e=n, firstChild=fC, nextSibling=nS;}
		Element element();
		Node* firstChild()
		Node* nextSibling();
		void setElement(Element n);
		void setFirstChild(Node *fC);
		void setNextSibling(Node *nS);
		
};

Element Node:: element(){
	
	return(e);
}

Node* Node:: firstChild(){
	
	return(firstChild);
	
}

Node* Node:: nextSibling(){
	
	return(nextSibling);
}

void Node:: setElement(Element n){
	
	e=n;
	
}

void Node:: setFirstChild(Node *fC){
	
	firstChild=fC;
	
}

void Node:: setNextSibling(Node *nS){
	
	nextSibling=nS;
	
}
