#include <stdio.h>
 int main(){
int i=6,j=5, k = 0;
if(i > j == k) printf("%d %d %d", i++, ++j, --k); 
else printf("%d %d %d", i, j, k);
return 0;
}