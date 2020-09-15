#ifndef __REALNODE_H__
#define __REALNODE_H__

#include "Tree.h"

class RealNode: public Node
{
	friend class Tree;
private:
	double n;
	char* symbol;
	
	RealNode(double k, char* ch = 0);
	~RealNode() { delete symbol; }
	
	double nodeValue();
	void print(std::ostream& o);
};

#endif