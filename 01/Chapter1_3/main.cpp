#include <stdio.h>
class A{
public:
	void f(){
		printf("����f��ӡ\n");
	}
	void g(){
		throw 12; 
	}
};

int main(void){
	A a;
	a.f();      //����f
	try{
		a.g();  //����g
	}
	catch(int& i){
		printf("���ú���g���������쳣,ֵΪ%d\n", i);
	}
	return 0;
}
