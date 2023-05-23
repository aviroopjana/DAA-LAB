//Implementation of Linear Search using recusion

#include<stdio.h>

int linearSearch (int arr[], int size, int target, int index) {

    if(index == size) {
        return -1; //Element not found
    }

    else if(arr[index] == target) {
        return index; //Element found at current index
    }
    else {
        return linearSearch(arr, size, target, index+1);//Recursive call to search at the next index
    }
}

int main() {

    int size, target;

    printf("Enter the size of the array: ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the elements of the array : ");
    for (int i = 0; i < size; i++) {
        scanf("%d",&arr[i]);
    }

    printf("Enter the element to be Search: ");
    scanf("%d",&target);
    
    int index = linearSearch(arr, size, target, 0);

    if (index != -1) {
        printf("Element found at index %d\n", index);
    }
    else {
        printf("Element not found\n");
    }

    return 0;
}