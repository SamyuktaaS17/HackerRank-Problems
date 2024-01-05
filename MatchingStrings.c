#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void matchingStrings(char input[1000][1000], char query[1000][1000], int count[1000], int n1, int n2) {
    for (int i = 0; i < n2; i++) {
        for (int j = 0; j < n1; j++) {
            if (!strcmp(input[j], query[i])) {
                count[i]++;
            }
        }
    }
}

int main() {
    char input[1000][1000];
    char query[1000][1000];
    
    int n1, n2;
    scanf("%d", &n1);
    for (int i = 0; i < n1; i++) scanf("%s", input[i]);
    scanf("%d", &n2);
    for (int i = 0; i < n2; i++) scanf("%s", query[i]);
    
    int count[1000] = {0};
    matchingStrings(input, query, count, n1, n2);
    
    for (int i = 0; i < n2; i++) printf("%d\n", count[i]);
    
    return 0;
}
