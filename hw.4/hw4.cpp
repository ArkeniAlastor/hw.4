#include <iostream>
using namespace std;

class Laptop
{
	char* model;
	char* color;
	double price;
public:
	Laptop(const char* m, const char* c, double p)
	{
		model = new char[strlen(m) + 1];
		strcpy_s(model, strlen(m) + 1, m);
		color = new char[strlen(c) + 1];
		strcpy_s(color, strlen(c) + 1, c);
		price = a;
	}
	void Print()
	{
		cout << "Model: " << model << "\tcolor: " << color << "\tprice: " << price << endl;
	}
	~Laptop()
	{
		cout << "Destruction\n";
		delete[] model;
		delete[] color;
	}
};

int main() {
	Laptop obj1("Asus", "red", 5000);
	obj1.Print();
}