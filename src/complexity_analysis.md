# Complexity Analysis

- How much **time** does this algorithm need to finish?
- How much **space** does this algorithm need for its computation?

## Big-O Notation

Upper bound of the complexity in the **worst** case, helping to quantify performance as the input size becomes **arbitrarily large**.

- Contstant Time: O(1)
- Logarithmic Time: O(log(n))
- Linear Time: O(n)
- Linearithmic Time: O(nlog(n))
- Quadric Time: O(n^2)
- Cubic Time: O(n^3)
- Exponential Time: O(b^n), b > 1
- Factorial Time: O(n!)

n - The size of the input
Complexity is from smallest to largest.

## Arrays

|           | Static Array | Dynamic Array |
|-----------|--------------|---------------|
| Access    | O(1)         | O(1)          |
| Search    | O(n)         | O(n)          |
| Insertion | N/A          | O(n)          |
| Appending | N/A          | O(1)          |
| Deletion  | N/A          | O(n)          |

## Linked Lists

|                  | Singly Linked | Doubly Linked |
|------------------|---------------|---------------|
| Search           | O(n)          | O(n)          |
| Insert at head   | O(1)          | O(1)          |
| Insert at tail   | O(1)          | O(1)          |
| Remove at head   | O(1)          | O(1)          |
| Remove at tail   | O(n)          | O(1)          |
| Remove in middle | O(n)          | O(n)          |
