#include <stdio.h>
#include <string.h>

struct values
{
	int n1, n2;
	double x1, x2;
};

void print_values(struct values *s)
{
	printf("n1=%d, n2=%d, x1=%f, x2= %f\n", s->n1, s->n2, s->x1, s->x2);
}

void double_values(struct values *s)
{
	s->n1 *= 2;
	s->n2 *= 2;
	s->x1 *= 2;
	s->x2 *= 2;
}

int main()
{
	struct values s;

	s.n1 = 1;
	s.n2 = 2;
	s.x1 = 0.1;
	s.x2 = 0.2;
	print_values(&s);
	double_values(&s);
	print_values(&s);
	return 0;
}
