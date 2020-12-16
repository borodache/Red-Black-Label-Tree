#include <stdio.h>
#include <iostream>
#include <string.h>
#include "BinaryNode.h"
#include "RedBlackNode.h"
#include "RedBlackTree.h"
#include "BinaryTree.h"
#include "TestCasesForRedBlackTree.h"

using namespace std;

int main()
{
	TestRemoveCase2Case4();

	/*
	cout << "Check binary tree remove" << endl;

	BinaryTree::insert(5);
	BinaryTree::insert(0);
	BinaryTree::insert(20);
	BinaryTree::insert(30);
	BinaryTree::insert(40);
	BinaryTree::insert(10);
	BinaryTree::insert(8);
	BinaryTree::insert(9);
	BinaryTree::getInstance()->print();
	BinaryTree::remove(5);
	BinaryTree::getInstance()->print();*/

	/*RedBlackTree::remove(0);
	RedBlackTree::print();
	RedBlackTree::insert(0);
	RedBlackTree::print();
	RedBlackTree::remove(0);
	cout << "print empty tree after remove" << endl;
	RedBlackTree::print();*/

	char cWait;
	cin >> cWait;
	return 0;
}
