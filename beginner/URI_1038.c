#include <stdio.h>

struct product
{
	int code;
	float price; 
	char *specification;
};

typedef struct product product;

void init_products(product *p) {
	p[0].price = 4.00;
	p[0].specification = "Cachorro Quente";

	p[1].price = 4.50;
	p[1].specification = "X-Salada";

	p[2].price = 5.00;
	p[2].specification = "X-Bacon";

	p[3].price = 2.00;
	p[3].specification = "Torrada simples";

	p[4].price = 1.50;
	p[4].specification = "Refrigerante";
}

int main(int argc, char const *argv[])
{
	// https://www.urionlinejudge.com.br/judge/en/problems/view/1038
	// Snack
	// seems like product "specification" wasn't needed for this
	// exercise, but when i saw it was too late. :(

	product products[5];

	init_products(products);

	int code, amount;

	scanf("%d %d", &code, &amount);

	printf("Total: R$ %.2f\n", products[code-1].price * amount);

	return 0;
}