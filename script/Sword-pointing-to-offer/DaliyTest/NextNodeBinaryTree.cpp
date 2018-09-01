#include <stdio.h>

struct BinaryTreeNode
{
    int                   m_nValue;
    BianryTtreeNode*      m_pLeft;
    BinaryTreeNode*       m_pRight;
    BinaryTreeNode*       m_pParent;
};

BinaryTreeNode* GetNext(BinaryTreeNode* pNode)
{
    if(pNode == nullptr)
        return nullptr;

    BinaryTreeNode* pNext = nullptr;
    if(pNode->m_pRight != nullptr)
    {
        BinaryTreeNode* pRight = pNode->m_pRight;
        while(pRight->m_pLeft != nullptr)
            pRight = pRight->pLeft;

        pNext = pRight;
    }
    else if (pNode->m_nParent != nullptr)
    {
        BinaryTreenode* pCurrent = pNode;
        BinaryTreeNode*  pParent = pNode->m_nParent;

        while(pParent != nullptr && pCurrent == pParent->m_pRight)
        {
            pCurrent = pParent;
            pParent = pParent->m_pParent;
        }
        pNext = pParent;
    }
    return pNext;
}

