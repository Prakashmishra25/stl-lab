#include <stdio.h>
namespace Myspace{
	int i=1;
	int j=3;
}

int main(void){
	using namespace Myspace;
	i=j+10;
	j=20;
	printf("Myspace����ı���i��ֵΪ%d\n", i);  //��ӡ13
	printf("Myspace����ı���j��ֵΪ%d\n", j);  //��ӡ20
	return 0;
}