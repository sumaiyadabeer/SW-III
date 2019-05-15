#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<math.h>



int main()
{
FILE *fpi;
FILE *fpo;




int counter,i,j,k,l,set_A,set_B,set_C,set1,set2,pw;

char line[200],array[15],ch,chn,pwr[10];


fpi=fopen("p5input.txt","r");
fpo=fopen("p5output.txt","w");
if(fpo==NULL)
{
	printf("output CAN NOT OPEN THE FILE :{");
}

if(fpi==NULL)
{
	printf("CAN NOT OPEN THE FILE :{");
}else{
    printf("file open successfully\n");

  fgets(line,sizeof line,fpi);
  printf("%s",line);
  k=0;
  for(counter=0;counter<30;counter++)
  {
  	if(counter%2){
  		array[k]=line[counter+2];
  	k++;
  	}
  	if(line[counter+3]=='}'){
  				  	k--;
  		  	break;
  	}
  }
   //printf("%d\n",k);

 for(counter=0;counter<k;counter++){

 	printf("%c\t",array[counter]);
 }


 ch=fgetc(fpi);
 ch=fgetc(fpi);
 ch=fgetc(fpi);
 ch=fgetc(fpi);


 printf("%c\t",ch);

set_A=0;
for(i=0;ch!='\n';i++){

 for(counter=0;counter<k;counter++)	{
 if(array[counter]==ch){

 	set_A=set_A+pow(2,counter);
 	printf("set_A is %d\n",set_A);
 }
 }
  ch=fgetc(fpi);
  ch=fgetc(fpi);

}
printf("set_A is %d\n",set_A);

 ch=fgetc(fpi);
 ch=fgetc(fpi);
 ch=fgetc(fpi);
 ch=fgetc(fpi);


 printf("%c\t",ch);
 set_B=0;
for(i=0;ch!='\n';i++){

 for(counter=0;counter<k;counter++)	{
 if(array[counter]==ch){

 	set_B=set_B+pow(2,counter);
 	printf("set_B is %d\n",set_B);
 }
 }
  ch=fgetc(fpi);
  ch=fgetc(fpi);

}
printf("set_B is %d\n",set_B);

 ch=fgetc(fpi);
 ch=fgetc(fpi);
 ch=fgetc(fpi);
 ch=fgetc(fpi);


 printf("%c\t",ch);
 set_C=0;
for(i=0;ch!='\n';i++){

 for(counter=0;counter<k;counter++)	{
 if(array[counter]==ch){

 	set_C=set_C+pow(2,counter);
 	printf("set_C is %d\n",set_C);
 }
 }
  ch=fgetc(fpi);
  ch=fgetc(fpi);

}
printf("set_C is %d\n",set_C);



  fgets(line,sizeof line,fpi);
  fgets(line,sizeof line,fpi);
  printf("%s\n",line);
  if(line[0]=='A')
  set1=set_A;
  if(line[0]=='B')
  set1=set_B;
  if(line[0]=='C')
  set1=set_C;
  if(line[2]=='A')
  set2=set_A;
  if(line[2]=='B')
  set2=set_B;
  if(line[2]=='C')
  set2=set_C;

  printf("%d\t%d\n",set1,set2);


//intersction...........
	fprintf(fpo,"\n");
	fprintf(fpo,"\n");
	fprintf(fpo,"......INTERSECTION.........");
	fprintf(fpo,"\n");
	fprintf(fpo,"\n");
	fprintf(fpo,"{");
j=set1&set2;
printf("\nj is %d\n",j);
for(i=0;i<k;i++)
{	if(j%2){
		printf("%c\t",array[i]);
		fprintf(fpo,"%c\t",array[i]);
	}
j=j/2;
}
	fprintf(fpo,"}");
//union...................
    fprintf(fpo,"\n");
	fprintf(fpo,"\n");
	fprintf(fpo,"\n...........UNION...........");
	fprintf(fpo,"\n");
	fprintf(fpo,"\n");
	fprintf(fpo,"{");

j=set1+set2-(set1&set2);
printf("\nj is %d\n",j);

for(i=0;i<k;i++)
{	if(j%2){
		printf("%c\t",array[i]);
		fprintf(fpo,"%c\t",array[i]);
	}
j=j/2;
}
	fprintf(fpo,"}");
//minus................
	fprintf(fpo,"\n");
	fprintf(fpo,"\n");
	fprintf(fpo,"\n............MINUS...........");
	fprintf(fpo,"\n");
	fprintf(fpo,"\n");
	fprintf(fpo,"{");
j=set1-(set1&set2);
printf("\nj is %d\n",j);
for(i=0;i<k;i++)
{	if(j%2){
		printf("%c\t",array[i]);
     	fprintf(fpo,"%c\t",array[i]);
	}
j=j/2;
}
	fprintf(fpo,"}");
//powerset......
    fprintf(fpo,"\n");
	fprintf(fpo,"\n");
	fprintf(fpo,"\n.............POWER SET..........");
	fprintf(fpo,"\n");
	fprintf(fpo,"\n");
	fprintf(fpo,"{ \n");
printf("\n");
l=0;
j=set1;
for(i=0;i<k;i++)
{	if(j%2){
	pwr[l]=array[i];
	l++;
	}
j=j/2;
}
for(i=0;i<l;i++)
{
	printf("%c\t",pwr[i]);
}
pw=pow(2,l);
fprintf(fpo,"{");
for(i=0;i<pw;i++)
{
	for(j=0;j<l;j++)
	{

	if(i&(1<<j)){
	printf("%c\t",pwr[j]);
	fprintf(fpo,"%c",pwr[j]);

	}
}
	printf("\n");
		fprintf(fpo,"}");
	fprintf(fpo,"\n");
	if(i!=pw-1)
		fprintf(fpo,"{");
}
	fprintf(fpo,"}");
 	fclose(fpi);
	printf("\n......................file is closed..................");
}





fclose(fpo);
getch();
return 0;
}
