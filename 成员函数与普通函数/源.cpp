#include<iostream>
using namespace std;
class apples
{
public:
	void genApple()
	{
		if (eat == 1)
		{
			x = (rand() % 48) + 1;
			y = (rand() % 18) + 1;
			eat = 0;
		}
	}
public:
	int x;
	int y;
	int eat;
};
void genApple_(apples *apple2)//区别：普通函数需要多一个指针参数来访问自己
{
	if (apple2->eat == 1)
	{
		apple2->x = (rand() % 48) + 1;
		apple2->y = (rand() % 18) + 1;
		apple2->eat = 0;
	}
}
void main()
{
	apples apple1 = { 1, 2, 1 };
	cout << apple1.x << apple1.y <<apple1.eat<< endl;
	apple1.genApple();
	cout << apple1.x << apple1.y << apple1.eat << endl;
	apples apple2 = { 114, 514, 1 };
	cout << apple2.x << apple2.y << apple2.eat << endl;
	apples* ptrapple2 = &apple2;
	genApple_(ptrapple2);
	cout << apple2.x << apple2.y << apple2.eat << endl;

}