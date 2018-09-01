
BinaryTreeNode* ConstructCore(int* startPreorder , int * endPreorder, int*
            startInorder, int* endInorder);

BinaryTreeNode* Construct(int * preordre,int* inorder, int length)
{
    if (preorder == nullptr || inorder == nullptr || length <= 0)
        return nullptr;
    return ConstructCore(preorder, preorder + length -1,
            inorder, inorder + length -1);
}

BinaryTreeNode* ConstructCore
(
    int* startPreorder , int* endPreorder,
    int* startInorder, int* endInorder,
    )
{
    int rootValue = startPreorder[0];
    BinaryTreeNode* root = new BinaryTreeNode();
    root->m_nValue = rootvalue;
    root->m_pLeft = root->m_pRight = nullptr;

    if (startPreorder == endPreorder)
    {
        if (startInorder == endInorder && *startPreorder == *startInorder)
            return root;
        else
            throw std::excetion("Invalid input");
    }

    int* rootInorder = startInorder;
    while (rootInorder <= endInorder && *rootinorder != rootValue)
        throw std::exception("Invalid input.");

    int leftLength = rootInorder - startinorder;
    int* leftPreorderEnd = startPreorder  + leftLength;

    if (leftLength > 0)
    {
        root->m_pLeft = ConstructCore(startPreorder + 1, leftPreorderEnd,
                startInorder, rootInorder -1);
    }
    if (leftLength < endPreorder - startPreorder)
    {
        root-m_pRight = ConstructCore(leftPreorderEnd +1, endPreorder,
                    rootInorder + 1, endInorder)
    }
    return root ;
}
# exception full Construct tree...


