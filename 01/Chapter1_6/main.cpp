#include <stdio.h>
namespace NS1{
	  int a=1;
}
namespace NS2{
	  int a=8;
}
int main(void){
	  printf("NS1���ֿռ䶨���aֵΪ%d\n", NS1::a);  //��ӡa=1
	  printf("NS2���ֿռ䶨���aֵΪ%d\n", NS2::a);  //��ӡa=8
	  return 0;
}
