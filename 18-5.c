#include <stdio.h>

void upper_to_lower(char str[]){
    for (int i=0; str[i]; i++){
    if (str[i]>='A' && str[i]<='Z')
    str[i]=str[i]+32;
    
}
printf ("String in lower case is : %s ",str );
}

int main(){ 
   char s[20];
printf("Enter your string : ");
fgets(s,20,stdin);  

upper_to_lower(s);
return 0; 
}