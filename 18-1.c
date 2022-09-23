#include <stdio.h>

int string_length(char s[]){
        int i;
    for ( i=0; s[i]; ++i);
    return (i);   
}


int main(){ 
     char str[20];
    printf("Enter your string :");
    fgets(str,20,stdin);

    printf("Length of the string is : %d ", string_length(str));
      
return 0; 
}