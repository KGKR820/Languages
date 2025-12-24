#include <stdio.h>
#include <string.h>
int main() {
    typedef struct book {
        char title[100];
        char author[100];
        float price;
    } book;

    book b[3];
    book *ptr = &b[0];

    for (int i = 0; i < 3; i++) {
        printf("Title %d -> ", i + 1);
      scanf("%[^\n]%*c",(ptr+i) -> title);

        printf("Author %d -> ", i + 1);
        scanf("%[^\n]%*c",(ptr+i) -> author);
       

        printf("Price %d -> ", i + 1);
        scanf("%f", &((ptr + i)->price));
        while(getchar() != '\n');
        printf("\n");
    }

    for (int i = 0; i < 3; i++) {
        puts((ptr + i)->title);
        puts((ptr + i)->author);
        printf("Price -> %.2f\n", (ptr + i)->price);
    }

    return 0;
}
