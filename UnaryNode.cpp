#include "UnaryNode.h"
#include <string.h>

UnaryNode::UnaryNode(char* a, Tree b): opnd(b)
{
	op = new char[strlen(a) + 1];
	strcpy(op, a);
}

double UnaryNode::nodeValue(){
	if (*op == '-'){
		return -opnd.value();
	}else if (*op == '+'){
		return opnd.value();
	}
}

