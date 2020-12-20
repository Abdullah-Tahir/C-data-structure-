#include <iostream> 
using namespace std;
#define rows 4 
#define cols 5 
int r[4] = { 0, 0, 0, 1 };
int c[4] = { 1, 1, 0, 0 };

bool checker(int x, int y, int matrix[][cols])
{
    if (x >= 0 && x <= rows && y >= 0 &&
        y <= cols && matrix[x][y] == 1)
        return true;
    return false;
}


void depthfinding(int i, int j, int k[][cols])
{
    //i am using this DPS alogo to  make sure that all the 1 at the boundry of the matrix gets remove so that i can get the zeros better
    k[i][j] = 1;
    for (int g = 0; g < 4; g++)
        if (checker(i + r[g], j + c[g], k))
            depthfinding(i + r[g], j + c[g], k);
}

int surrdoing_zero(int matrix[][cols])
{
    // 

    for (int i = 0; i < cols; i++)
        if (matrix[rows - 1][i] == 1)
            depthfinding(rows - 1, i, matrix);

    for (int i = 0; i < cols; i++)
        if (matrix[0][i] == 1)
            depthfinding(0, i, matrix);
    for (int i = 0; i < rows; i++)
        if (matrix[i][cols - 1] == 1)
            depthfinding(i, cols - 1, matrix);
    for (int i = 0; i < rows; i++)
        if (matrix[i][0] == 1)
            depthfinding(i, 0, matrix);


    int final = 0;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if (matrix[i][j] == 1)
                final++;
    return final;
}

int main()
{
    int matrix[][cols] = { { 0, 0, 0, 0, 0 },
                     { 0, 0, 0, 0, 0 },
                     { 0, 1, 0, 1, 0 },
                     { 0, 0, 0, 0, 0 } };
    cout << surrdoing_zero(matrix) << endl;
    return 0;
}
