#include<iostream>
using namespace std;
class Person//人
{
public:
	void setValue(char nameV[], bool sexV, int ageV, float heightV, float weightV){
		cout << "我知道怎么设置人的属性，我已完成！" << endl;
		strncpy_s(name, nameV, sizeof(name));//姓名
		sex = sexV;//性别
		age = ageV;//年龄
		height = heightV;//身高
		weight = weightV;//体重
	}
	void print(){
		cout << "我是一个人，我的属性值为：" << name << ","
			<< sex << ","
			<< age << ","
			<< height << ","
			<< weight << endl;
	}
	void eat(char obj[]){//吃（东西)
		cout << "我是一个人" << name << "，但我还没有学会怎么吃:" << obj << endl;
	}
	void sleep(void){//睡觉()
		cout << "我是一个人" << name << "，我会睡觉，但还说不清楚是怎么睡觉的。" << endl;
	}

public:
	char name[20];//姓名
	bool sex;	//性别
	int age;	//年龄
	float height;	//身高
	float weight;//体重
};
Person p1;//张三
	void main(){
		//设置张三("张三",1,18,180.5,65.3)的属性
		p1.setValue("张三", 1, 18, 180.5, 65.3);
		p1.eat("西瓜");
		p1.sleep();
		p1.print();

		Person p2;//李四
		cout << endl;
		p2.setValue("李四", 0, 16, 165, 46.5);
		p2.print();
	}