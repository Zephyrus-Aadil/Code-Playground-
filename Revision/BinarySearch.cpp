#include <iostream>
using namespace std;

int binarysearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int even[8] = {1, 2, 4, 5, 6, 7, 8, 20};
    int odd[7] = {5, 10, 15, 25, 36, 45, 96};

    int oddIndex = binarysearch(odd, 7, 36);
    cout << "Index of 36 is: " << oddIndex << endl;

    int evenIndex = binarysearch(even, 8, 7);
    cout << "Index of 7 is: " << evenIndex << endl;

    return 0;
}