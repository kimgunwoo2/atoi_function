#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 100 
int my_atoi(char*);
int main(void)
{
		  int val;
		  char str[N];
 
  printf("���ڿ� ���ڸ� �Է� �ϸ� ������ ����մϴ� :(��ȣ�� �� ���̼���!!) ");
  gets(str);
 
  val  = my_atoi(str);

			printf("���ڿ��� ������ �ٲ��  : %d\n", val);
	
	
	 return 0;
}
int my_atoi(char* str)
{
    int val=0, i;
		if(*str=='+')//�տ��� �÷��� ���ڿ� �϶� ���ڸ� ������ �ٲٱ�   
				{
					for(i=1 ; *(str+i)!='\0' ; i++)//���� ���ö� ���� �ݺ����ش�
					if(48<=*(str+i)&&*(str+i)<=57)//���ڰ� ������ ��쿡�� ������ �ֵ��� �Ѵ�
						val = 10*val + *(str+i) - '0';//���ڸ� ������ �ٲٴ� ����
					else//���ڰ� ���ڰ� �ƴ� ��쿡 0�� ��ȯ�Ѵ�.
						return 0;
					 return val;//���� ������ ��ȯ
			}
			else if(*str=='-')//�տ��� ���̳ʽ� ���ڿ� �϶� ���ڸ� ������ �ٲٱ�
				{
					for(i=1 ; *(str+i)!='\0' ; i++)
					if(48<=*(str+i)&&*(str+i)<=57)
						val = 10*val + *(str+i) - '0';
					else
						return 0;
					 return -val;
				}
			else //�տ��� �÷����� ���̳ʽ��� �ƴ� ��� 0�� ��ȯ
				return 0;
			
	}	
