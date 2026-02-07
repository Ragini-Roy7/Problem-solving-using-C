//A hashmap (also called a hash table) is a data structure that lets you store and retrieve values efficiently using keys
//A hash function converts a key (like a string or number) into an index.
// That index points to a "bucket" in an array where the value is stored.

// This makes lookups, insertions, and deletions very fast—on average O(1) time.
//while searching: use hash key->go to index directly-> to retrieve the value
//to handle collisions if a data points to the same index->chaining store multiple values in linked list at that index or use open addressing-> find another empty spot in array

//group anagrams-> approach first: using cateogrize by sorting
//group anagrams->using frequency count method
//Define a hash function for strings (based on their sorted signature).
// Sort each word to get its signature.

// Insert into hashmap:

// Key = sorted signature.

// Value = list of original words.

// Collect groups from hashmap values.

#include <stdio.h>
#include <string.h>

#define MAX 100

struct Group {
    char key[200];
    char words[MAX][50];
    int count;
};

int main() {
    char strs[][50] = {"eat", "tea", "tan", "ate", "nat", "bat"};
    int n = 6;

    struct Group groups[MAX];
    int gCount = 0;

    for (int i = 0; i < n; i++) {
        int freq[26] = {0};

        // Step 1: build frequency
        for (int j = 0; strs[i][j] != '\0'; j++) {
            freq[strs[i][j] - 'a']++;
        }

        // Step 2: convert freq to string key
        char key[200] = "";
        for (int k = 0; k < 26; k++) {
            char temp[10];
            sprintf(temp, "%d#", freq[k]);
            strcat(key, temp);
        }

        // Step 3: search if key exists
        int found = -1;
        for (int g = 0; g < gCount; g++) {
            if (strcmp(groups[g].key, key) == 0) {
                found = g;
                break;
            }
        }

        // Step 4: insert
        if (found == -1) {
            strcpy(groups[gCount].key, key);
            strcpy(groups[gCount].words[0], strs[i]);
            groups[gCount].count = 1;
            gCount++;
        } else {
            strcpy(groups[found].words[groups[found].count], strs[i]);
            groups[found].count++;
        }
    }

    // Print result
    for (int i = 0; i < gCount; i++) {
        printf("[ ");
        for (int j = 0; j < groups[i].count; j++) {
            printf("%s ", groups[i].words[j]);
        }
        printf("]\n");
    }

    return 0;
}


// #include <stdio.h>
// #include <stdlib.h>
// #include <String.h>

// #define SIZE 100
// typedef struct Node{
//     char *word;
//     struct Node *next;
// } Node; //creating a linked list to store words in grp


// //hashmap creating
// typedef struct Entry{
//     char *key; //to match key with values
//     Node *words;
//     struct Entry *next;
// }Entry;

// Entry *hashTable[SIZE]; //size of hashtable declared

// unsigned int hash(char *str){
//     unsigned int h=0;
//     while(*str)h= h*31 + *str++; //to generate hashcode formula
//     return h%SIZE; //dividing the hash by mod 10 we get remainder, this remainder will be used for creating index within the bucket list 
// }
// //sorting to get signature where we can match it with org string

// char * sortString(char *str){
//     char *s=strdup(str);
//     int n=strlen(s);
//     for(int i=0;i<n-1;i++){
//         for(int j=j+1;j<n;j++){
//             if(s[i]>s[j]) {
//                 //swap
//                 char tmp =s[i];
//                 s[i]= s[j];
//                 s[j]=tmp;
//             }
//         }
//     }
//     return s;
// }
// //inserting words into created hashmaps
// void insert(char *word){
//     char *signature= sortString(word);
//     unsigned int idx= hash(signature);

//     Entry *entry= hashTable[idx];
//     while(entry){
//         if(strcmp(entry->key,signature)==0){
//             Node *newNode = malloc(sizeof(Node));
//             newNode->word = strdup(word); newNode->next = entry->words; entry->words = newNode; free(signature); return;

//         }
//         entry= entry->next;
//     }
//     //new entry 
//     entry = malloc(sizeof(Entry));
//      entry->key = signature; 
//      entry->words = NULL;
//       entry->next = hashTable[idx]; 
//       hashTable[idx] = entry; Node *newNode = malloc(sizeof(Node)); newNode->word = strdup(word); newNode->next = entry->words; entry->words = newNode;
    
// }
// // Print groups 
// void printGroups() { 
//     for (int i = 0; i < SIZE; i++) 
//     { Entry *entry = hashTable[i];
//          while (entry) { Node *node = entry->words; printf("[");
//              while (node) 
//              { printf("\"%s\"", node->word);
//                  if (node->next) 
//                  printf(", "); node = node->next; } 
//                  printf("]\n"); 
//                  entry = entry->next; 
//                 } 
//             }
//          }
//          int main() { 
//             char *strs[] = {"act","pots","tops","cat","stop","hat"};
//              int n = sizeof(strs)/sizeof(strs[0]); 
//              for (int i = 0; i < n; i++) { 
//                 insert(strs[i]); 
//             } 
//             printGroups();
//              return 0;
//              }