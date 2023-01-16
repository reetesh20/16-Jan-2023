// Class vehicle
// Hybrid Inheritance
#include<iostream>
using namespace std;
class vehicle
{
	public:
		vehicle()
		{
			cout<<" This is a vehicle"<<endl;
			
		}
};

class fare
{
	public:
		fare()
		{
			cout<<" Fare of the vehicle"<<endl;
			
		}
};


class bus : public vehicle , public fare
{
	public:
		bus()
		{
			cout<<" Total fare of the vehicle "<<endl;
		}
};
int main()
{
	bus obj2;
	return 0;
}
