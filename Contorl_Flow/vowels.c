// Accept the character from user and check is vowels or not?
#include<stdio.h>
int main()
{
    char c;
    printf("Enter the charcter to check is vowel or not:-");
    scanf("%c",&c);

    switch (c)
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':printf("You have entered Vowel character");
             break;
    default: printf("You have entered another character");
        break;
    }
    return 0;
}