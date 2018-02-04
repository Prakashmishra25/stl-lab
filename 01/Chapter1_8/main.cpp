#include <stdio.h>
class B;
class A{
	bool bfinish;
	friend bool check(A a, B b); //����checkΪ��A����Ա����
public:
	A(bool b){bfinish=true;}
};
class B{
	bool bfinish;
	friend bool check(A a, B b);  //����checkΪ��B����Ա����
public:
	B(bool b){bfinish=b;}
};

bool check(A a, B b){  //������Ա����
	if(a.bfinish && b.bfinish) return true;
	else return false;
}

int main(void){
	A a(true);
	B b(false);
	if(check(a, b)) printf("bfinish����true\n"); //������Ա����
	else printf("bfinish������true\n");
	return 0;
}
