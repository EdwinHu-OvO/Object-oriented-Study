#include<iostream>
using namespace std;
class Person//��
{
public:
	void setValue(char nameV[], bool sexV, int ageV, float heightV, float weightV){
		cout << "��֪����ô�����˵����ԣ�������ɣ�" << endl;
		strncpy_s(name, nameV, sizeof(name));//����
		sex = sexV;//�Ա�
		age = ageV;//����
		height = heightV;//���
		weight = weightV;//����
	}
	void print(){
		cout << "����һ���ˣ��ҵ�����ֵΪ��" << name << ","
			<< sex << ","
			<< age << ","
			<< height << ","
			<< weight << endl;
	}
	void eat(char obj[]){//�ԣ�����)
		cout << "����һ����" << name << "�����һ�û��ѧ����ô��:" << obj << endl;
	}
	void sleep(void){//˯��()
		cout << "����һ����" << name << "���һ�˯��������˵���������ô˯���ġ�" << endl;
	}

public:
	char name[20];//����
	bool sex;	//�Ա�
	int age;	//����
	float height;	//���
	float weight;//����
};
Person p1;//����
	void main(){
		//��������("����",1,18,180.5,65.3)������
		p1.setValue("����", 1, 18, 180.5, 65.3);
		p1.eat("����");
		p1.sleep();
		p1.print();

		Person p2;//����
		cout << endl;
		p2.setValue("����", 0, 16, 165, 46.5);
		p2.print();
	}