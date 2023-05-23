# ✨ Linear Search using recursion

Linear search is a simple search algorithm that sequentially checks each element in a list or array until the target element is found or the end of the list is reached. It follows a linear or sequential approach to search for the target element.

 👉 <strong>Here's a concise explanation of linear search using recursion:</strong>

- Start with a list or array and define the target element to search for.
- Compare each element in the list sequentially with the target element.
- If the current element matches the target element, return the index of that element.
- If the end of the list is reached and the target element is not found, return a "not found" indicator.
- If the target element is not found at the current index, recursively call the linear search function on the remaining elements in the list.
- Repeat the recursive call until either the target element is found or the end of the list is reached.
- The recursive linear search algorithm continues to search through the remaining elements one by one until the target element is found or all elements have been checked.

💭 However, it's important to note that linear search using recursion may not be the most efficient approach compared to iterative methods, as recursion may result in additional function calls and overhead.
