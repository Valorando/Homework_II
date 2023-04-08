//Написать программу которая будет описывать фигуры выводить их на экран и считать периметр фигур и сколько точек нужно для их построения, использовать ООП и лямбда
#include<iostream>
using namespace std;


class Figure
{
public:
	 int rectangle_a;
	 int rectangle_b;

	void Rectangle()
	{
		cout << "Rectangle." << endl;
		cout << "Enter the length of the rectangle." << endl;
		while (!(cin >> rectangle_a)) {
			cout << "Enter the lengh of the rectangle: " << endl;
			cin.clear();
			cin.get();
		}
		cout << "Enter the width of the rectangle." << endl;;
		while (!(cin >> rectangle_b)) {
			cout << "Enter the width of the rectangle: " << endl;
			cin.clear();
			cin.get();
		}
		cout << endl << endl;
		auto rectangle = []()
		{
			cout << "Your figure: rectangle." << "\n" << "Description: a quadrilateral in which all angles are right.";
		};
		rectangle();
		cout << endl << endl;
		auto rectangle_figure = [](int rectangle_a, int rectangle_b)
		{
			for (int i = 1; i <= rectangle_a; i++)
			{
				for (int j = 1; j <= rectangle_b; j++)
				{
					cout << "*";
				}
				cout << endl;
			}
		};
		rectangle_figure(rectangle_a, rectangle_b);
		cout << endl << endl;
		auto rectangle_points = []() {cout << "Points to plot: 4"; };
		rectangle_points();
		cout << endl << endl;
		auto rectangle_points_two = [](int rectangle_a, int rectangle_b)
		{
			cout << "The drawing consists of " << rectangle_a * rectangle_b << " points.";
		};
		rectangle_points_two(rectangle_a, rectangle_b);
		cout << endl << endl;
		auto rectangle_sizes = [](int rectangle_a, int rectangle_b) {cout << "Sizes figure: side I = " << rectangle_a << " " << "side II = " << rectangle_b << " " << "side III = " << rectangle_a << " " << "side IV = " << rectangle_b; };
		rectangle_sizes(rectangle_a, rectangle_b);
		cout << endl << endl;
		auto rectangle_perimetr = [](int rectangle_a, int rectangle_b) {cout << "Perimetr: " << (rectangle_a + rectangle_b)*2; };
		rectangle_perimetr(rectangle_a, rectangle_b);
		cout << endl << endl;
	}

};

int main()
{
	Figure figure;
	figure.Rectangle();
}