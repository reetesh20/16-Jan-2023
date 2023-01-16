// Class whatsapp
#include <iostream>
using namespace std;

class whatsapp1
{
	public:
		void msg();
		{
			cout << "I will send and receive MSG :"<<endl;
		}
};

class whatsapp2 : public whatsapp2
{
	public:
		void calling();
		{
			cout << "I will do voice or Video call :"<<endl;
		}
};

class whatsapp3 : public whatsapp2
{
	public:
		void msg();
		{
			cout << "I will send and receive MSG :"<<endl;
		}
};

void status()
{
	Cout<<" It will update Status "
};

int main()
{
	whatsapp1 p;
	p.dislpay();
	whatsapp1 msg;
	whatsapp1.display();
}
