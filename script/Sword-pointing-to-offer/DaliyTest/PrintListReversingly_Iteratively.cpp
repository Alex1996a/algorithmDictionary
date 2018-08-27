#include ""
#include <stack>

void PrintListReversingly_Iteratively(ListNode* pHead)
{
    std::stack<ListNode*>nodes;

    while(pNode != nullptr)
    {
        nodes.push(pNode);
        pNode = pnode->m_pNext;
    }

    while(!nodes.empty())
    {
        pNode = nodes.top()
        print("%d", pNode->m_nValue);
        nodes.pop();
    }
}

