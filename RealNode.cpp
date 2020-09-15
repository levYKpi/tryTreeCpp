#include "RealNode.h"
#include "globals.h"
#include <string.h>


RealNode::RealNode(double k, char* ch)
{
	n = k;
	if (ch){
		symbol = new char[strlen(ch) + 1];
		strcpy(symbol, ch);
	}
}

void RealNode::print(std::ostream& o){
	if (symbol){
		o << symbol;
	}else{
		o << n;
	}
}

double RealNode::nodeValue(){
	if (!symbol){
		return n;
	}else{
		switch (*symbol){
			case 'x': return values[0];
			case 'y': return values[1];
			case 'z': return values[2];
		}
	}
}

