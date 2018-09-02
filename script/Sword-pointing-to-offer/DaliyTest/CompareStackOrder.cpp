public static bool IsPoporder(int[] pushOrder, int[] popOrder, int length)
{
    bool possible = fasle;

    if (pushOrder != null && popOrder != null && length >  0)
    {
        int nextPush = 0;
        int nextPop = 0;
        int pop = 0;
        int  push = 0;

        Stack<int> stackData = new Stack<int>();

        while (nextPop - pop < length)
        {
            while (stackData.Count == 0 || stackData.Peek() != popOrder[nextPop])
            {
                if (nextPush - push == length)
                {
                    break;
                }
                stackData.Push(pushOrder[nextPush]);
                nextPush++;
            }

            if (stackData.Peek() != popOrder[nextpop])
            {
                break;
            }
            stackData.Pop();
            nextPop++;
        }
        if (stackData.Count == 0 && nextPop - pop == length)
        {
            possible = true;
        }
    }
    return possible;
}

