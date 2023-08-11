#include <stdio.h>
#include <stdlib.h>
int main() {
    int *operatorPointer;
    int operator;

    printf("Choose an Operation:\n");
    printf("\n\t1. Addition: \t\t+\n");
    printf("\t2. Subtraction: \t-\n");
    printf("\t3. Multiplication: \t*\n");
    printf("\t4. Division: \t\t/\n");
    printf("\nChoose an Operation [1-4]: ");
    scanf("%d", &operator);

    operatorPointer = (int *)malloc(operator * sizeof(int));

    if (operatorPointer == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    
    switch (operator)
    {
        case 1:
            printf("\nYou selected the Addition operation.\n");
            break;
        case 2:
            printf("\nYou selected the Subtraction operation.\n");
            break;
        case 3:
            printf("\nYou selected the Multiplication operation.\n");
            break;
        case 4:
            printf("\nYou selected the Division operation.\n");
            break;
        default:
            printf("Invalid Operation selection.");
            break;
    }

    int *firstPointer;
    int first;

    printf("\nEnter the first number: ");
    scanf("%d", &first);
    printf("First number selected is %d\n", first);
    firstPointer = (int *)malloc(first * sizeof(int));

    int *secondPointer;
    int second;

    printf("\nEnter the second number: ");
    scanf("%d", &second);
    printf("Second number selected is %d\n", second);
    secondPointer = (int *)malloc(second * sizeof(int));

    int *answerPointer;
    int answer;

    switch (operator)
    {
    case 1:
        answer = first + second;
        answerPointer = (int *)malloc(answer * sizeof(int));
        printf("\nAnswer of %d + %d is equal to %d\n", first, second, answer);
        break;
    case 2:
        answer = first - second;
        answerPointer = (int *)malloc(answer * sizeof(int));
        printf("\nAnswer of %d - %d is equal to %d\n", first, second, answer);
        break;
    case 3:
        answer = first * second;
        answerPointer = (int *)malloc(answer * sizeof(int));
        printf("\nAnswer of %d * %d is equal to %d\n", first, second, answer);
        break;
    case 4:
        answer = first / second;
        answerPointer = (int *)malloc(answer * sizeof(int));
        printf("\nAnswer of %d / %d is equal to %d\n", first, second, answer);
        break;
    default:
        printf("Invalid numbers selected.\n");
        break;
    }
    free(operatorPointer);

    free(firstPointer);
    free(secondPointer);
    
    return 0;
}