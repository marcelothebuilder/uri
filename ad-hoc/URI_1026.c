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

#define BINARY_BITS		64
#define BINARY_SIZE		BINARY_BITS + 1
#define INDEX_PADDING	BINARY_SIZE - 1
#define BASE_INDEX		INDEX_PADDING - 1

// simulate logical ports

char or(char one, char two) {
	return (one == '1' || two == '1') ? '1' : '0';
}


char and(char one, char two) {
	return (one == '1' && two == '1') ? '1' : '0';
}

char not(char one) {
	if (one == '1') {
		return '0';
	} else {
		return '1';
	}
}

/* simulate mofiz way */
void sum_binary(char one[], char two[], char result[]) {
	short max_index = BASE_INDEX;
	short i;
	for (i = max_index; i >= 0; i--) {
		result[i] = or(and(not(one[i]), two[i]), and(one[i], not(two[i])));
	}
}

/* receives integer at value param, store result in bin_output */
void to_binary(unsigned long long int value, char bin_output[], short *index) {
	if (*index < 0) {
		return;
	}

	unsigned long long int div = value / 2;

	unsigned long long int mod = value % 2;
	bin_output[(*index)--] = mod+'0';

	to_binary(div, bin_output, index);
}

/* receives binary at value bin_input, returns result */
unsigned long long int from_binary(unsigned long long int acc, char bin_input[], short *index) {
	if (*index < 0) {
		return acc;
	}

	char current_char = bin_input[*index];

	if (current_char == '1') {
		short powerTo = BASE_INDEX - *index;
		acc += pow(2, powerTo);
	}

	(*index)--;

	return from_binary(acc, bin_input, index);
}

int main(int argc, char const *argv[]) {
	unsigned long long int a = 0, b = 0;
	
	while (scanf("%llu %llu", &a, &b) != EOF) {
		short index; // minus null padding and first item

		// re-set index
		index = BASE_INDEX;
		char binary_a[BINARY_SIZE];
		binary_a[INDEX_PADDING] = '\0'; // null padding
		to_binary(a, binary_a, &index);

		// re-set index
		index = BASE_INDEX;
		char binary_b[BINARY_SIZE];
		binary_b[INDEX_PADDING] = '\0'; // null padding
		to_binary(b, binary_b, &index);

		index = BASE_INDEX;
		char binary_result[BINARY_SIZE];
		binary_result[INDEX_PADDING] = '\0'; // null padding

		sum_binary(binary_a, binary_b, binary_result);

		// re-set index
		index = BASE_INDEX;
		//from_binary(0, binary_result, &index);
		printf("%llu\n", from_binary(0, binary_result, &index));
	}

	return 0;
}