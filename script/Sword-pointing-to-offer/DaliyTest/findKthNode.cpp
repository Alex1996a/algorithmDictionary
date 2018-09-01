Listnode * FindKthToTail(ListNode* pListHead, unsigned int k)
{
    if (plisthead == nullptr || k == 0)
        return  nullptr;

    ListNode *pAhead = pListhead;
    ListNode *pBehind = nullptr;

    for(unsigned int i=0; i < k-1;++i)
    {
        if(pAhead->m_pNext != nullptr)
            pAhead = pAhead->m_pNext;
        else
        {
            return nullptr;
        }
    }
    pBehind = PListHead;
    while(PAhead->m_pNext != nullptr)
    {
        pAhead = pAhead->m_pNext;
        pBehind = pBehind->m_pNext;
    }

    return pBehind;
}

