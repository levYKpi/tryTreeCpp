#ifndef __NODE_H__
#define __NODE_H__

#include <ostream>


class Node
{
	friend class Tree;
public:
	virtual void print(std::ostream& o){}
private:
	int use;//number of obj-s,that refer to the node
protected:
	Node(): use(1){}
	virtual double nodeValue(){ return 0.0; }
	virtual ~Node(){}
};

#endif