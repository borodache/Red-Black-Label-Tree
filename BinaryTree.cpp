#include "BinaryTree.h"

BinaryNode* BinaryTree::pRoot = nullptr;

BinaryNode * BinaryTree::getInstance()
{
	return BinaryTree::pRoot;
}

BinaryNode * BinaryTree::search(const int val)
{
	BinaryNode* pParent;
	return getInstance()->search(val, &pParent);
}

BinaryNode * BinaryTree::insert(const int val)
{
	if (!BinaryTree::getInstance())
	{
		BinaryTree::pRoot = new BinaryNode(val);
		return BinaryTree::pRoot;
	}

	BinaryNode* pOriginalRoot = BinaryTree::pRoot;
	BinaryNode* pLeaf = BinaryTree::getInstance()->insert(val, &pRoot);
	BinaryTree::pRoot = pOriginalRoot; // TODO: setInstance
	return pLeaf;
}

BinaryNode * BinaryTree::remove(const int val)
{
	if (!BinaryTree::getInstance())
	{
		return nullptr;
	}

	BinaryNode* pOriginalRoot = BinaryTree::getInstance();
	BinaryNode* pParentOfRemoved = BinaryTree::getInstance()->remove(val, &(BinaryTree::pRoot)); // TODO: to check why it doesn't work with the &getInstance()
	BinaryTree::pRoot = pOriginalRoot;
	return pParentOfRemoved;
}

void BinaryTree::print(const bool onlyThis, const bool bPrintAddress)
{
	if (BinaryTree::getInstance())
		BinaryTree::getInstance()->print(onlyThis, bPrintAddress);
}
