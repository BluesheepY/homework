#include <stdio.h>
#include <string.h>
#include <assert.h>
int my_strlen(const char* a) // 这里加上一个const可以保证我们传过来的地址无论如何都不会被改变，可以防止一些错误的发生，这样子可以增加我们代码的健壮性（鲁棒性）
{
	assert(a != NULL); // 代码的健壮性好 -- 不容易生病 -- 出bug少，否则出bug多
	int i = 0;
	for (i = 0; a[i] != '\0'; i++)
	{
		;
	}
	return i;
}
int main()
{
	char a[10] = { "abc edf" };
	printf("%d",my_strlen(a));;
	return 0;
}