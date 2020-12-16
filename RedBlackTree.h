#pragma once
#include "RedBlackNode.h"
#include "BinaryTree.h"

class RedBlackTree : public BinaryTree
{
private:
	RedBlackTree();
public:
	static RedBlackNode* getInstance();
	static RedBlackNode* insert(const int val);
	static RedBlackNode* remove(const int val);
	static void resetRoot(RedBlackNode* pFrom);
	static void print(const bool onlyThis = false, const bool bPrintAddress = false);
};
