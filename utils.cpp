#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::endl;

#include "globals.h"

void report() {
	string msg = "The state of each cell is determined in the world class by the getnextstate member function.\n";
	msg += "The next state of each cell is determined based on the current state of its neighboring cells.\n";
    msg+="If the cell is currently dead but 3/8 of it neighboring cells are alive the cell will be alive (birthed) in the next state.\n";
	msg += "We can keep track of birth by including some sort of recorder within the if statment that sets the cell state to be alive,\n";
		msg += "or just simply comparing the diffrence between the m_otherWorld and m_world array.";
	 cout<< msg;
}

#include <chrono>
#include <thread>

void delay(int ms) {
	std::this_thread::sleep_for(std::chrono::milliseconds(ms));
}

#ifdef _MSC_VER  //  Microsoft Visual C++

#include <windows.h>

void clearScreen()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	GetConsoleScreenBufferInfo(hConsole, &csbi);
	DWORD dwConSize = csbi.dwSize.X * csbi.dwSize.Y;
	COORD upperLeft = { 0, 0 };
	DWORD dwCharsWritten;
	FillConsoleOutputCharacter(hConsole, TCHAR(' '), dwConSize, upperLeft,
		&dwCharsWritten);
	SetConsoleCursorPosition(hConsole, upperLeft);
}
#endif
