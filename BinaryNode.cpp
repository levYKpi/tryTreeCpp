#include "BinaryNode.h"
#include <string.h>

#define LARGE 9999999999999999999999.0

BinaryNode::BinaryNode(char* a, Tree b, Tree c): left(b), right(c)
{
	op = new char[strlen(a) +1];
	strcpy(op, a);
}

double BinaryNode::nodeValue(){
	double num, den;
	
	switch(*op){
		case '+': return left.value() + right.value();
		case '-': return left.value() - right.value();
		case '/': num = left.value();
				  den = right.value();
				  if (den != 0.0){
					  return num/den;  
				  }else{
					  if (num > 0)
						  return LARGE;
					  else
						  return -LARGE;
				  }
		case '*': return left.value() * right.value();
	}
}