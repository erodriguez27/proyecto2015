#include <iostream>
#include <string>
#include <list>

using std::list

class Element{
	
	private:
		string tagName;
		list<string> attrList;
		string innerHTML;
	public:
		Element (string tag,list<string> attr){tagName=tag,attrlist=attr,innerHTML=NULL;}
		string tagName();
		list<string> attributeList();
		string innerHTML();
		void setTagName(string newtag);
		void setAttributeList(list<string> newattr);
		void setInnerHTML(string nHTML);
		Element& operator =(const Element &e);
		
};

string Element:: tagName(){
	
	return(tagName);
}

list<string> Element:: attributeList(){
	
	return(attrList);
}

string Element:: innerHTML(){
	
	return(innerHTML);
}

void Element:: setTagName(string newtag){
	
	tagName=newtag;
}

void Element:: setAttributeList(list<string> newattr){
	
	attrList=newattr;
}

void Element:: setInnerHTML(string nHTML){
	
	innerHTML=nHTML;
	
}

Element& Element:: operator =(const Element &e){
	
	if(this!=&e){
		this.tagName= e->tagName;
		this.attrList= e->attrList;
		this.innerHTML= e->innerHTML;
	}
	
}
