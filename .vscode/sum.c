#include <stdio.h>
int main() {
    int start, end, evenSum = 0, oddSum = 0, i;
    printf("Enter start number: ");
    scanf("%d", &start);
    printf("Enter end number: ");
    scanf("%d", &end);
    for(i = start; i <= end; i++) {
        if(i % 2 == 0) evenSum += i;
        else oddSum += i;
    }
    printf("\nSum of even numbers from %d to %d: %d\n", start, end, evenSum);
    printf("Sum of odd numbers from %d to %d: %d\n", start, end, oddSum);
     getchar(); 
    return 0;
}
