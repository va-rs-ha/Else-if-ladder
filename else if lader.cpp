#include<stdio.h>
int main()
{
	printf("Enter your marks: ");
	int marks= 0;
	scanf("%d",&marks);
	if(marks>=70 && marks<=100)
    {
	  if(marks>=85)
	  printf("Grade A");
	  else
	  printf("Grade B");
	}
	else if(marks>=0 &&  marks<=69);
	{ 
	if(marks>= 55 && marks<= 69)
    printf("Grade C ");
    if(marks >= 40 && marks<= 54)
    printf("Grade D");
    if(marks>= 0 && marks<=40)
    printf("Grade F");
    }	
}
