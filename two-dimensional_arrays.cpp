#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


#define ROW 100
#define COL 100

int main()
{
	int a[ROW][COL];
	int row, col;

	cout << "Row Input: ";
	cin >> row;
	cout << "Col Input: ";
	cin >> col;

	srand(time(NULL));
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			a[i][j] = rand() % 10 + 1;
		}
	}


	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			if (j == row - 1)
				cout << a[i][j] << endl;
			else
				cout << a[i][j] << " ";
		}
	}
	return 0;

}