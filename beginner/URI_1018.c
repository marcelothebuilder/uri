#include <stdio.h>

int availableNotes[] = 	{100, 50, 20, 10, 5, 2, 1};
int availableNotesLen = sizeof(availableNotes) / sizeof(int);

void decompose(int rawValue, int noteIndex) {

	if (noteIndex >= availableNotesLen) {
		return;
	}

	// get the current note value from our array
	int noteValue = availableNotes[noteIndex];

	int notesCount = rawValue / noteValue;
	int excedent = rawValue % noteValue;

	printf("%d nota(s) de R$ %d,00\n", notesCount, noteValue);

	// recalc with a lower note
	decompose(excedent, ++noteIndex);
}

int main(int argc, char const *argv[])
{
	int value;
	scanf("%d", &value);

	printf("%d\n", value);

	// decompose value, starting with the first note
	decompose(value, 0);
}
