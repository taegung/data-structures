#include <stdio.h>
int main()
{
char charType;//char�� charType ���� ����
int integerType;//int�� integerType ��������
float floatType;//float�� floatType ��������    
double doubleType;//double�� doubleType ��������
print("[----- [���°�] [2019038059] -----]");
printf("Size of char: %ld byte\n",sizeof(charType));// charType ������ ũ�� ���
printf("Size of int: %ld bytes\n",sizeof(integerType));//integerType ������ ũ�� ���
printf("Size of float: %ld bytes\n",sizeof(floatType));//floatType ������ ũ�� ���
printf("Size of double: %ld bytes\n",sizeof(doubleType));//douleType ������ ũ�� ���
printf("-----------------------------------------\n");
printf("Size of char: %ld byte\n",sizeof(char));//char�ڷ��� ũ�� ���
printf("Size of int: %ld bytes\n",sizeof(int));//int �ڷ��� ũ�� ���
printf("Size of float: %ld bytes\n",sizeof(float));//float �ڷ��� ũ�� ���
printf("Size of double: %ld bytes\n",sizeof(double));//double �ڷ��� ũ�� ���
printf("-----------------------------------------\n");
printf("Size of char*: %ld byte\n",sizeof(char*));//������ char�ڷ��� ũ�� ���
printf("Size of int*: %ld bytes\n",sizeof(int*));//������int �ڷ����� ũ�� ���
printf("Size of float*: %ld bytes\n",sizeof(float*));//������ float �ڷ����� ũ�� ���
printf("Size of double*: %ld bytes\n",sizeof(double*));//������ double �ڷ����� ũ�� ���
return 0;
}