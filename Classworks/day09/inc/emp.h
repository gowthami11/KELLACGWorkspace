#ifndef EMP_H
#define EMP_H
#include <common.h>

typedef struct empDetails
{
	int eID;
	int ephone;
	float eSalary;
	char eActive;
	char eName[BUFF];
	char eGender;
}EMP;

int addEmpDetails(EMP *);
void dispEmpAll(EMP *,int, int);
int updateEmpName(EMP *,char *);
int updateEmpPhone(EMP *,int, int);
int findEmp(EMP *,int,char *);
int delEmp(EMP *,int,int);
