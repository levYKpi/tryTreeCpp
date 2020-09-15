#include "Tree.h"
#include <iostream>

int main(int argc, char **argv)
{
//	char* names[] = {"one", "two"};
	Tree t = Tree(3, "-", Tree(Tree(8), "*", Tree(11.6)));
	std::cout << t << std::endl;
	std::cout << t.value() << std::endl;
}
