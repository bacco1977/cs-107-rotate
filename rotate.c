#include "rotate.h"
#include <stdio.h>
#include <string.h>


void rotate(void* front, void* middle, void* end) {
    // Code to rotate the elements pointed to by front, middle, and end
    int front_size = (char*)middle - (char*)front;
    int back_size = (char*)end - (char*)middle;
    char buffer[front_size];
    memcpy(buffer, front, front_size);
    memmove(front, middle, back_size);
    memcpy((char*)end - front_size, buffer, front_size);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    rotate(arr, arr + k, arr + n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
  
}