#include<stdio.h>

void printArray(int a[], int size) {
	int i;
	for(i = 0; i < size; i++)
		printf("%d\t", a[i]);
	printf("\n");
}

int count(int a[], int size) {
	int c = 0;
	int i;
	for(i = 0; i < size; i++) {
		if(a[i] != '\0')
		    c++;
	}
	return c;
}

void insertStart(int a[], int size, int item, int c) {
	if(c < size) {
		
		for(int j = size - 1; j > 0; j--)
		   a[j] = a[j-1];
		   
		a[0] = item; 
    }
	else {
	    printf("array is full\n");
	}
}

void insertEmptySpot(int a[], int size, int item) {
	for(int k = 0; k < size; k++) {
		if(a[k] == '\0') {
			a[k] = item;
			break;
		}
	}
}

void insertAtIndex(int a[], int size, int ind, int item) {
    for(int j = size - 1; j > ind; j--)
	   a[j] = a[j-1];
    a[ind] = item;
}

int main() {
	int a[5] = {10, 20};
	
	
	printArray(a, 5);
	
	// 2. Count elements
	int c = count(a, 5);
	printf("no. of elements in the array = %d\n", c);

	insertStart(a, 5, 30, c);
	printArray(a, 5);
	
	insertEmptySpot(a, 5, 40);
	printArray(a, 5);
		
  insertAtIndex(a, 5, 1, 50);
	printArray(a, 5);
		
	return 0;
}