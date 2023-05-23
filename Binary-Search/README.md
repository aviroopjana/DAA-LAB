# ✨ Binary Search using recursion

Binary search is an efficient search algorithm used to find a specific element in a sorted array or list. It follows a divide-and-conquer approach by repeatedly dividing the search space in half.

 👉 <strong>Here's a concise explanation of binary search using recursion:</strong>

- Start with a sorted array and define the target element to search for.
- Compare the target element with the middle element of the array.
- If the target element matches the middle element, return the index of the middle element.
- If the target element is smaller than the middle element, recursively search the left half of the array.
- If the target element is larger than the middle element, recursively search the right half of the array.
- Repeat the process on the selected half until the target element is found or the search space is empty.
- If the search space is empty and the target element is not found, return a "not found" indicator.

The recursive binary search algorithm reduces the search space in half with each recursive call, making it an efficient way to search for an element in a sorted array.

