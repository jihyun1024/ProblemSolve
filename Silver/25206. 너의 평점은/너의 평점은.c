#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

typedef struct SUBJECT
{
	char name[50];
	double credit;
	char grade[2];
}SUBJECT;

int main()
{
	SUBJECT subjects[20] = { 0, };
	double sumFin = 0;
	double sumCredit = 0;

	for (int cnt_i = 0; cnt_i < 20; cnt_i++)
	{
		scanf_s("%s %lf %s", subjects[cnt_i].name, &subjects[cnt_i].credit, subjects[cnt_i].grade);

		if (strcmp(subjects[cnt_i].grade, "A+") == 0)
		{
			sumFin += subjects[cnt_i].credit * 4.5;
			sumCredit += subjects[cnt_i].credit;
		}
		else if (strcmp(subjects[cnt_i].grade, "A0") == 0)
		{
			sumFin += subjects[cnt_i].credit * 4.0;
			sumCredit += subjects[cnt_i].credit;
		}
		else if (strcmp(subjects[cnt_i].grade, "B+") == 0)
		{
			sumFin += subjects[cnt_i].credit * 3.5;
			sumCredit += subjects[cnt_i].credit;
		}
		else if (strcmp(subjects[cnt_i].grade, "B0") == 0)
		{
			sumFin += subjects[cnt_i].credit * 3.0;
			sumCredit += subjects[cnt_i].credit;
		}
		else if (strcmp(subjects[cnt_i].grade, "C+") == 0)
		{
			sumFin += subjects[cnt_i].credit * 2.5;
			sumCredit += subjects[cnt_i].credit;
		}
		else if (strcmp(subjects[cnt_i].grade, "C0") == 0)
		{
			sumFin += subjects[cnt_i].credit * 2.0;
			sumCredit += subjects[cnt_i].credit;
		}
		else if (strcmp(subjects[cnt_i].grade, "D+") == 0)
		{
			sumFin += subjects[cnt_i].credit * 1.5;
			sumCredit += subjects[cnt_i].credit;
		}
		else if (strcmp(subjects[cnt_i].grade, "D0") == 0)
		{
			sumFin += subjects[cnt_i].credit * 1.0;
			sumCredit += subjects[cnt_i].credit;
		}
		else if (strcmp(subjects[cnt_i].grade, "F") == 0)
		{
			sumFin += subjects[cnt_i].credit * 0.0;
			sumCredit += subjects[cnt_i].credit;
		}
		else
		{
			continue;
		}
	}

	printf("%lf", sumFin / sumCredit);
	return 0;
}
