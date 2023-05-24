# ✨ Fibonacci using recursion

The Fibonacci sequence is a series of numbers where each number is the sum of the two preceding ones. The sequence typically starts with 0 and 1.

 👉 <strong>Here's a concise explanation of calculating Fibonacci numbers using recursion:</strong>

- If the input is 0 or 1, return the input as it is (base case).
- Otherwise, recursively call the Fibonacci function with the previous two numbers.
- Add the results of the two recursive calls and return it as the Fibonacci number for the given input.

The recursive Fibonacci algorithm breaks down the problem into smaller subproblems by calculating the Fibonacci numbers for the previous two inputs. By summing up the results of the recursive calls, it determines the Fibonacci number for a given input.

💭 Using recursion, the Fibonacci sequence can be computed in a concise and elegant way, offering a straightforward solution for generating Fibonacci numbers. However, for larger inputs, the recursive approach can be inefficient due to redundant calculations, and alternative methods like memoization or iteration are often preferred for better performance.
