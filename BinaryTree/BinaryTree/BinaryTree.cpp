#include "stdafx.h"
#include "BinaryTree.h"


BinaryTree::BinaryTree()
    : _root(nullptr)
{
}


BinaryTree::~BinaryTree()
{
}

bool BinaryTree::InsertInternal(Node** ppNode, int value)
{
    Node* pNode = *ppNode;

    if (pNode == nullptr)
    {
        pNode = new Node();
        pNode->pLeft = nullptr;
        pNode->pRight = nullptr;
        pNode->value = value;
        *ppNode = pNode;
        return true;
    }

    if (pNode->value < value)
    {
        return InsertInternal(&(pNode->pRight), value);
    }
    else
    {
        return InsertInternal(&(pNode->pLeft), value);
    }

}

void BinaryTree::BinaryTreeToArray(int* pResult, int count)
{
    if (_root == nullptr)
    {
        pResult = new int[] {0};
    }
    else
    {
        int index = 0;
        BinaryTreeToArrayInternal(_root, pResult, count, &index);
    }

}

void BinaryTree::BinaryTreeToArrayInternal(Node* pNode, int* pResult, int count, int* pIndex)
{
    if (pNode == nullptr || *pIndex >= count)
    {
        return;
    }

    BinaryTreeToArrayInternal(pNode->pLeft, pResult, count, pIndex);
    pResult[(*pIndex)++] = pNode->value;
    BinaryTreeToArrayInternal(pNode->pRight, pResult, count, pIndex);
}