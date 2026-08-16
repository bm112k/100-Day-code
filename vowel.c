
# include <stdio.h>
int main()
{
    char ch;

    printf("Enter the given alphabet :");
    scanf("%c",&ch);

    switch (ch){
        case 'A':
        case 'a':
        printf("The given alphabet is a vowel");
        break;
        case 'E':
        case 'e':
        printf("The given alphabet is a vowel");
        break;
        case 'I':
        case 'i':
        printf("The given alphabet is a vowel");
        break;
        case 'O':
        case 'o':
        printf("The given alphabet is a vowel");
        break;
        case 'U':
        case 'u':
        printf("The given alphabet is a vowel");
        break;
        default: printf("The given alphabet is not a vowel"); 
    }
    return 0;
}
