#ifndef __UNARYNODE_H__
#define __UNARYNODE_H__

#include "RealNode.h"
#include <ostream>

class UnaryNode: public Node
{
	friend class Tree;
private:
	char* op;
	Tree opnd;
	
	UnaryNode(char* a, Tree b);
	~UnaryNode(){ delete op; }
	
	void print(std::ostream& o){ o << "(" << op << opnd << ")"; }
	double nodeValue();
};

#endif