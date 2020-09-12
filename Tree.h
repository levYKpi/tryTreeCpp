#ifndef __TREE_H__
#define __TREE_H__

#include <ostream>
#include "Node.h"


class Tree
{
	friend std::ostream& operator << (std::ostream&, const Tree&);
private:
	Node* nodePtr;
	
public:
	Tree(double n);
	Tree(char *ch);
	Tree(char*, Tree t);
	Tree(Tree left, char*, Tree right);
	Tree(const Tree& t);
	~Tree();
	double value();
	friend std::ostream& operator << (std::ostream& o, const Tree&);
	double operator () (double x = 0, double y = 0, double z = 0);
	void operator = (const Tree& t);

};

#endif