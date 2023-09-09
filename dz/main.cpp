#include <iostream>


using namespace std; 

class fraction
{
private:
	int x = 10;
	int y = 5;
	
public:
	void Input(int c, int z)
	{
		x = c;
		y = z;
	}
	void Print() {
		cout << "Fraction: " << x << "\t" << y << endl;
	}
	void multi(int a, int b)
	{
		x *= a;
		y *= b;
		cout << "fraction: " << x << '/' << y << endl;
		
	}
	void divis(int a, int b)
	{
		y /= a;
		x /= b;
		cout << "fraction: " << x << '/' << y << endl;
	}
	void sum(int a, int b)
	{
		x += a;
		y += a;
		cout << "Fraction: " << x << '/' << y << endl;
	}
	void subt(int a, int b)
	{
		x -= a;
		y -= b;
		cout << "Fraction: " << x << '/' << y << endl;
	}
	

	int GetA() {
		return x;
	}
	int GetB() {
		return y;
	}
	void SetA(int a) {
		x = a;
	}
	void SetB(int a) {
		y = a;
	}
};
int main()
{
	fraction x;
	x.multi(2, 5);
    x.Print();
	cout << "\n" << endl;

	x.divis(2, 5);
	x.Print();
	cout << "\n" << endl;

	x.sum(2, 5);
	x.Print();
	cout << "\n" << endl;

	x.subt(2, 5);
	x.Print();
	 



	
}
	