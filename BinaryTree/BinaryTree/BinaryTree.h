#pragma once

struct Node
{
    Node* pLeft;
    Node* pRight;
    int value;
};

class BinaryTree
{
public:
    BinaryTree();
    ~BinaryTree();

    bool Insert(int value) { return InsertInternal(&_root, value); }
    void BinaryTreeToArray(int* pResult, int count);

private:
    bool InsertInternal(Node** ppNode, int value);
    void BinaryTreeToArrayInternal(Node* pNode, int* pResult, int count, int* pIndex);
    Node* _root;
};

