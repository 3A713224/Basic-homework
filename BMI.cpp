#include <stdio.h>
#include <stdlib.h>
int main(void)
{ float height,weight;
	printf("�п�J�A������(m):" );
	scanf("%f,",&height);
	printf("�п�J�A���魫(kg):" );
	scanf("%f,",&weight);
	printf("�A��BMI��=%f\n",weight/(height*height));
	system("pause");
	return 0;
}
