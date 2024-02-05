#include <stdio.h>
#define NMAX 3

void input(int *data_1, int *data_2);
void selection_sort(int *a);
void insertion_sort(int *a);

int main() {
    int data_1[NMAX];
    int data_2[NMAX];
    input(data_1, data_2);
    selection_sort(data_1);
    insertion_sort(data_2);
    for (int i = 0; i < NMAX; i++) {
        printf("%d ", data_1[i]);
    }
    printf("\n");
    for (int i = 0; i < NMAX; i++) {
        printf("%d ", data_2[i]);
    }
    return 0;
}
void input(int *data_1, int *data_2) {
    for (int *i = data_1; i - data_1 < NMAX; i++) {
        scanf("%d", i);
        *data_2 = *i;
        data_2++;
    }
}
void selection_sort(int *a) {
    for (int *p = a; p - a < NMAX; p++) {
        int *min_ptr = p;
        for (int *j = p + 1; j - a < NMAX; j++) {
            if (*j < *min_ptr) {
                min_ptr = j;
            }
        }
        int temp = *p;
        *p = *min_ptr;
        *min_ptr = temp;
    }
}
void insertion_sort(int *a) {
    for (int *p = a + 1; p - a < NMAX; p++) {
        int key = *p;
        int *j = p - 1;
        while (j >= a && *j > key) {
            *(j + 1) = *j;
            j--;
        }
        *(j + 1) = key;
    }
}