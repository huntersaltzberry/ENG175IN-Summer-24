/*
Calculate the sum ∑ 𝑖(𝑖 + 1). Ask the user for a lower and upper bound for the equation. Calculate
each number in the sum and store the numbers in an array. Print the elements of the array. Calculate an
print the sum of the array

int array[]   (code wasn't working because I didn't decalre a size so I need to put the array after I define the size variable)
int lower, upper, size (of array)
int sum = 0

prompt user for lower and upper bounds

size = upper - lower + 1

int array[size]

for (int i = 0 until i = size; increment) [this calculates each element of the sumnation and puts it into the array]
    int n = lower + i
    array[i] = n * (n + 1)

print ("elements of the array")    
print the array using a for loop
for (i = 0 until i = size, increment)
    print("%d " array[i])
    calculate the sum within the for loop (sum += array[i])

print the sum

*/
#include <stdio.h>

int main()
{
    int lower, upper, size; // declaring variables
    int sum = 0; // except for the array which I had to move down underneath my definition of size
    
    printf("What is the lower bound of the sumnation? "); // prompts user for lower and upper bounds
    scanf("%d", &lower);
    printf("What is the upper bound of the sumnation? ");
    scanf("%d", &upper);
    
    size = upper - lower + 1; // defines size of array. +1 because for instance if upper was 3 and lower was 1
                              // there would need to be 3 elements but 3 - 1 = 2. Small example but I'm not sure how else to explain
    
    int array[size]; // declares array with calculated size
    
    for (int i = 0; i < size; i++){ // for loop to calculate sumnation elements and put them into the array
        int n = lower + i; // int n iterates through all numbers calculated in the sumnation
        array[i] = n * (n + 1); // this operation is the operation used in the sumnation
    }
    
    printf("Elements of the array: ");
    for (int i = 0; i < size; i++){ // iterates through each element of the array to both print elements and calculate the sum
        printf("%d ", array[i]);
        sum += array[i];
    }
    
    printf("\nThe sum of the elements of the array is %d", sum); // prints the sum that was just calculated

    return 0;
}