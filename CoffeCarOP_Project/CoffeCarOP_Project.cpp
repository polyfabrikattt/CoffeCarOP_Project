

#include <iostream>
using namespace std;
class coffe {
public:
	string name;
	double price;
	string moc; //model of coffe(arabic,french)
	string cupple;

};


int main(void)
{
	coffe coffe1;

	cout << "input name of coffe(kapuchino,americano and etc)";
	cin >> coffe1.name;

	cout << "input price of coffe";
	cin >> coffe1.price;

	cout << "input Model of coffe(arabic,UAR,USA and etc)";
	cin >> coffe1.moc;

	cout << "input what cupple of coffe you need(paper,plastic,wafel and etc)";
	cin >> coffe1.cupple;

}
