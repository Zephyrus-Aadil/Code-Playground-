#include <iostream>
#include<vector>
using namespace std;

void rowSum(int arr[3][3], int row, int col)
{
    int i, j, sum;
    int maxOnesRow = -1; 

    vector<int> storeSum;
    {
        sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum = 0;
            for (int j = 0; j < 3; j++)
            {

                if (arr[i][j] == 1)
                    sum = sum + 1;
            }
            cout << sum << endl;
            storeSum.push_back(sum);
        }
    }
}

int main()
{
    int arr[3][3] = {0, 0, 0, 1, 1, 0, 1, 0, 0};
    rowSum(arr, 3, 3);
}