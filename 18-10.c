#include <stdio.h>
#include<string.h>

void repeated_char(char *a, int size){
        int i,j;
    for( i=0; i<size; i++){
          int count=1;
        for(j=i+1; j<size; j++){
            if(a[i]==a[j] && a[i]!=' '){
            count++;  
            a[j] ='0';
         }
     }
        if (count>1 && a[i]!='0'){
        printf("%c  ", a[i]);
        } 
    }
}


int main(){ 
    
    char str[20];
    printf("Enter the string : ");
    gets(str);

    int l= strlen(str);

printf("\n\nAll the repeated characters is : \n");
repeated_char(str, l);

return 0;
}