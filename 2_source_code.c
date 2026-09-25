#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int insertMaxHeap(int heap[], int *size, int value, int *comparisons) {
    heap[*size] = value;
    int currentIndex = *size;
    (*size)++;
    
    while (currentIndex > 0) {
        int parentIndex = (currentIndex - 1) / 2;
        (*comparisons)++;
        if (heap[currentIndex] > heap[parentIndex]) {
            swap(&heap[currentIndex], &heap[parentIndex]);
            currentIndex = parentIndex;
        } else {
            break;
        }
    }
    return *comparisons;
}

int findMaxHeap(int heap[]) {
    return heap[0];
}

int findMaxLinear(int arr[], int size, int *comparisons) {
    if (size <= 0) return -1;
    int maxVal = arr[0];
    *comparisons = 0;
    
    for (int i = 1; i < size; i++) {
        (*comparisons)++;
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

void printHeap(int heap[], int size) {
    printf("[ ");
    for (int i = 0; i < size; i++) {
        printf("%d ", heap[i]);
    }
    printf("]\n");
}

int main() {
    int inputData[] = {78, 92, 65, 88, 95, 72, 84, 90};
    int n = sizeof(inputData) / sizeof(inputData[0]);
    
    int heap[MAX_SIZE];
    int heapSize = 0;
    int totalInsertComparisons = 0;
    
    printf("--- PART (A): MAX HEAP INSERTION TRACE ---\n");
    for (int i = 0; i < n; i++) {
        printf("Inserting %d: ", inputData[i]);
        insertMaxHeap(heap, &heapSize, inputData[i], &totalInsertComparisons);
        printHeap(heap, heapSize);
    }
    
    printf("\n--- PART (B): FINDING HIGHEST SCORE ---\n");
    
    int maxHeapResult = findMaxHeap(heap);
    printf("Max Heap -> Highest Score: %d (Comparisons/Operations: 1 [Direct Root Access])\n", maxHeapResult);
    
    int linearComparisons = 0;
    int maxLinearResult = findMaxLinear(inputData, n, &linearComparisons);
    printf("Linear Search -> Highest Score: %d (Comparisons required: %d)\n", maxLinearResult, linearComparisons);
    
    return 0;
}
