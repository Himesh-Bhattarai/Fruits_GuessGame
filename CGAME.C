#include <stdio.h>
#include <string.h>

int main()
{
    char input[4];
    int count = 0;       // Counter for storing fruits
    char fruits[20][10]; // Array to store fruits

    printf("Lets the game Begin.......\n");
    printf("loading...0%%\n");
    printf("loading...25%%\n");
    printf("loading...50%%\n");
    printf("loading...75%%\n");
    printf("loading...99%%\n");
    printf("loading...100%%\n");

    printf("Choose the fruit Name on your heart.\n");

    printf("1. Apple\n");      // 13
    printf("2. Banana\n");     // 12
    printf("3. Guava\n");      // 14
    printf("4. Pineapple\n");  // 24
    printf("5. Watermelon\n"); // 23
    printf("6. Cherry\n");     // 15
    printf("7. Grapes\n");     // 25
    printf("8. Strawberry\n"); // 35
    printf("9. Orange\n");     // 34
    printf("10. Papaya\n");    // 45

    // First Phase
    printf("First phase......\n");
    printf("Apple\n");
    printf("Guava\n");
    printf("Kiwi\n");
    printf("Cherry\n");

    printf("Enter 'yes' for here or 'No' for not here: ");
    scanf("%s", input);

    if (strcmp(input, "yes") == 0)
    {
        // If the user entered 'yes', store the fruits
        strcpy(fruits[count++], "Apple");
        strcpy(fruits[count++], "Guava");
        strcpy(fruits[count++], "Kiwi");
        strcpy(fruits[count++], "Cherry");
    }
    else
    {
        printf("\n....Next phase.....\n");
        // Second Phase
        printf("2nd phase.....\n");
        printf("Banana\n");
        printf("Watermelon\n");
        printf("Pineapple\n");
        printf("Grapes\n");

        printf("Enter 'yes' for here or 'No' for not here: ");
        scanf("%s", input);

        if (strcmp(input, "yes") == 0)
        {
            strcpy(fruits[count++], "Banana");
            strcpy(fruits[count++], "Watermelon");
            strcpy(fruits[count++], "Pineapple");
            strcpy(fruits[count++], "Grapes");
        }
    }

    // third phase
    printf("\n....Next phase.....\n");
    printf("3rd phase.....\n");
    printf("Apple\n");
    printf("Strawberry\n");
    printf("Watermelon\n");
    printf("Orange\n");

    printf("Enter 'yes' for here or 'No' for not here: ");
    scanf("%s", input);

    if (strcmp(input, "yes") == 0)
    {
        strcpy(fruits[count++], "Apple");
        strcpy(fruits[count++], "Strawberry");
        strcpy(fruits[count++], "Watermelon");
        strcpy(fruits[count++], "Orange");
    }

    // fourth phase
    printf("\n....Next phase.....\n");
    printf("4th phase.....\n");
    printf("Guava\n");
    printf("Pineapple\n");
    printf("Papaya\n");
    printf("Orange\n");

    printf("Enter 'yes' for here or 'No' for not here: ");
    scanf("%s", input);

    if (strcmp(input, "yes") == 0)
    {
        strcpy(fruits[count++], "Guava");
        strcpy(fruits[count++], "Pineapple");
        strcpy(fruits[count++], "Papaya");
        strcpy(fruits[count++], "Orange");
    }

    // Fifth phase
    printf("\n....Next phase.....\n");
    printf("5th phase.....\n");
    printf("Cherry\n");
    printf("Grapes\n");
    printf("Strawberry\n");
    printf("Papaya\n");

    printf("Enter 'yes' for here or 'No' for not here: ");
    scanf("%s", input);
    if (strcmp(input, "yes") == 0)
    {

        strcpy(fruits[count++], "Cherry");
        strcpy(fruits[count++], "Grapes");
        strcpy(fruits[count++], "Strawberry");
        strcpy(fruits[count++], "Papaya");
    }

    printf("\nFruits that appear in multiple phases:\n");
    for (int i = 0; i < count; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (strcmp(fruits[i], fruits[j]) == 0)
            {
                printf("%s\n", fruits[i]);
                break; // Print the fruit once
            }
        }
    }

    return 0;
}
