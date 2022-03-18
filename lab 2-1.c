#include <stdio.h>
int main()
{
char charType;//char형 charType 변수 선언
int integerType;//int형 integerType 변수선언
float floatType;//float형 floatType 변수선언    
double doubleType;//double형 doubleType 변수선언
print("[----- [윤태경] [2019038059] -----]");
printf("Size of char: %ld byte\n",sizeof(charType));// charType 변수의 크기 출력
printf("Size of int: %ld bytes\n",sizeof(integerType));//integerType 변수의 크기 출력
printf("Size of float: %ld bytes\n",sizeof(floatType));//floatType 변수의 크기 출력
printf("Size of double: %ld bytes\n",sizeof(doubleType));//douleType 변수의 크기 출력
printf("-----------------------------------------\n");
printf("Size of char: %ld byte\n",sizeof(char));//char자료형 크기 출력
printf("Size of int: %ld bytes\n",sizeof(int));//int 자료형 크기 출력
printf("Size of float: %ld bytes\n",sizeof(float));//float 자료형 크기 출력
printf("Size of double: %ld bytes\n",sizeof(double));//double 자료형 크기 출력
printf("-----------------------------------------\n");
printf("Size of char*: %ld byte\n",sizeof(char*));//포인터 char자료형 크기 출력
printf("Size of int*: %ld bytes\n",sizeof(int*));//포인터int 자료형의 크기 출력
printf("Size of float*: %ld bytes\n",sizeof(float*));//포인터 float 자료형의 크기 출력
printf("Size of double*: %ld bytes\n",sizeof(double*));//포인터 double 자료형의 크기 출력
return 0;
}