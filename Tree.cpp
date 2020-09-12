#include "Tree.h"
#include "RealNode.h"
#include "UnaryNode.h"
#include "BinaryNode.h"
#include "globals.h"

Tree::Tree(double n)
{
	nodePtr = new RealNode(n);
}

Tree::Tree(char *ch)
{
	nodePtr = new RealNode(0.0, ch);
}

Tree::Tree(char* op, Tree t)
{
	nodePtr = new UnaryNode(op, t);
}

Tree::Tree(Tree left, char* op, Tree right)
{
	nodePtr = new BinaryNode(op, left, right);
}

Tree::Tree(const Tree& t)
{
	nodePtr = t.nodePtr;
}

Tree::~Tree()
{
	if (nodePtr->use == 0) {
		delete nodePtr;
	}
}

void Tree::operator = (const Tree& t){
	++t.nodePtr->use;
	if (--nodePtr->use == 0){
		delete nodePtr;
	}
	nodePtr = t.nodePtr;
}

double Tree::value(){
	return nodePtr->nodeValue();
}

double Tree::operator () (double x, double y, double z){
	values[0] = x;
	values[1] = y;
	values[2] = z;
	return this->value();
}

std::ostream& operator << (std::ostream& o, const Tree& t){
	t.nodePtr->print(o);
	return o;
}
