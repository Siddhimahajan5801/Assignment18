#include <stdio.h>
void check_alpha_num(char s[]){
    int alpha=0, digit=0;
    
   for (int i=0; s[i]; i++){

    if ((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')) 
         alpha++;
         
    else if ((s[i]>='0' && s[i]<='9'))
         digit++;
        
   } 
   if (alpha>=1 && digit>=1)
    printf("It is a alphanumeric string ");
    else
    printf("It is not an alphanumeric string ");
}

int main(){ 
    char str[20];
 printf("Enter your string : ");
 fgets(str,20,stdin);  

 check_alpha_num(str);

return 0; 
}