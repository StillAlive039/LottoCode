// LottoResults.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <ctime>
#include <cmath>
#include <stdlib.h>
#include <fstream>

using namespace std;

int main()
{
	ofstream Sample;
	Sample.open("C:\\Users\\Asus\\Documents\\Sample.txt");
	int a, b, c, d, e, f, g, h, i, j, k, l, m, n=0;
	for (a = 1; a <= 58; a++)                                                     
	{
		for (b = 2; b <= 58; b++)
		{
			for (c = 3; c <= 58; c++)
			{
				for (d = 4; d <= 58; d++)
				{
					for (e = 5; e <= 58; e++)
					{
						for (f = 6; f <= 58; f++)
						{
							if (a < b && b < c && c < d && d < e && e < f)
							{
								Sample << a << " " << b << " " << c << " " << d << " " << e << " " << f << endl;
								n++;
							}
						}
					}
				}
			}
		}
	}
	cout << "Nice!" << endl << "There were " << n << " combinations!" << endl;
	cout << '\a';
	cin.get();
}
// 6-42,      6-45,      6-49,       6-55,       6-58
//[5,245,786][8,145,060][13,983,816][28,989,675][40,475,358]
