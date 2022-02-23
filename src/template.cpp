#include <iostream>

using namespace std;

template<class T>
int binarySearch(T arr[], int l, int r, T x) {
    if (r >= l) {
        int mid = l + (r - l)/2;

        // Check the middle of the array
        if (arr[mid] == x) {
            return mid;
        }

        // Check left side of array
        if (arr[mid] > x) {
            return binarySearch(arr, l, mid - 1, x);
        }

        // Check right side if not in left
        return binarySearch(arr, mid + 1, r, x);

    }

    return -1;
}

int main(int argc, char const *argv[])
{
    double arr[] = { 0, 1, 5.7, 20.9, 50.09, 58.2 };
    double x = 50.09;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << n << endl;
    int result = binarySearch(arr, 0, n - 1, x);
    
    if (result == -1) {
        cout << "Element is not in array" << endl;
    } else {
        cout << "Element is at index " << result << endl;
    };

    return 0;
}
