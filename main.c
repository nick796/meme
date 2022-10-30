#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

	char x1;
	char x2;
	char x3;
	int x;
	int y;
	int z;
	int i=0;
	int R;

	printf("Type the first colour:\n");

	printf("The corresponding character for each colour is shown below:\n\n" );
	printf("b --> BLACK\n");
	printf("n --> BROWN\n");
	printf("r --> RED\n");
	printf("o --> ORANGE\n");
	printf("y --> YELLOW\n");
	printf("g --> GREEN\n");
	printf("a --> AZURE\n");
	printf("v --> VIOLET\n");
	printf("e --> GREY\n");
	printf("w --> WHITE\n");







scanf("%c", &x1);
	if(x1=='b' || x1=='n' || x1=='r' || x1=='o' || x1=='y' || x1=='g' || x1=='a' || x1=='v' || x1=='e' || x1=='w')
	{

	   if(x1=='b')
     	{
		x=0;
      }  else if(x1=='n')
	   {
		x=1;
	  }  else if(x1=='r')
	  {
		x=2;
	  }   else if(x1=='o')
	  {
		x=3;
	  }  else if(x1=='y')
	  {
		x=4;
	  }  else if(x1=='g')
  	  {
		x=5;
	  }  else if(x1=='a')
	  {
		x=6;
	  }  else if(x1=='v')
	  {
		x=7;
	  }  else if(x1=='e')
	  {
		x=8;
	  }  else if(x1=='w')
	  {
		x=9;
	  }


}else

   {
   	printf("Invalid character!\n");


   }




		printf("Type the second colour:\n");

	scanf("%c\n", &x2);
	if(x2=='b' || x2=='n' || x2=='r' || x2=='o' || x2=='y' || x2=='g' || x2=='a' || x2=='v' || x2=='e' || x2=='w')
{

	    if(x2=='b')
    	{
		y=0;
	    }  else if(x2=='n')
	  {
		y=1;
	  }  else if(x2=='r')
	  {
		y=2;
	  }  else if(x2=='o')
	  {
		y=3;
	  }  else if(x2=='y')
	  {
		y=4;
	  }  else if(x2=='g')
  	  {
		y=5;
	  }  else if(x2=='a')
	  {
		y=6;
	  }  else if(x2=='v')
	  {
		y=7;
	  }  else if(x2=='e')
	  {
		y=8;
	  }  else if(x2=='w')
	  {
		y=9;
	  }
     }else
 {
   	printf("Invalid character!\n");
 }

	printf("Type the third colour:\n");



	scanf("%c\n", &x3);
	if(x3=='b' || x3=='n' || x3=='r' || x3=='o' || x3=='y' || x3=='g' || x3=='a' || x3=='v' || x3=='e' || x3=='w')
	{

	    if(x3='b')
   	    {
		z=0;
    	}  else if(x3='n')
	  {
		z=1;
	  }  else if(x3='r')
	  {
		z=2;
	  }   else if(x3='o')
	  {
		z=3;
	  }  else if(x3='y')
	  {
		z=4;
	  }  else if(x3='g')
  	  {
		z=5;
	  }  else if(x3='a')
	  {
		z=6;
	  }  else if(x3='v')
	  {
		z=7;
	  }  else if(x3='e')
	  {
		z=8;
	  }  else if(x3='w')
	  {
		z=9;
	  }
   }
   else
   {
   	printf("Invalid character!\n");
   }


    R = (10*x + y)*pow(10, z);
	printf("The resistance is= %d", R);

	return 0;
}
