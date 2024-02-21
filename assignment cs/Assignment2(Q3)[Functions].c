Write a recursive function to perform a binary search 
on a sorted array.

#include <stdio.h>

int search(int arr[], int l, int r, int t) 
{
    if (l <= r) 
    {
        int mid = l + (r - l) / 2;

            if (arr[mid] == t)
            return mid;

            if (arr[mid] > t)
            return search(arr, l, mid - 1, t);

            return search(arr, mid + 1, r, t);
    }

        return -1;
}

//Sample Usage
int main() 
{
    int arr[] = {65, 1, 67, 3, 23, 55, 71, 22, 11, 64};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 23;
    int result = binarySearch(arr, 0, n - 1, target);
    if (result != -1)
        printf("Element %d is present at index %d\n", target, result);
    else
        printf("Element %d is not present in the array\n", target);
    return 0;
}
  
