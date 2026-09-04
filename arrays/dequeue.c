#include <stdio.h>

#define SIZE 5

int arr[SIZE];
int count = 0;

void push_back(int val) {
    if (count == SIZE) {
        printf("Full!\n");
        return;
    }
    arr[count] = val;
    count++;
}

void push_front(int val) {
    if (count == SIZE) {
        printf("Full!\n");
        return;
    }
    // Shift everything right to make room at index 0
    for (int i = count; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = val;
    count++;
}

int pop_front() {
    if (count == 0) {
        printf("Empty!\n");
        return -1;
    }
    int val = arr[0];
    // Shift everything left
    for (int i = 0; i < count - 1; i++) {
        arr[i] = arr[i + 1];
    }
    count--;
    return val;
}

int pop_back() {
    if (count == 0) {
        printf("Empty!\n");
        return -1;
    }
    count--;
    return arr[count];
}

void print_deque() {
    printf("Deque: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    push_back(10);  // [10]
    push_back(20);  // [10, 20]
    push_front(5);  // [5, 10, 20]

    print_deque();  // 5 10 20

    printf("Popped front: %d\n", pop_front()); // 5
    printf("Popped back: %d\n", pop_back());   // 20

    print_deque();  // 10

    return 0;
}