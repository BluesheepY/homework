#include <stdio.h>
#include <string.h>
#include <assert.h>
int my_strlen(const char* a) // 这里加上一个const可以保证我们传过来的地址无论如何都不会被改变，可以防止一些错误的发生，这样子可以增加我们代码的健壮性（鲁棒性）
{
							 // 代码的健壮性好 -- 不容易生病 -- 出bug少，否则出bug多
	assert(a != NULL);  // 关于断言 -- 以后在使用指针的时候都如左边那样进行一次断言，这样子能够保证我们的指针不是空指针，在解引用时不会出问题
	int i = 0;			//关于类型int 我们可以换成unsigned int 这样就可以保证我们函数的返回值一定是正数
						//另外unsigned int 的类型是 size_t
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