Write a recursive function to solve the Tower of Hanoi problem

#include <stdio.h>

int binarySearch(int arr[], int left, int right, int target) 
{
    if (left <= right) 
    {
        int mid = left + (right - left) / 2;

            if (arr[mid] == target)
            return mid;

            if (arr[mid] > target)
            return binarySearch(arr, left, mid - 1, target);

            return binarySearch(arr, mid + 1, right, target);
    }

      return -1;
}

//sample 
int main() 
{
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 23;
    int result = binarySearch(arr, 0, n - 1, target);
    if (result != -1)
        printf("Element %d is present at index %d\n", target, result);
    else
        printf("Element %d is not present in the array\n", target);
    return 0;
}
