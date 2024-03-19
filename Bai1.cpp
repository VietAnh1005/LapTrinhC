#include <stdio.h>
#include <math.h>
#include <conio.h>

void ktraBoi7HaiChuSo();

int main(void)
{
	printf("Xuat ra man hinh:");
	ktraBoi7HaiChuSo();
	return 0;

}

void ktraBoi7HaiChuSo()
{
	for (int i = 10; i <= 99; i++)
	{
		if (i % 7 == 0)
		{
			printf("%d ", i);
		}
	}
	
}
