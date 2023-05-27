#include <iostream>
using namespace std;



	int main() {

		int lenght;
		int weight;
		int index = 0;
		

		cout << "Enter lenght of the rectangle: " << endl;
		cin >> lenght;

		cout << "Enter weight of the rectangle: " << endl;
		cin >> weight;
   
		for (index = 0; index < weight; index++) 
		{
			
			for (int j = 0; j < lenght; j++)
			{
			
				cout << "*";

			}
			cout << endl;
		}
	
	}




	


