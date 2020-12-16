#pragma once
#include "BinaryNode.h"

class BinaryTree
{
private:
	BinaryTree();
protected:
	static BinaryNode* pRoot;
public:
	static BinaryNode* getInstance();
	static BinaryNode* search(const int val);
	static BinaryNode* insert(const int val);
	static BinaryNode* remove(const int val);
	static void print(const bool onlyThis = false, const bool bPrintAddress = false);
};
