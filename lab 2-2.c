#include <stdio.h>
int main()
{
int i;
int *ptr;
int **dptr;
i = 1234;
printf("[----- [���°�] [2019038059] -----]\n");
printf("[checking values before ptr = &i] \n");
printf("value of i == %d\n", i);//i�� �� ���
printf("address of i == %p\n", &i);//i�� �ּ� ���
printf("value of ptr == %p\n", ptr);//������ptr�� �� ���
printf("address of ptr == %p\n", &ptr);//������ptr �ּ� �߷�
ptr = &i; /* ptr is now holding the address of i */  //������ ptr�� i�� �ּ� �Է�
printf("\n[checking values after ptr = &i] \n");
printf("value of i == %d\n", i);//i �� ���� ���
printf("address of i == %p\n", &i);//i�� �ּ� ���
printf("value of ptr == %p\n", ptr);//������ ptr ����� ������ ptr���� i�� �ּ�
printf("address of ptr == %p\n", &ptr);//������ ptr�� �ּ� ���
printf("value of *ptr == %d\n", *ptr);//������ ptr�� ����Ű�� i�� �����
dptr = &ptr; /* dptr is now holding the address of ptr */  //������ dptr�� ������ ptr�� �ּ� �Է�
printf("\n[checking values after dptr = &ptr] \n");
printf("value of i == %d\n", i);//i�� ���� ���
printf("address of i == %p\n", &i);//i�� �ּ� ���
printf("value of ptr == %p\n", ptr);//������ ptr �� ���
printf("address of ptr == %p\n", &ptr);//������ ptr �ּ� ���
printf("value of *ptr == %d\n", *ptr);//������ ptr�� ����Ű�� i�� �� ���
printf("value of dptr == %p\n", dptr);//������ dptr �� ���  ������ dptr ���� ������ ptr�� �ּ�
printf("address of dptr == %p\n", &dptr);//������ dptr �ּ� ���
printf("value of *dptr == %p\n", *dptr);//������ dptr�� ����Ű�� ������ ptr�� ���
printf("value of **dptr == %d\n", **dptr);//������ *dptr ����Ű�� i�� �� ���
*ptr = 7777; /* changing the value of *ptr */ //i�� �� 7777 ����
printf("\n[after *ptr = 7777] \n");
printf("value of i == %d\n", i);//i�� �� ���
printf("value of *ptr == %d\n", *ptr);//������ ptr�� ����Ű�� i�� �� ���
printf("value of **dptr == %d\n", **dptr);//������ *dptr ����Ű�� i�� �� ���
**dptr = 8888; /* changing the value of **dptr */ //i�� �� 8888�� ����
printf("\n[after **dptr = 8888] \n");
printf("value of i == %d\n", i);//i�� �� ���
printf("value of *ptr == %d\n", *ptr);;//������ ptr�� ����Ű�� i�� �� ���
printf("value of **dptr == %d\n", **dptr);//������ *dptr ����Ű�� i�� �� ���
return 0;}
