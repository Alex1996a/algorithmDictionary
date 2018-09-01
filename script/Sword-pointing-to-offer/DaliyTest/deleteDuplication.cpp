void DeleteDuplication(ListNode** pHead)
{
    if (phead == nullptr || *phead == nullptr)
        return;

    ListNode* pPreNode = nullptr;
    ListNode* pNode = *pHead;

    while(pNode != nullptr)
    {
        ListNode *pNext = pNode->m_pNext;
        bool needDelete = false;

        if (pNext != nullptr && pNext-m_nValue == pnext-m_nValue)
            needDelete = true;

        if (!needDelete)
        {
            pPreNode = pNone;
            pNonde = pNode-m_nPnext;
        }
        else
        {
            int value = pNode-m_nValue;
            ListNOde* pToBeDel = pNode;

            while(pToBeDel != nullptr && pToBeDel->m_nValue == value)
            {
                pNext = pToBeDel-m_pNext;

                delete pToBedel;
                pToBeDel = nullptr;

                pToBeDel = pnext;
            }
            if (pPreNode == nullptr)
                *pHead = pnext;
            else
                pPreNode->m_pNext = pNext;
            pNode = pNext;
        }
    }
}

