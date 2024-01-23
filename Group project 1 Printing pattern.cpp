#include <iostream>
using namespace std;
//A diamond shape by numbers
int main()
{
	int number1, number;
	cout <<"Enter number: ";
	cin >> number;
	number1 = number + 1;
	if (number >= 1)
	{
		for (int i = number1 ; i > 1; --i)
		{
			for (int j = i, k = number1; j >= 1; --j, --k)
			{
				cout << number1 - k;
			}
			for (int m = 1; m <= number1 - i; ++m)
			{
				cout <<"  ";
			}
			for (int l = i; l >= 1; --l)
			{
				if (l == i)
				cout << "\b";
				cout << -1+l;
			}
			cout << " " << endl;
		}
		for (int i = 1; i <= number1; ++i)
		{
			for (int j = 1; j <= i; ++j)
			{
				cout << j-1;
			}
			for (int k = number1 - 1; k >= i; --k)
			{
				cout << "  ";
			}
			for (int l = 1, m = number1 - 1; l <= i; ++l,--m )
			{
				if ( l == 1)
				cout<<"\b";
				cout<< i-l;
			}
			cout << " " << endl;
		}
	}
	else {
	cout << "ERROR!. You can't input less than one" << endl;
}
	return 0;
}
