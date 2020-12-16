#include <iostream>
#include "RedBlackTree.h"
#include "TestCasesForRedBlackTree.h"

using namespace std;

void TestRemoveOneChild()
{
	cout << "Check remove black node with red children" << endl;

	RedBlackTree::insert(0);
	RedBlackTree::insert(20);
	RedBlackTree::insert(30);
	RedBlackTree::insert(50);
	RedBlackTree::insert(40);
	RedBlackTree::insert(100);
	RedBlackTree::insert(110);
	RedBlackTree::insert(120);
	RedBlackTree::insert(130);
	RedBlackTree::insert(125);
	RedBlackTree::remove(130);
	RedBlackTree::print();
}

void TestRemoveCase1()
{
	RedBlackTree::insert(0);
	RedBlackTree::remove(0);
	cout << "Print (should be empty):" << endl;
	RedBlackTree::print();
}

void TestRemoveCase2Case4()
{
	RedBlackTree::insert(0);
	RedBlackTree::insert(20);
	RedBlackTree::insert(30);
	RedBlackTree::insert(50);
	RedBlackTree::insert(40);
	RedBlackTree::insert(100);
	RedBlackTree::print();
	RedBlackTree::remove(0);
	RedBlackTree::print();
}

void TestRemoveCase3Case6()
{
	RedBlackTree::insert(0);
	RedBlackTree::insert(20);
	RedBlackTree::insert(30);
	RedBlackTree::insert(50);
	RedBlackTree::insert(40);
	RedBlackTree::insert(100);
	RedBlackTree::insert(110);
	RedBlackTree::insert(120);
	RedBlackTree::insert(130);
	RedBlackTree::insert(140);
	RedBlackTree::remove(0);
	RedBlackTree::print();
}

void TestRemoveCase4()
{
}

void TestRemoveCase5Case6()
{
	RedBlackTree::insert(0);
	RedBlackTree::insert(20);
	RedBlackTree::insert(30);
	RedBlackTree::insert(50);
	RedBlackTree::insert(40);
	RedBlackTree::insert(100);
	RedBlackTree::insert(110);
	RedBlackTree::insert(120);
	RedBlackTree::insert(130);
	RedBlackTree::insert(125);
	RedBlackTree::remove(110);
	RedBlackTree::print();
}

void TestRemoveCase6()
{
	RedBlackTree::insert(0);
	RedBlackTree::insert(20);
	RedBlackTree::insert(30);
	RedBlackTree::insert(40);
	RedBlackTree::remove(20);
	RedBlackTree::print();
}
