#include <stdio.h>
template <class T>
void func(T a){
	printf("hello\n");
}
//����ģ����ȫ�ػ�
template<>
void func<int>(int a){
	printf("hello there\n");
}

int main(void){
	func(2);    //��ӡhello there 
	func('y');  //��ӡhello
	return 0;
}
