// #include <stdio.h>
// #include <string.h>
// void swap(char *a,char *b){
//     char t=*a;
//     *a=*b;
//     *b=t;
// }
// int isAnagramPossible(char a[],char b[]){
//     for(int i=0;a[i]!='\0';i++){
//         if(a[i]==b[i]) {
//             return 0;
//         }
//     }
// }

// int isEqual(char a[],char b[]){
//     for(int i=0;a[i]!='\0';i++){
//         if(a[i]!=b[i])
//          printf("No Anagram Possible");
//            return 0;
//     }
   
// }

// int isAnagramBySwap(char s1[],char s2[]){
//     int n=strlen(s1);
//     if(n!=strlen(s2))
//     return 0;
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             swap(&s1[i],&s1[j]);
//             //loop se iteration ho rha i se pure arr traverse 
//             if(isAnagramPossible(s1,s2))
//             return 1;

//             //backtrack
//             swap(&s1[i], &s2[j]);


//         }
//     }
//     return 0;
// }
// int main(){
//     char strs[]={"act","pots","tops,","cat", "stop","hat" };
//      int n= sizeof(strs)/sizeof(strs[0]);
//     //strs=[]= {["hat"], ["act", "cat"], ["stop", "pots", "tops"]]
//    for(int i=0;strs[i]!='\0';i++){
//     for(int j=i+1;strs[j]!='\0';j++){
//         //terminated by null char
//          if(isAnagramBySwap(strs[i],strs[j])) {
//             printf("%s and %s are anagram\n",strs[i],strs[j]);

//          }
       
//     }
//    }
// }
#include <stdio.h>
#include <string.h>

void swap(char *a, char *b) {
    char t = *a;
    *a = *b;
    *b = t;
}

int isEqual(char a[], char b[]) {
    for (int i = 0; a[i] != '\0'; i++)
        if (a[i] != b[i]) return 0;
    return 1;
}

int isAnagramBySwap(char s1[], char s2[]) {
    int n = strlen(s1);
    if (n != strlen(s2)) return 0;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            swap(&s1[i], &s1[j]);

            if (isEqual(s1, s2))
                return 1;

            swap(&s1[i], &s1[j]); // backtrack
        }
    }
    return 0;
}

int main() {
    char a[] = "act";
    char b[] = "cat";

    if (isAnagramBySwap(a, b))
        printf("Anagram\n");
    else
        printf("Not Anagram\n");
}
