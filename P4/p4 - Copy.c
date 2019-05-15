#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<math.h>


struct element {
    char ename[10];

    };

int main()
{
FILE *fpi;
FILE *fpo;




int counter,i,j,k,o1,o2,x,p,op,dm1,dm2,y,a;
char un[70],s1[200],s2[200],d1[50],d2[50],line[200],ch,arr[10],arr2[10];
struct element **n ,**m, **r;
n=(struct element**)malloc(20*sizeof (struct element));
m=(struct element**)malloc(20*sizeof (struct element));
r=(struct element**)malloc(20*sizeof (struct element));
fpi=fopen("P4in.txt","r");

fpo=fopen("P4output.txt","w");

if(fpo==NULL){
    printf("flie not open.\n");
    }else{
      printf("flie is open.\n");
        }


if(fpi==NULL)
{
	printf("CAN NOT OPEN THE FILE :{");
}else{


    printf("file open successfully");
    i=0;
    j=0;
    k=0;






for(i=0;i<10;i++){
    fgets(line,sizeof line,fpi);
    }
   if(line[0]=='1'){
       o1=1;
           }else if(line[0]=='2'){
        o1=2;
           }else if(line[0]=='3'){
        o1=3;
           }else if(line[0]=='4'){
        o1=4;
           }else if(line[0]=='5'){
        o1=5;
           }else{
         // printf("please choose proper set");
           }


   if(line[2]=='1'){
   o2=1;
        } else if(line[2]=='2'){
     o2=2;
        }  else if(line[2]=='3'){
     o2=3;
        }  else if(line[2]=='4'){
     o2=4;
        }  else if(line[2]=='5'){
     o2=5;
        }  else {
    printf("please choose proper set");
        }

   printf("o1 is %d\to2 is %d",o1,o2);

   if(line[1]=='^'){
       op=1;

       } else if(line[1]=='U'){
      op=2;
       } else if(line[1]=='-'){
      op=3;
       } else if(line[1]=='w'&&line[0]=='1'){
      op=4;
       } else {
        printf("operation is not defined");
       }


rewind(fpi);
i=0;
while(fgets(line,sizeof line,fpi)!=NULL){


    i+=1;
    if(i==o1){
    strcpy(s1,line);
    // printf("%s\n.....s1",s1);
    }

    if(i==o2){
    strcpy(s2,line);
     //printf("%s\n...... s2",s2);
    }
}


/*fgets(line,sizeof line,fpi);
//fgets(line,sizeof line,fpi);
printf("%s\n",line);
for(i=0;i<4;i++){
    ch=line[i];
    printf("%c ",ch);
    }*/

printf("%s\n",s1);
printf("%s\n",s2);
ch='a';

p=0;
for(i=3;ch!='}';i++)
{

//printf("loop1");
//x=0;
ch=s1[i];

if(ch==','|| ch=='}')
 {
 //	if(i>25)
 //	break;
     n[k]=(struct element*)malloc(sizeof (struct element));
    printf("i is %d\n",i);
     strcpy((n[k]->ename),arr);

     printf("%s  in strtr %d\n",arr,i);
if(ch=='}')
break;

     k++;
     p=0;
     i++;
     ch=s1[i];
     
 }
 

    // p=1;

arr[p]=ch;
//printf("%c\n",ch);

p++;
}
dm1=k+1;
ch='a';
p=0;
/*
for(i=3;ch!='}';i++)
{

//printf("loop1");
//x=0;
ch=s2[i];

printf("\t %c",ch);

if(ch==','|| ch=='}')
 {
     m[j]=(struct element*)malloc(sizeof (struct element));
    //printf("if cond");
     strcpy((m[j]->ename),arr2);

printf(" %s  in strtr\n",arr2);
if(ch=='}')
break;

     j++;
     p=0;
     i++;
     ch=s2[i];
 }

arr2[p]=ch;
printf("%c\n",ch);

p++;
}
*/
dm2=j+1;


	fclose(fpi);
	printf("f8ile is closed");
}
printf("dimension r %d\t%d",dm1,dm2);
fprintf(fpo ,"\{  ");

    fprintf(fpo, "\n");
    fprintf(fpo ," }  ");
    fclose(fpo);




getch();
return 0;
}
