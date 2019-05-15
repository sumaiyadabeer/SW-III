#include<stdio.h>
#include<conio.h>
int main ()
{
	int i,j,x,y,m,c,counter, result[50], data[3][3] ;
	char move ;




	for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("enter the element %d %d ",i+1,j+1);
		scanf("%d",&data[i][j]);

	}

}


for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("\t%d  ",data[i][j]);
	}
	printf("\n");
}

printf("enter the element to be searched");
scanf("%d",&c);


	printf("enter the no of moves\n");
	scanf("%d",&m);


for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	if(data[i][j]==c)
		{
		x=i;
		y=j;
		break;

		}

	}
}
i=x;
j=y;
if(x<=2&&y<=2)
{
	printf("element %d found at location %d %d",c,x+1,y+1);

}else
{
	printf ("element not found!!!");
}

printf("%d",j);
	result[0]  = data[x][y] ;
	for(counter=1;counter<=m;counter++)
	{
		printf("enter the direction of move\n");
		scanf(" %c",&move);
		if (move == 'l'|| move =='L')
		{
			j =j-1;
			printf("%d",j);
			printf(" u r at %d\n",data[i][j]);
		}else if (move == 'r'|| move =='R')
		{
			j = j+1;
			printf("%d",j);
				printf(" u r at %d\n",data[i][j]);
		}else if (move == 'u'|| move =='U')
		{
			i =i-1;
			printf("%d",i);
				printf(" u r at %d\n",data[i][j]);
		}else if (move =='d'|| move =='D')
		{
			i =i+1;
			printf("%d",i);
				printf(" u r at %d\n",data[i][j]);
		}
			//result[counter] = data[i][j];
		}

		/*for(counter=0;counter<= m;counter++)
		{
			if (counter == 0)
			{
				printf ("initial location is %d\n",result[0]);
			}else
			{
				printf("location after %dth move is %d\n",counter,result[counter]);
			}

		}*/
    getch();
	return 0;

}
