#include <stdio.h>
#include<string.h>

void palindrome(int l, char *str){
    int i,j,count=0;

    for (i=0; i<l/2; i++){
    if (str[i]==str[l-1-i]){
        count++;
    }
 }
    if (count==l/2)
    printf("\nThe given string '%s' is a palindrome\n", str);

    else
   printf("\nThe given string '%s' is not a palindrome\n", str);

}

int main(){ 
    char string[20];
    
 printf("Enter your string : ");
 gets(string); 

 int length=strlen(string);

//To check whether a string is palindrome or not
 palindrome(length, string);
 
return 0; 
}
