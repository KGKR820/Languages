#include <stdio.h>
int main(){
FILE *fptr;

/* 
w - Writes to a file
a - Appends new data to a file
r - Reads from a file 
*/

// creates a file named (file.txt) and opens it
fptr = fopen("file.txt","w");
// if you wanna create and open a file at a specific location
// ftr = fopen("C://file directory//file.txt","w");

// writes the text into the file
fprintf(fptr,"Hi Guys");

fopen("file.txt","a"); // adds data which is mentioned below
fprintf(fptr,"Welcome");
return 0;
}