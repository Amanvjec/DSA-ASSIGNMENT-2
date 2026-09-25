# Performance Comparison Table

| Performance Metric | Max Heap Approach | Linear Search Approach |
| :--- | :--- | :--- |
| **Finding the Maximum Score** | O(1) (Instant root access) | O(n) (Full sequential scan) |
| **Inserting a New Score** | O(log n) (Requires heapify-up) | O(1) (Unsorted array append) |
| **Scaling with Number of Students (n)** | Logarithmic growth efficiency | Linear performance degradation |
| **Comparisons for Max (for n=8)** | 1 operation | 7 comparisons |
