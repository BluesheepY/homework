#include <stdio.h>
#include <string.h>
#include <assert.h>
int my_strlen(const char* a) // �������һ��const���Ա�֤���Ǵ������ĵ�ַ������ζ����ᱻ�ı䣬���Է�ֹһЩ����ķ����������ӿ����������Ǵ���Ľ�׳�ԣ�³���ԣ�
{
							 // ����Ľ�׳�Ժ� -- ���������� -- ��bug�٣������bug��
	assert(a != NULL);  // ���ڶ��� -- �Ժ���ʹ��ָ���ʱ���������������һ�ζ��ԣ��������ܹ���֤���ǵ�ָ�벻�ǿ�ָ�룬�ڽ�����ʱ���������
	int i = 0;			//��������int ���ǿ��Ի���unsigned int �����Ϳ��Ա�֤���Ǻ����ķ���ֵһ��������
						//����unsigned int �������� size_t
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