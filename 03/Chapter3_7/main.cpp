#include <fstream>
#include <iostream>
using namespace std;

int main(void){
	ifstream rFileStream;
	rFileStream.open("d:\\ˮ��.txt", ios::in);
	if(!rFileStream){
		cout << "���ļ�ʧ��" << endl;
		return 1;
	}
	char str[30];
	rFileStream.getline(str, 30);   
	cout << str;
	rFileStream.close();
	return 0;
}
