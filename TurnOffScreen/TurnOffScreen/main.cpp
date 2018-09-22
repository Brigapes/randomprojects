#include <Windows.h>
#include <stdio.h>
#include <ios>



int main(void) {

	SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, 2);

	return 0;
}

