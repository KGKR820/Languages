#include <stdio.h>
#include <string.h>
int main(){
    
// strlen
char string[67];
gets(string);
printf("%d\n",strlen(string)); // strlen for length of string
printf("%d\n",sizeof(string)); // sizeof() says size of string
printf("\n");

// strcat
char str1[50],str2[50];
gets(str1);
gets(str2);
strcat(str1,str2); // combines two words in str1(catenation)
puts(str1);
puts(str2);
printf("\n");

// strcpy
strcpy(str1,str2); // copies str2 to str1
puts(str1);
puts(str2);
printf("\n");

// strcmp
char str3[50] = "Hi";
char str4[50] = "Hi";
printf("%d\n",strcmp(str3,str4));// if two are same prints 0
printf("%d",strcmp(str3,str1));// if two are not same prints the difference between the ascii values of the first character which is different 
    return 0;
}