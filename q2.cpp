//Name : Muhammad Fazeel
//Roll no : Bsef20a025
//Section : Afternoon 
#include<iostream>
using namespace std;
int main()
{
	int width ;
	int  height ;
	cout << "(This programe make a hollow rectangle by taking its hieght and width from the user!!!)" << endl;

	cout << "Enter the width" << endl;
	cin >> width ;
	cout << "Enter the height" << endl;
	cin >> height ;
	for (int i = 1; i <= width ; i++)
	{

		for (int a = 1; a <= height ; a++)
		{

			if (i == 1 || i == width  || a == 1 || a == height )// condition 
				cout << "*";
			else
				cout << " ";
		}

		cout << endl;
	}


	return 0;
}