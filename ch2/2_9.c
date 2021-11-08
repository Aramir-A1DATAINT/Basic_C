#include <stdio.h>
# pragma warning (disable:4496) // 대체 함수 사용 하라는 경고 없앨 떄 사용

int main(void){
	float f;
	double d;

	printf("enter 2 float type\n");
	scanf("%f%lf", &f, &d);

	printf("you're float is %f \n", f);
	printf("you're float is %f \n", d);

	return 0;
}
