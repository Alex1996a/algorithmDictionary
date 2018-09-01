ListNode* Reverselist(ListNode* pHead)
{
    ListNode* pReversedhead = nullptr;
    ListNode* pNode = pHead;
    ListNode* pPrev = nullptr;

    while(pNode != nullptr)
    {
        ListNode* pNext = pNode->m_pNext;

        if(pNext == nullptr)
            pReversedHead = pNode

        pNode-m_pNext = pPrev;

        pprev = pNode;
        pNode = pnext;
    }
    return pReversedHead;
}

