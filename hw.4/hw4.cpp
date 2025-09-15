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
		price = p;
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
	Laptop obj1("Asus", "Red", 35000);
	obj1.Print();

	Laptop obj2("Lenovo", "Blue", 23000);
	obj2.Print();

	Laptop obj3("Dell", "Grey", 45500);
	obj3.Print();
}