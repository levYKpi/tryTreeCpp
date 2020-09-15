#ifndef __BINARYNODE_H__
#define __BINARYNODE_H__
#include "UnaryNode.h"

class BinaryNode: public Node
{
	friend class Tree;
private:
	char* op;
	Tree left;
	Tree right;
	
	BinaryNode(char* a, Tree b, Tree c);
	~BinaryNode(){ delete op; }
	
	void print(std::ostream& o) { o << "(" << left << op << right << ")"; }
	double nodeValue();
};

#endif