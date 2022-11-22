#include <emp.h>

int addEmpDetails(EMP *)
{
	printf("\n=====Enter the Details of the Employee=======\n ");
	printf("\nID");
	scanf("%d",&e->eID);
	printf("\n\tName: ");
	scanf("%s", e->eName);
	getchar();
	printf("\n\tGender: ");
	scanf("%c",&e->eGender);
	printf("\n\tphone: ");
	scanf("%d",&e->ephone);
	printf("\n\tSalary: ");
	scanf("%f" ,&e->esalary);
	e->eActive = '1'; // '1' -> Active , '0' -> inactive
}

void dispEmpAll(EMP *e,int Cap, int flag)
{
	int i;
	printf("\n\t=====Employee Details are=====\n");
	if(flag==1)
		Cap = 1;
	for(i=0;i<Cap;i++)
	{
		if(e->eActive == '1')
		{
			printf("\n\t===========================\n");
			printf("\n\tID: %d", e->eID);
			printf("",

	


