// Main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "BinaryTree.h"

int _tmain(int argc, _TCHAR* argv[])
{
    BinaryTree* pTree = new BinaryTree();
    pTree->Insert(5);
    pTree->Insert(15);
    pTree->Insert(50);
    pTree->Insert(52);
    pTree->Insert(25);
    pTree->Insert(3);
    pTree->Insert(2);
    pTree->Insert(1);

    int results[256];

    pTree->BinaryTreeToArray(results, 256); 

	return 0;
}

