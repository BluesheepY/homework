#include <stdio.h>
#include <string.h>
#include <assert.h>
int my_strlen(const char* a) // �������һ��const���Ա�֤���Ǵ������ĵ�ַ������ζ����ᱻ�ı䣬���Է�ֹһЩ����ķ����������ӿ����������Ǵ���Ľ�׳�ԣ�³���ԣ�
{
	assert(a != NULL); // ����Ľ�׳�Ժ� -- ���������� -- ��bug�٣������bug��
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