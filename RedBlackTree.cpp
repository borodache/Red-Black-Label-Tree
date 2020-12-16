#include "RedBlackTree.h"

RedBlackNode* RedBlackTree::getInstance()
{
	return (RedBlackNode*)(BinaryTree::pRoot);
}

RedBlackNode* RedBlackTree::insert(const int val)
{
	if (!BinaryTree::pRoot)
	{
		BinaryTree::pRoot = RedBlackNode::CreateLeaf(val, nullptr, Color::black);
		return RedBlackTree::getInstance();
	}

	RedBlackNode* pLeaf = RedBlackTree::getInstance()->insert(val);
	RedBlackTree::resetRoot(RedBlackTree::getInstance());
	return pLeaf;
}

RedBlackNode * RedBlackTree::remove(const int val)
{
	if (!RedBlackTree::getInstance())
	{
		return nullptr;
	}

	RedBlackNode* pOriginalRoot = RedBlackTree::getInstance();
	RedBlackNode* pParentOfRemoved = RedBlackTree::getInstance()->remove(val, RedBlackTree::getInstance()); // TODO: to check why it doesn't work with the &getInstance()
	RedBlackTree::resetRoot(pParentOfRemoved);
	return pParentOfRemoved;
}

void RedBlackTree::resetRoot(RedBlackNode* pFrom)
{
	// we can find the first ancestor of pFrom instead the first ancestor of the given root - for the case the root was deleted

	// in case we want to find it from pFrom
	if (!pFrom)
	{
		RedBlackTree::pRoot = nullptr;
		return;
	}

	while (pFrom->getPParent())
		pFrom = pFrom->getPParent();

	RedBlackTree::pRoot = pFrom;
}

void RedBlackTree::print(const bool onlyThis, const bool bPrintAddress)
{
	if (RedBlackTree::getInstance())
		RedBlackTree::getInstance()->print(onlyThis, bPrintAddress);
}
