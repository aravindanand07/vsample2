// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include<iostream>
using namespace std;

int main()
{
	int a = 30, i=1;
	while (i < a)
	{
		i = i++;
		cout << i;
	}
	getchar();
}
