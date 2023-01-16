// Class Car
// Single Inheritance
#include<iostream>
using namespace std;
class vehicle
{
	public:
		vehicle()
		{
			cout<<"This is a vehicle"<<endl;
			
		}
};

class car : public vehicle
{
	public:
		car()
		{
			cout<<" Mercedes Benz - driven by passion !! "<<endl;
		}
};
int main()
{
	car c;
	return 0;
}
