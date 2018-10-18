#include<stdio.h>
#include<string.h>
int main()
{
	struct student
	{
		int rollno;
		char name[50];
		float fees;
		char dob[50];
	}stud[50];
	int n,i,x,a;
	scanf("%d",&n);
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		printf("enter rollno,name;fees,dob of student %d\n",i+1);
		scanf("%d",&stud[i].rollno);
		fflush(stdin);
		gets(stud[i].name);
		fflush(stdin);
		scanf("%f",&stud[i].fees);
		fflush(stdin);
		gets(stud[i].dob);
	}
	for(i=0;i<n;i++)
	{
		if(x==stud[i].rollno)
		{
			a=i;
		}
	}
	printf("enter info to upadte\n");
	scanf("%d",&stud[a].rollno);
	fflush(stdin);
	gets(stud[a].name);
	scanf("%f",&stud[a].fees);
	fflush(stdin);
	gets(stud[a].dob);
	printf("updated info\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",stud[i].rollno);
		puts(stud[i].name);
		printf("%f\n",stud[i].fees);
		puts(stud[i].dob);
	}
}

