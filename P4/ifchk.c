#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
int main ()
 {

     int i,j,pw,k,a,counter;
 int pwr[20],res[20];
 	pw=pow(2.0,4.0);
 	printf("power is%d\n",pw);

for(j=1;j<pw;j++)
{
    i=0;
    k=j;
//  printf("\n");

    while(j>0)
    {
    pwr[i]=j%2;

    i++;
    j=j/2;


    }
    for(counter=i;counter<4;counter++){
        pwr[counter]=0;
        }

j=k;

   for(k=0;k<4;k++)
    {

   printf("%d ",pwr[k]);

    }printf("\n");



}

 	getch();
return 0;

 }
