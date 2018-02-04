#include <iostream>
#include <vector>

class MyAnimal{
public:
	char* name;  
	int age;
public:
	MyAnimal(char* name,int age){
		this->name=name;
		this->age=age;
	}
	~MyAnimal(){}
};

int main(void){
	using namespace std;
	MyAnimal* pDog=new MyAnimal("dog",1);
	MyAnimal* pMonkey=new MyAnimal("monkey",2);
	MyAnimal* pChicken=new MyAnimal("chicken",3);
	MyAnimal* pSnake=new MyAnimal("snake",4);

	vector<MyAnimal*> v;  //v����Ÿ�����ĵ�ַ
	v.push_back(pDog);
	v.push_back(pMonkey);
	v.push_back(pChicken);
	v.push_back(pSnake);

	delete pMonkey;        //����ɾ��pMonkey��ָ�Ķ���
	v.erase(v.begin()+1);  //ɾ����2��Ԫ��,��Ĩȥ��vector��pMonkey��ַ
	vector<MyAnimal*>::iterator i,iend;
	iend=v.end();
	for(i=v.begin();i!=iend;i++)
		cout << (*i)->name <<' ' << (*i)->age << endl;
	v.clear();  //�������vectorԪ��
	cout << "ִ��clear()" << endl << "vectorԪ����ȫ�����" << endl;
	return 0;
}