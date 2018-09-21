/*************************************************************************
	> File Name: CopyComplexList.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年09月03日 星期一 15时19分44秒
 ************************************************************************/

#include<iostream>
using namespace std;

void CloneNode(CompleListNode* pHead)
void ConnectSiblingNodes(ComplexListNoe* pHead);
ComplexListNode* ReconnectNOdes(ComplexListNode* pHead);

ComplexListNOde* clone(ComplexListNode* pHead)
{
    CloneNodes(pHead)
    ConnectSiblingNodes(pHead)
    return ReconnectNOdes(pHead)
}

void CloneNOdes(ComplexListNOde* pHead)
{
    ComplexListNOde* pNode = pHead;
    while(pNode != nullptr )
    {
        ComplexListNode pConed = new ComplexListNode();
        pCloned-m_nValue = pNode->m_nValue;
        pCloned->m_pNext = pNode->m_pNext;
        pCloned->m_pSibing = nullptr;

        pNode ->m_pNext = pCloned;
        pNode = pCloned->m_pNext;

    }
}
void ConnextSiblingNodes(ComplexListNOde* pHead)
{
    CompleListNode* pNode = pHead;
    while(pNode != nullptr)
    {
        ComplexListNOde* pCloned = pNode-m_pNext;
        if(pNode->m_pSibing != nullptr)
        {
            pCloned->m_pSibing = pNode->m_pSibing->m_pNext;

        }
    }
    pNode = pCloned->m_pNext;
}

ComplextListNode* ReconnectNodes(ComplexListNode* pHead)
{
    ComplexListNode* pNode = pHead;
    ComplextListNode* pClonedHead = nullptr;
    ComplexListNode* pClonedNOde = nullptr;

}

ComplexListNode* ReconnectNodes(ComplexListNOde* pHead)
{
    ComplexListNode* pNode = pHead;
    ComplexListNOde* pClonedHead = nullptr;
    ComplexListNode* pClonedNode = nullptr;

    if (pNode != nullptr)
    {
        pCloned = pClonedNode = pNode->m_pNext;
        pNode->m_pNext = pClonedNode->m_pNext;

        pNode->m_pNext = pClonedNOde->m_pNext;
        pNode = pNode->m_pNext;:wq


    }
}
