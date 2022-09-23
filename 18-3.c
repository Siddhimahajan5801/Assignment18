#include <stdio.h>
#include<string.h>

int compare(char a[], char b[]){
    int i;
    for (i=0; (a[i]!='\0' && b[i]!='\0'); i++){

        if (a[i]!=b[i])
             return 1;
        else if (a[i]>b[i])
             return 1;
        else return -1;
    }
}

int main(){ 
    char str1[20];
printf("Enter your string 1: ");
fgets(str1,20,stdin);

    char str2[20];
printf("Enter your string 2: ");
fgets(str2,20,stdin);

int val =compare(str1, str2);

if (val==0)
   printf("The strings are same ");

   else if (val==1)
   printf("The strings are not in dictionary order ");

   else
   printf("The strings are in dictionary order ");
 
    
return 0; 
}