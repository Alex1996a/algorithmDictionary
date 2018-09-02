void PrintFromTopToBottom(BinaryTreeNode* pRoot)
{
    if(pRoot == nullptr)
        return

    sta::deque<BinaryTreeNode *> dequeTreeNode;
    dequTreeNode.push_back(pRoot);

    while(dequeTreeNode.size())
    {
        BinaryTreeeNode *pNode = dequeTreeNode.front();
        dequeTreeNode.pop_front();

        print('..')

        if (pNode->m_pLeft)
            dequeTreeNode.push_back(pNode-m_pLeft);
        if(pNode->m_pRight)
            dequeTreeNode.push_back(pNode->m_pRight)
    }
}
