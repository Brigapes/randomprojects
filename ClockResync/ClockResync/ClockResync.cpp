// ClockResync.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>

int main()
{
	//bool empty = true;

	while (true) {

		system("w32tm /resync");
		Sleep(5000);

	}

    return 0;
}

