#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 100 
int my_atoi(char*);
int main(void)
{
		  int val;
		  char str[N];
 
  printf("문자열 숫자를 입력 하면 정수로 출력합니다 :(부호를 꼭 붙이세요!!) ");
  gets(str);
 
  val  = my_atoi(str);

			printf("문자에서 정수로 바뀐것  : %d\n", val);
	
	
	 return 0;
}
int my_atoi(char* str)
{
    int val=0, i;
		if(*str=='+')//앞에가 플러스 문자열 일때 문자를 정수로 바꾸기   
				{
					for(i=1 ; *(str+i)!='\0' ; i++)//널이 나올때 까지 반복해준다
					if(48<=*(str+i)&&*(str+i)<=57)//문자가 숫자인 경우에만 돌리수 있도록 한다
						val = 10*val + *(str+i) - '0';//문자를 정수로 바꾸는 과정
					else//문자가 순자가 아닌 경우에 0을 반환한다.
						return 0;
					 return val;//계산된 정수를 반환
			}
			else if(*str=='-')//앞에가 마이너스 문자열 일때 문자를 정수로 바꾸기
				{
					for(i=1 ; *(str+i)!='\0' ; i++)
					if(48<=*(str+i)&&*(str+i)<=57)
						val = 10*val + *(str+i) - '0';
					else
						return 0;
					 return -val;
				}
			else //앞에가 플러스나 마이너스가 아닌 경우 0을 반환
				return 0;
			
	}	
