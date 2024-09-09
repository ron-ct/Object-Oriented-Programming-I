/*C Program that gets and uses user input as values for an array and
performs some functions and returns values
 */
#include <stdio.h>

int summation(int arr[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int maximum(int arr[],int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int n;
    printf("Enter the length of thr array (n): \n");
    scanf("%d", &n);

    int arr[n];
    printf("Enter integers for the array: \n");

    for (int i = 0; i < n; i++) {
        printf("Enter element: \n");
        scanf("%d", &arr[i]);
        }

    printf("SUM: %d\n", summation(arr, n));
    printf("MAXIMUM: %d", maximum(arr, n));


    return 0;
}
