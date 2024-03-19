#include <stdio.h>
#include <math.h>

int ktraSCP(int num)
{
	int sqrtNum = sqrt((double)num);
	return (sqrtNum / 1 * sqrtNum == num);
}


// Hàm đếm và in ra các số chính phương nhỏ hơn n
void inSCP(int n)
{
	printf("Cac so chinh phuong nho hon %d la:\n", n);
	int i = 1;
	while (i * i < n)
	{
		if (ktraSCP(i))
		{
			printf("%d ", i * i);
		}
		i++;
	}
	printf("\n");
}
int main(void)
{
	int n;
	printf("Nhap so: ");
	scanf_s("%d", &n);

	inSCP(n);

	return 0;
}


