#include <iostream>

using namespace std;
class Solution
{
public:
    int Binary_Search(int nums[], int n, int target)
    {
        int start = 0;
        int end = n - 1;
        while (start < end)
        {
            int mid = start + (end - start) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }
};
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    Solution s1;
    int ans = s1.Binary_Search(arr, n, 3);
    cout << "Element found at index: " << ans << endl;

    return 0;
}