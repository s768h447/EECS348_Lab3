#include <stdio.h>
#include <stdlib.h>

//  adds to score and then goes to next loop if <= data, repeats to bottom, and if is totaled, prints as a possible scoring
void possibleCombinations(int data) {
    printf("\npossible combinations of scoring plays:\n");

	for (int takedown2 = 0; takedown2 <= data / 8; takedown2++) {

		for (int takedown1 = 0; takedown1 <= data / 7; takedown1++) {

			for (int takedown = 0; takedown <= data / 6; takedown++) {

				for (int field_goal = 0; field_goal <= data / 3; field_goal++) {

					for (int safety = 0; safety <= data / 2; safety++) {

						if ((takedown2 * 8 + takedown1 * 7 + takedown * 6 + field_goal * 3 + safety * 2) == data) {

							printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n", takedown2, takedown1, takedown, field_goal, safety);
							}
						}
					}
				}
			}
	}
}

int main() {
	int score = 0;

    //  prints before scanning
	printf("Enter 0 or 1 to STOP\nEnter the NFL score: ");
	scanf("%d", &score);

    if (score == (0 || 1)) {
        return 0;
    }

    //  runs function
    possibleCombinations(score);

    //  I don't like it when the program ends and don't know what else to use
    system("pause");
	return 0;
}