 #include <stdio.h>
 int main(void){
 float x = 9.23545672;
   printf("%f\n",x);  // float for decimals upto 6 digits
   printf("%.2f\n",x);  // .2 for 2 decimals
   
   float y=5/2;     //first 5/2 value is calcuted then kept in float box . so the output was 2.000000
   printf("%f\n",y);
   
   float z=5.0/2.0;
   printf("%f\n",z);
   
   float b=5.0/2;
    printf("%f\n",b);

   float a=5/2.0;
    printf("%f\n",a);
   //float/float=float
   //int/int=int
   //int/float=float
   //float/int=float
   return 0;
 }