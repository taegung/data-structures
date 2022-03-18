#include <stdio.h>
int main()
{
int i;
int *ptr;
int **dptr;
i = 1234;
printf("[----- [윤태경] [2019038059] -----]\n");
printf("[checking values before ptr = &i] \n");
printf("value of i == %d\n", i);//i의 값 출력
printf("address of i == %p\n", &i);//i의 주소 출력
printf("value of ptr == %p\n", ptr);//포인터ptr의 값 출력
printf("address of ptr == %p\n", &ptr);//포인터ptr 주소 추력
ptr = &i; /* ptr is now holding the address of i */  //포인터 ptr에 i의 주소 입력
printf("\n[checking values after ptr = &i] \n");
printf("value of i == %d\n", i);//i 의 값을 출력
printf("address of i == %p\n", &i);//i의 주소 출력
printf("value of ptr == %p\n", ptr);//포인터 ptr 값출력 포인터 ptr값이 i의 주소
printf("address of ptr == %p\n", &ptr);//포인터 ptr의 주소 출력
printf("value of *ptr == %d\n", *ptr);//포인터 ptr이 가리키는 i의 값출력
dptr = &ptr; /* dptr is now holding the address of ptr */  //포인터 dptr에 포인터 ptr의 주소 입력
printf("\n[checking values after dptr = &ptr] \n");
printf("value of i == %d\n", i);//i의 값을 출력
printf("address of i == %p\n", &i);//i의 주소 출력
printf("value of ptr == %p\n", ptr);//포인터 ptr 값 출력
printf("address of ptr == %p\n", &ptr);//포인터 ptr 주소 출력
printf("value of *ptr == %d\n", *ptr);//포인터 ptr이 가리키는 i의 값 출력
printf("value of dptr == %p\n", dptr);//포인터 dptr 값 출력  포인터 dptr 값은 포인터 ptr의 주소
printf("address of dptr == %p\n", &dptr);//포인터 dptr 주소 출력
printf("value of *dptr == %p\n", *dptr);//포인터 dptr이 가리키는 포인터 ptr값 출력
printf("value of **dptr == %d\n", **dptr);//포인터 *dptr 가르키는 i의 값 출력
*ptr = 7777; /* changing the value of *ptr */ //i의 값 7777 수정
printf("\n[after *ptr = 7777] \n");
printf("value of i == %d\n", i);//i의 값 출력
printf("value of *ptr == %d\n", *ptr);//포인터 ptr이 가리키는 i의 값 출력
printf("value of **dptr == %d\n", **dptr);//포인터 *dptr 가르키는 i의 값 출력
**dptr = 8888; /* changing the value of **dptr */ //i의 값 8888로 수정
printf("\n[after **dptr = 8888] \n");
printf("value of i == %d\n", i);//i의 값 출력
printf("value of *ptr == %d\n", *ptr);;//포인터 ptr이 가리키는 i의 값 출력
printf("value of **dptr == %d\n", **dptr);//포인터 *dptr 가르키는 i의 값 출력
return 0;}
