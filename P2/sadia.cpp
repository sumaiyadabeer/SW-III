#include<iostream.h>
#include<stdlib.h>
#include<string.h>
#include<fstream.h>
#include<stdio.h>
#include<conio.h>
		     //program to take data form a file and search a data and the rearranging the linked list
typedef struct node_type        //defining structure
{
 char data[30];
 struct node_type *next;
}node;
typedef node *list;

class txtList
{
 public:
 void createList()  //method to read a file and create linked list
 {
// clrscr();
 int i,j=2;
 char str[30],str1[30];
 ifstream info("D.txt");
 list head,tail,pre;
 head=tail=pre=NULL;
 while(!info.eof())       //loop to read each line of file in node of a linked list
 {
  tail=(list)malloc(sizeof(node));
  if(j==2)
  {
   head=tail;
   j++;
  }
  info.getline(str,30);
  i=0;
  while(str[i]!=NULL)
  {
   tail->data[i]=str[i];
   i++;
  }
  puts(tail->data);
  tail->data[i]=NULL;
  tail->next=NULL;
  pre->next=tail;
  pre=tail;
 }
 search(head);   //calling function search
}

 public:
 void search(list start) //function to search a particular data
 {
  list ss;
  ss=start;
  char s[30];
  cout<<"enter the value to be searched\n";
  cin>>s;
  int i=0,k=0;
  while(start!=NULL)
  {
   k++;
   if(strcmp(start->data,s)==0)
   {
    i++;
    break;
   }
   start=start->next;
  }
  if(i==1)
  {
   cout<<"Data found\n";
   arrange(ss,s,k);         //calling method arrange if data found
  }
  else
  {
   cout<<"data not found\n";
   cout<<"linked list need not be arranged\n";
  }
 }
 void arrange(list arra,char s1[30],int c)  //metod to arrange list when data is found
 {
  list arr1=arra;
  cout<<"arranged list is \n";
  int k=0;
  char ch[30],ch1[30];
  strcpy(ch,arra->data);
  strcpy(arra->data,s1);
  puts(arra->data);
  int i;
  arra=arra->next;
  for(i=1;i<c;i++)
  {
  strcpy(ch1,arra->data);
  strcpy(arra->data,ch);
  puts(arra->data);
  arra=arra->next;
  strcpy(ch,ch1);
  }
  while(arra!=NULL)   //displaying arranged list
  {
  puts(arra->data);
  arra=arra->next;
  }
 }
};

void main()
{
 txtList b;       //creating object of class
 b.createList(); // calling method through object
 getch();
}
