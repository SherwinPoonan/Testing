// FirstApp_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <string>
#include <ctime>

using namespace std;
void test();

int main()
{
	test();
	int y=0;
	y = int(y);
START:
	std::srand(std::time(0));
	int x=std::rand()%100+1;
	
	cout << "Please guess a Number between 1 and 100" << endl;
	 while (true)
	{
		
			if (x < 2)
				cout << "Vampire" << endl;

			cin >> y;

			if (y == 2016)
			{
				cout << "This is Cheating :" << x << endl;
			}

			else if (y < x)
				cout << "Too Low,Please try again" << endl;
			else if (y > x)
				cout << "Too High,Please try again" << endl;

			else
			{
				cout << "Correct!!" << endl << "The number is : " << x << endl;
				break;
			}
		
	
	}
			cout << "Play again?" << endl << "1.Yes " << endl << "2.No" << endl;;
			cin >>y;
			y = int(y);
			if (y == 1)
				goto START;
			else
				cout << "Good Bye Loser";

			
	
    return 0;
}

void test()
{
	std::srand(std::time(0));
	int y = 1;
	while (true)
	{
		
		int x = std::rand() % 100 + 1;

		if (x < 2)
		{
			
			cout << " x: " << x << " y: " << y << " Vampire" << endl;
			break;
		}

		
			cout << x << endl;
			y++;

	}


}