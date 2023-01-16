#include <iostream>
using namespace std;

class person
{
	public:
		string profession;
		int age;
		Person()
		{
			profession="unemployed";
			age=16;
		}
		void display()
		{
			cout << " My Profession is :"<< profession<<endl;
			cout << " My Age is :"<<age<<endl;
			walk();
			talk();
		}
		void walk()
		{
			cout << "I can walk :"<<endl;
		}
		void talk()
		{
			cout << "I can talk :"<<endl;
		}
};
class MathsTeacher : public person
{
	public:
		void TeachMaths()
		{
			cout << "I can teach maths :"<<endl;
		}
};
class Footballer : public person
{
	public:
		void playFootball()
		{
			cout << "I can play Football :"<<endl;
		}
};
int main()
{
	person p;
	p.display();
	MathsTeacher teacher;
	teacher.profession="Teacher";
	teacher.age=23;
	teacher.display();
	teacher.TeachMaths();
	
	Footballer footballer;
	footballer.profession="Footballer";
	footballer.age=19;
	footballer.display();
	footballer.playFootball();
	
	return 0;
}

