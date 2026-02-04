#include <stdio.h>

int main()
{
    FILE *fp = fopen("Palindrome.txt", "w");
    if (fp == NULL)
    {
        perror("Error opening file.");
        return 1;
    }

    char s[100] = "aba";

    // Manually find length
    int len = 0;
    while (s[len] != '\0')
    {
        len++;
    }

    // Build reversed string by iterating backwards and concatenating each substring 
    //c does not have strings data type
    //using char[] with "\0" , can use another loop j
    //rev[j] + "\0" -> rev[j] = '\0';
    char rev[100];
    int j = 0;
    for (int i = len - 1; i >= 0; i--)
    {
        rev[j++] = s[i];
    }
    rev[j] = '\0';

    // Check if palindrome by comparing original and reversed
    int is_palindrome = 1;
    for (int i = 0; i < len; i++)
    {
        if (s[i] != rev[i])
        {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome)
    {
        fprintf(fp, "%s is a palindrome.\n", s);
        printf("%s is a palindrome.\n", s);
    }
    else
    {
        fprintf(fp, "%s is not a palindrome.\n", s);
        printf("%s is not a palindrome.\n", s);
    }

    fclose(fp);
    return 0;
}
