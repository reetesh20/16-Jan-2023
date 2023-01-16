// Class student
// Multi-Level Inheritance
#include<iostream>
using namespace std;
class student
{
	protected:
		int rollno;
		public:
		void getnumber(int a)
		{
			rollno=a;
		}
		void printnumber()
		{
			cout<<"Roll Number : "<<rollno<<"\n";
		}
};

class test : public student
{
	protected:
		float s1,s2;
		public:
			void getmarks(float a,float b)
			{
				s1=a;
				s2=b;
			}
			void printmarks()
			{
				cout<<"subject 1 : "<<s1<<endl<<"Subject 2 : "<<s2<<endl;
			}
};

class result : public test
{
	float total;
	public:
	void display()
		{
			total=s1+s2;
			cout<<"Total Marks : "<<total<<"\n";
		}
};

int main()
{
	result r;
	r.getnumber(11);
	r.getmarks(55,70.6);
	r.printnumber();
	r.printmarks();
	r.display();
	return 0;
}
