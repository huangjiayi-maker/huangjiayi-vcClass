// W32D1.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "W32D1.h"


// ���ǵ���������һ��ʾ��
W32D1_API int nW32D1=0;

// ���ǵ���������һ��ʾ����
W32D1_API int fnW32D1(void)
{
    return 42;
}
W32D1_API int factorial(int n)
{
	int sum = 1;
	for (int i = n; i > 0; i--)
	{
		sum = sum*i;
	}
	return sum;
}
float FAC::convert(float deg)
{
	return (deg*3.14) / 180;
}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� W32D1.h
CW32D1::CW32D1()
{
    return;
}
