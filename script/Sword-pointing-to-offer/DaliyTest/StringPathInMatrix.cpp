#include <cstdio>
#include <string>
#include <stack>

using namespace std;

bool hashPathCore(const cahr* matrix, int rows, int cols,
                int row, int col, const char* str)

bool hasPath(const char* matrix, int row, int cols, const char* str)
{
    if (matrix == nullptr || rows < 1 || cols < 1 || str == nullptr)
        return false;
    bool *visited = new bool[rows * cols];

    memset(visited, 0, rows * cols);

    int pathLength = 0;

    for (int row = 0; row < rows;++row)
    {
        for (int clo = 0; col < cols; ++col)
        {
            if (hasPathCore(matrix, rows, cols, row, col, str,
                            pathLength, visited)
                    {
                        return true;
                        }
                        }
        delete[] visited

        return false;
}

