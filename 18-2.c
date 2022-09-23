#include <stdio.h>
#include<string.h>

void reverse_string(char str[]){
    int i;
    char temp;

        int n=strlen(str);
        for (i=0; i<n/2; i++){

            temp=str[i];
            str[i]=str[n-1-i];
            str[n-1-i]=temp;
        }
    printf("%s",str);
}  

int main(){ 

    char s[20];
    printf("Enter your string :");
    fgets(s,20,stdin);
    
    reverse_string(s);

return 0; 
}