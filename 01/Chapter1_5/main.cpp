#include <stdio.h>
void f(void){
	try{
		throw "abc";
	}
	catch(const char*){
		printf("ִ��f����const char*�쳣\n");
		throw;  //�����׳�����׽�����쳣,Ȼ��������
	}
	printf("f������ӡ\n");  //������䲻�ᱻִ��
}

int main(void){
	try{
		f();
	}
	catch(const char*){
		printf("ִ��main����const char*�쳣\n");
	}
	return 0;
}
