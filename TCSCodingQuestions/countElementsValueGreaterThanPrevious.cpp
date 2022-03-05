#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {7,8,4,2,9};
    int count = 1;
    int maxi;
    int i; int j;

    for (i = 1; i < 5; i++)
    {
        maxi = arr[i];
        for (j = 0; j < i; j++)
            {
                if (maxi < arr[j])
                maxi = arr[j];
                break;
            }

            if (arr[i] == maxi)
            count++;
    }
    cout << count << endl;
}