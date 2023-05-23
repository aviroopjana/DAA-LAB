# ✨ GCD of two numbers using recursion

Linear search is a simple search algorithm that sequentially checks each element in a list or array until the target element is found or the end of the list is reached. It follows a linear or sequential approach to search for the target element.

 👉 <strong>Here's a concise explanation of finding the GCD of two numbers using recursion:</strong>

- If one of the numbers is 0, the GCD is the other number. Return this number as the result (base case).
- Otherwise, recursively call the GCD function with the second number and the remainder when the first number is divided by the second number.
- Repeat the recursive call until one of the numbers becomes 0 (base case)
- The final result will be the GCD of the original two numbers.

The recursive GCD algorithm repeatedly divides the larger number by the smaller number and passes the remainder as the second number in the next recursive call. This process continues until one of the numbers becomes 0, at which point the other number is the GCD.

💭 By utilizing recursion, the GCD of two numbers can be calculated efficiently, providing a concise and intuitive solution to finding their greatest common divisor.
