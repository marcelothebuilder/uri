/*
 URI Online Judge | 1026
To Carry or not to Carry

By Monirul Hasan Tomal, SEU Bangladesh
Timelimit: 2

6+9=15 seems okay. But how come 4+6=2?

Look at, Mofiz worked hard throughout his Digital Logic course, but when he was asked to implement a INDEX_PADDING bit adder for the laboratory exam, he did some mistake in the design part. After scavenging the design for half an hour, he found his flaw!! He was doing bitwise addition but his carry bit always had zero output. Thus,


4  = 00000000 00000000 00000000 00000100
+6 = 00000000 00000000 00000000 00000110
----------------------------------------
2  = 00000000 00000000 00000000 00000010

It’s a good thing that he finally found his mistake, but it was too late. Considering his effort throughout the course, the instructor gave him one more chance. Mofiz had to write an efficient program that would take 2 unsigned INDEX_PADDING bit decimal numbers as input, and produce an unsigned INDEX_PADDING bit decimal number as the output adding in the same way as his circuit does.

Input

In each input line there will be a pair of integer separated by a single space. Input ends at EOF.
Output

For each input line, the program must provide an output's line: the value after adding the two numbers in the "Mofiz way".

SOLUTION AUTHOR: https://github.com/marcelothebuilder/
*/
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {
	unsigned long long int a = 0, b = 0;
	
	while (scanf("%llu %llu", &a, &b) != EOF) {
		printf("%llu\n", a ^ b);
	}

	return 0;
}
