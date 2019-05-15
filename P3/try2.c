#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
	FILE *fpd;;
	int p,x=0,sz,i=0,J,k=0,counter=0;
	char ch,chp,line[128];






fpd=fopen("try.txt","r");
if(fpd==NULL)
{
	printf("CAN NOT OPEN THE FILE :{");
}else

{
	printf("file open successfully\n");

	/*(while(!feof(fpd))
	{
	ch=fgetc(fpd);
		if(ch==' ')
{
		J=J+1;
printf("space is read %d\n",J);

}		if(ch=='\n')
		{
		   			I=I+1;
			//J=1;

printf("newline is read %d\n",I);
if(chp==ch)
{
printf("loop is going to break\n");
break;
}
	}
chp=ch;

	}*/

while(fgets(line,sizeof line,fpd)!=NULL){
    //printf("%s",line);
    while(line[i]!='\n'){
         if(line[i]== ' '){
        counter++;
    }
    i+=1;
    }
    if(line[0]=='\n')
        break;

    k+=1;

}
printf("%d%d",counter,k);
  //  sz=I*J;
//printf(" %d\t %d\t%d\t",I,J,sz);
fclose(fpd);
}
getchar();
return 0;
}
