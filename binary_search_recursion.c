//Implementation of Binary Search using recursion

#include<stdio.h>

int BinarySearch(int arr[], int low, int high, int target) {
    
        if(low <= high) {
            int mid = low + (high - low) / 2;

            if(arr[mid] == target) {
                return mid; //Element found at the middle index
            }
            else {
                if(arr[mid] > target) {
                    return BinarySearch(arr, low, mid-1, target);// Searching in left half
                }
                else {
                    return BinarySearch(arr, mid+1, high, target); //Searching in the right half
                }
            }

        return -1; //Element not found
    }

}

int main() {
    int size, target;

    printf("Enter the size of the array: \n");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the elements of the array in the sorted way :\n");
        for (int i=0; i<size; i++) {
            scanf("%d",&arr[i]);
        }

    printf("Enter the element to be Searched : ");
    scanf("%d",&target);

    int index = BinarySearch(arr, 0, size-1, target);

    if (index != -1) {
        printf("Element found at index %d\n", index);
    }
    else {
        printf("Element not found\n");
    }

    return 0;
}