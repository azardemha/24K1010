#include <stdio.h>
#include <stdlib.h> 

int main() {
    int n;
    char *arr;

    printf("Enter total number of characters: ");
    scanf("%d", &n);
    n++; 

    arr = (char*)malloc(n * sizeof(char));
    printf("Enter your full name: ");
    scanf(" %[^\n]", arr);
  
    printf("Your name is: %s\n", arr);
  
    free(arr);
    return 0;
}
