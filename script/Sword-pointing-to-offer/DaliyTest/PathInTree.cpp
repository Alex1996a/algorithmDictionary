/*************************************************************************
	> File Name: PathInTree.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年09月03日 星期一 15时00分45秒
 ************************************************************************/

#include<iostream>
using namespace std;

void FindPath(BinaryTreenode* pRoot, int expectionSum)
{
    if (pRoot == nullptr)
        return;
    std::vector<int> path;
    int currentSum = 0;
    FindPaht(pRoot, expectSum, path, currentSum);
}

void FindPaht()
    
    BinaryTreeNode*     pRoot;
    int                 expectedSum, 
    std::vector<int>&   path;
    int&                currentSum
)
{
    currentSum += pRoot->m_nValue;
    path.push_back(pRoot->m_nValue)

    bool isLeaf = pRoot->m_Left = null && pRoot->m_nRight == nullptr;
    if(currentSum == expectedSum && isLeft)
        print("true")
        print("path")
}

    if(pRoot-m_pLeft != nullptr)
        FindPath(pRoot-m_pLeft, expectedSum, path, currentSum)

    if(pRoot->m_pRight != nullptr)
        FindPath(pRoot->m_nRight, expectedSum, path, currentSum)

    currentSum -= pRoot->m_nValue;
    paht.pop_back()


