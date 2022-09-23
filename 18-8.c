#include <stdio.h>

int words_count(char str[]){
     int count=1; 

    for (int i=0; str[i]!='\0'; i++){
    if (str[i]==' ' && str[i+1]!=' ')
    count++;
 }
    return count;
}

int main(){ 

    char s[30];
 printf("Enter your string : ");
 fgets(s,30,stdin);  
 
 printf("The total number of words in the given string is : %d", words_count(s));

return 0; 
}