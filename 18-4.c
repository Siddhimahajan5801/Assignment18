#include <stdio.h>

void lower_to_upper(char s[]){
    for (int i=0; s[i]; i++){
    if (s[i]>='a' && s[i]<='z')
    s[i]=s[i]-32;  
}
printf ("String in upper case is : %s ",s);
}


int main(){ 
    char str[20];
printf("Enter your string : ");
fgets(str,20,stdin);

lower_to_upper(str);

 return 0;
}