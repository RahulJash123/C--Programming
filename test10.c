#include<stdio.h>
#include<string.h>

int main(){
    int i;
    char s[100];
    printf("Enter a sentence: ");
    scanf("%d", s);

    for(int i=0; i!= '\0'; i++){
        printf("%s", s);
        if(s[i] == ' '){
            printf("\n");
        }
    }
}


