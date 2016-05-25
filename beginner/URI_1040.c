#include <stdio.h>

int main(int argc, char const *argv[])
{
	// https://www.urionlinejudge.com.br/judge/pt/problems/view/1040

	float nota1, nota2, nota3, nota4;

	scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);

	float media = (nota1 * 2.0 + nota2 * 3.0 + nota3 * 4.0 + nota4 * 1.0) / (2.0 + 3.0 + 4.0 + 1.0);

	printf("Media: %.1f\n", media);

	if (media >= 7.0) {
		printf("Aluno aprovado.\n");
	} else if (media < 5.0) {
		printf("Aluno reprovado.\n");
	} else {
		printf("Aluno em exame.\n");

		float notaExame;

		scanf("%f", &notaExame);

		printf("Nota do exame: %.1f\n", notaExame);

		media = (media + notaExame)/2;

		if (media >= 5.0) {
			printf("Aluno aprovado.\n");
		} else {
			printf("Aluno reprovado.\n");
		}

		printf("Media final: %.1f\n", media);
	}

	return 0;
}