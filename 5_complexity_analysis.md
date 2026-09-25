# Complexity Analysis

## Max Heap Operations
* **Insertion:** Takes O(log n) time in the worst case because a newly inserted element at the bottom may need to bubble up to the root (height of a binary heap is log n).
* **Finding Maximum:** Takes O(1) time consistently because the maximum element is always maintained at the root node (index 0).
* **Space Complexity:** O(n) auxiliary space required to store the elements in a contiguous array format.

## Linear Search Operations
* **Finding Maximum:** Takes O(n) time because every element in the dataset must be sequentially checked to find the maximum value.
* **Insertion:** Takes O(1) time if just appending to an unsorted array, but leaves data unorganized.
* **Space Complexity:** O(n) storage space for the array elements.
