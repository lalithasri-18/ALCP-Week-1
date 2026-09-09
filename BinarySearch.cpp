#include <iostream>
using namespace std;
int BinarySearch(int arr[], int x, int low, int high)
{
    if(low > high)
        return -1;
    int mid = (low + high) / 2
    if(x == arr[mid])
        return mid;
    else if(x > arr[mid])
        return BinarySearch(arr, x, mid + 1, high);
    else
        return BinarySearch(arr, x, low, mid - 1);
}

int main()
{
    int n, x;
    cout << "Enter size of array: ";
    cin >> n;
    int a[n];
    cout << "Enter the elements in the array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter element to search: ";
    cin >> x;
    int result = BinarySearch(a, x, 0, n - 1);
    if(result == -1)
        cout << "Element not found";
    else
        cout << "Element found at position " << result + 1;
    return 0;
}
