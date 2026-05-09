#include <iostream>

using namespace std;
class Reverse
{
public:
    void Reverse_Array(int arr[], int n)
    {
        int start = 0;
        int end = n - 1;
        while (start < end)
        {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    Reverse s1;
    s1.Reverse_Array(arr, n);

    return 0;
}