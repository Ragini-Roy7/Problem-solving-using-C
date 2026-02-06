// #include <stdio.h>
// int main()
// {
//     char s[] = "racecar";
//     char t[] = "carrace";
//     int found;
//     int s_len=0, t_len=0;
//     while(s[s_len!='\0'])
//     s_len++;

//     while(t[t_len!='\0'])
//     t_len++; 
//     if(s[s_len]!=t[t_len]) {
//         printf("Not valid anagram\n");
//         return 0;
//     }
//     for(int i=0;i<s[i]!='\0';i++){
//         found=0;  //har naye s[i] element ke liye search karna zaroori hai
//         for(int j=0;j<t[j]!='0';j++) {
//             if(s[i]==t[j]) {

//             found=1;
//             t[j]= '#';
//             break;
//         }
//     }
//     if(!found) {
//         printf("Not anagram..\n");
//         return 0;
//     }

// }

// }
#include <stdio.h>

int main()
{
    char s[] = "racecar";
    char t[] = "carrace";
    int found;
    int s_len = 0, t_len = 0;

    while (s[s_len] != '\0')
        s_len++;

    while (t[t_len] != '\0')
        t_len++;

    if (s_len != t_len) {
        printf("Not valid anagram\n");
        return 0;
    }

    for (int i = 0; s[i] != '\0'; i++) {
        found = 0;
        for (int j = 0; t[j] != '\0'; j++) {
            if (s[i] == t[j]) {
                found = 1;
                t[j] = '#';   // mark used
                break;
            }
        }
        if (!found) {
            printf("Not anagram..\n");
            return 0;
        }
    }

    printf("Valid anagram!\n");
    return 0;
}
