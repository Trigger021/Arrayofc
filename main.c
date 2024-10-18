#include <stdio.h>

int main() {
    //Array
    int age[5] = {10, 20, 30, 40, 50};
    printf("age = %d\n", age[0]);
    printf("age = %d\n", age[1]);
    printf("age = %d\n", age[2]);
    printf("age = %d\n", age[3]);
    printf("age = %d\n", age[4]);


    //looping through arrays
    int i;
    int ages[] = {25, 50, 75, 100};
    for (i = 0; i < 4; i++){
        printf("age %d \n", ages[i]);
    }


    // user defined arrays
    int values[5];
    printf("Enter integers :\n");
    //storing input in array
    for (i = 0; i < 5; i++) {
        scanf("%d", &values[i]);
    }
    printf("Integers entered are \n");
    for (i = 0; i < 5; i++) {
        printf("%d \n", values[i]);
    }


    //summing up elements of array
    int arr[100], size, sum = 0;
    //size from user
    printf("Enter the size of array :\n");
    scanf("%d", &size);
    //get all elements
    for (i = 0; i < size; i++) {
        printf("Enter element %d :\n", i);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum of array is %d\n", sum);


    //Averaging array n number of integers
    int marks[10], n, sum1 = 0;
    double avg;
    printf("Enter the number of marks in the array :\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter mark %d :\n", i+1);
        scanf("%d", &marks[i]);
        sum1 += marks[i];
    }
    avg = sum1 / n;
    printf("Average mark is %f\n", avg);

    return 0;
}


