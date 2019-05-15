#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct a
{
	char name[20];
	struct a  *up;
	struct a *down;
	struct a *left;
	struct a *right;

};

int main()
{
	FILE *fpd;
	struct a **n,*t,b;
	int p,x,sz,I,J,j,k;
	char   ch,chp,l,u,d,r,current_location[25],move1[15],move2[15];
	n=(struct a**)malloc(20*sizeof (struct a));





fpd=fopen("p3.txt","r");
if(fpd==NULL)
{
	printf("CAN NOT OPEN THE FILE :{");
}else

{
	printf("file open successfully\n");
	I=0;
	J=0;
	x=0;



	    while(!feof(fpd)){
	       //  printf("2 while loop execute");
	ch=fgetc(fpd);
		if(ch=='\t'){



		    printf("tab %d\n",J);
		J=J+1;
		}


		if(ch=='\n')
		{
  printf("line....%d\n",I);
		    if(ch==chp){



		    x=1;
printf("\nwhile loop 2 going to break");
		    break;
		    }

			I=I+1;

			}
			chp=ch;
			if(x==1)
			break;
	    }
	  //  I=I-2;
       // J=J/(I-1);

     //   J=J-1;
      J=J-1;
       J=(J)/I+1;
       J=J-1;

                    sz=I*J;
	printf(" %d\t %d\t%d",I,J,sz);
	rewind(fpd);
	x=0;
while(!feof(fpd)){
if(x<1){
			    for (p=0;p<sz;p++)
	{
	//    printf("pis %d sz is %d",p,sz);
		n[p]=(struct a*)malloc(sizeof (struct a));
fflush(stdin);
fscanf(fpd, "%s",n[p]->name);

printf(" %s\n",n[p]->name);
x=1;
}}


   if(x==1){
       fscanf(fpd, "%s",b.name);
    fscanf(fpd, "%s",b.name);
    fscanf(fpd, "%s",b.name);
        printf("currentlocation is %s",b.name);
   }else if(x==2){
    fscanf(fpd, "%s",move1);
    fscanf(fpd, "%s",move1);
    fscanf(fpd, "%s",move1);
   printf("first move is %s",move1);
   }else{
    fscanf(fpd, "%s",move2);
    fscanf(fpd, "%s",move2);
    fscanf(fpd, "%s",move2);
   printf("second move is %s",move2);
   }

x++;
	}
fclose(fpd);


}

printf("WELL DONE..... !!!!! ;]");


    getchar();
	  return 0;

}

