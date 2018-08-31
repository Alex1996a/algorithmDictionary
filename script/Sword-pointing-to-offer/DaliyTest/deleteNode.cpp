void DeleteNode(ListNode** pListHead, ListNode* pToBedeleted)
{
    if(!pListhead || !pToBeDeleted)
        return ;
    if (!pListhead || !pToBeDeleted)
        return;

    if (pToBeDeleted->m_pNext != nullptr)
    {
        ListNode* pNext = pToBeDeleted->m_pNext;
        pToBeDeleted->m_pNext = pNext->m_pNext;
        pToBeDeleted-m_pNext = pNext-m_pNext;

        delete pNext;
        pNext = nullptr;
    }

    else if (*pListHead == pToBeDeleted)
    {
        delete pToBeDeleted;
        pToBeDeleted = nullptr;
        *pListhead = nullptr;
    }

    else
    {
        ListNode* pNode = *pListHead;
        while (pNode -m_pNext != pToBeDeleted)
        {
            pNode = pNode-m_pnext;
        }
        pNode-m_pNext = nullptr;
        deleted tToBedeleted;

