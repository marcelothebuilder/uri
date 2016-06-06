/*
 URI Online Judge | 1048
Salary Increase

By Neilor Tonin, URI Brazil
Timelimit: 1

The company ABC decided to give a salary increase to its employees, according to the following table:
https://urionlinejudge.r.worldssl.net/gallery/images/problems/UOJ_1048_en.png

Read the employee's salary, calculate and print the new employee's salary, as well the money earned
and the increase percentual obtained by the employee, with corresponding messages in Portuguese, as the below example.

Input
The input contains only a floating-point number, with 2 digits after the decimal point.

Output
Print 3 messages followed by the corresponding numbers (see example) informing the new salary,
the among of money earned and the percentual obtained by the employee. Note:
Novo salario:  means "New Salary"
Reajuste ganho: means "Money earned"
Em percentual: means "In percentage"

SOLUTION AUTHOR: https://github.com/marcelothebuilder/
*/
#include <stdio.h>

typedef struct salary_readjustment {
	float old_value;
	float new_value;
	float amount_readjusted;
	int percentual;
} salary_readjustment;

salary_readjustment readjust_with(float salary, int percentual) {
	salary_readjustment r;

	// 15 should give 1.15
	float percentual_dec = ((float)percentual/100);

	r.old_value = salary;
	r.new_value = salary*(percentual_dec+1);
	r.amount_readjusted = salary*percentual_dec;
	r.percentual = percentual;

	return r;
}

/*
	READJUSTMENT CHAIN
	readjust_salary -> readjust_2000 -> readjust_1200 -> readjust_800 -> readjust_400 -> readjust_base
*/

salary_readjustment readjust_base(float salary) {
	return readjust_with(salary, 15);
}

salary_readjustment readjust_400(float salary) {
	if (salary > 400)
		return readjust_with(salary, 12);
	return readjust_base(salary);
}

salary_readjustment readjust_800(float salary) {
	if (salary > 800)
		return readjust_with(salary, 10);
	return readjust_400(salary);
}

salary_readjustment readjust_1200(float salary) {
	if (salary > 1200)
		return readjust_with(salary, 7);
	return readjust_800(salary);
}

salary_readjustment readjust_2000(float salary) {
	if (salary > 2000)
		return readjust_with(salary, 4);
	return readjust_1200(salary);
}

salary_readjustment readjust_salary(float salary) {
	return readjust_2000(salary);
}

int main(int argc, char const *argv[])
{
	float input_salary_value;
	scanf("%f", &input_salary_value);

	salary_readjustment r = readjust_salary(input_salary_value);

	printf("Novo salario: %.2f\n", r.new_value);
	printf("Reajuste ganho: %.2f\n", r.amount_readjusted);
	printf("Em percentual: %d %%\n", r.percentual);

	return 0;
}
