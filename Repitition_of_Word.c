#include <stdio.h>

int repitition(char arr[]) // It is the function which is called.
{
    int count = 0;
    printf("Enter the Sentence : "); // It takes the sentence
    fgets(arr, 100, stdin);

    char ch;
    printf("Enter the character which repitition you want : "); // It takes the character
    scanf("%c", &ch);

    for (int i = 0; arr[i] != '\0'; i++) // It is used to check the repitition.
    {
        if (arr[i] == ch)
        {
            count++;
        }
    }
    printf("The character %c is repeated %d times", ch, count);
}

int main() // It is calling function.
{
    char arr[100];
    repitition(arr);
    return 0;
}