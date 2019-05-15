#include <stdio.h>
int main()
{
int i,j,x,y,b,m,counter;
char data [3][3],c, mov,result[50],*res,*k,*s,*t;
for(i=0;i<3;i++) //storing array
{
	for(j=0;j<3;j++)
	{
		printf("enter the element %d %d ",i+1,j+1);
		scanf("%c",&data[i][j]);

	}

}


for(i=0;i<3;i++) //printing array
{
	for(j=0;j<3;j++)
	{
		printf("\t%c  ",data[i][j]);
	}
	printf("\n");
}

printf("enter the element to be searched");
scanf("%c",&c);

b=0;
for(i=0;i<3;i++) //search initial location
{
	for(j=0;j<3;j++)
	{
	 if(data[i][j]==c)
		{

		t=&data[i][j];
		result[0]=*t;

		b=1;
		break;
		}else
		{
			result[0]=100;

		}

	}
	if(b==1)
			{
			break;
			}

}

k=&data[0][0];
t=(i*3+j)-k;
printf("\n%u",t);


if(result[0]!=100)
{
	printf("enter the no of move");
	scanf("%d",&m);

	for(counter=1;counter<=m;counter++)
	{
		printf("enter the direction of %d move\n",m);
		scanf(" %c",&mov);
		t=&data[i][j];
		t=t-k;
		s=t;

		if (mov == 'l'|| mov =='L')
		{   if(t%3 !=0)
            {
                t=t-1;
            }else
            {
                t=100;
            }

		}else if (mov == 'r'|| mov =='R')
		{
			if((t+1)%3 !=0)
            {
                t=t+1;
            }else
            {
                t=101;
            }
		}else if (mov == 'u'|| mov =='U')
		{
			if(t>3)
            {
                t=t-3;
            }else
            {
                t=101;
            }
		}else if (mov =='d'|| mov =='D')
		{
			if(t<6)
            {
                t=t+3;
            }else
            {
                t=101;
            }
		}else
		{
			t=102;
		}



            if(t!=101 && t!=102)
            {
             add= &data[i][j]+k;
			result[counter] = *add ;
            } else if (t==100)
            {
             result[counter] = 101;
             t=s;
            }else
            {
             result[counter] = 102 ;
              t=s;
            }


		}
    for(counter=0;counter<=m;counter++)
    {
     if(result[counter]==101||result[counter]==102)
        {
            if(result[counter]==101)
            {
             printf("sorry path is blocked");
            }else
            {
             printf("move not defind");
            }


        }else
        {
            if(counter==0)
            {
              printf("initial location is%d",result[counter]);
            }else
            {
                printf("location after %d move is %d" ,m,result[counter]);
            }
        }


    }





}else
{
    printf("initial location is not present");
}

getch();
return(0);
}

