#include <iostream>
//Define the minimum operating system for the application:
#define _WIN32_WINNT _WIN32_WINNT_WINXP //Windows XP
//Get rid of the annoying min() and max() macros:
#define NOMINMAX
//Include the windows header:
#include <windows.h>

//Now write the entry point.  It is the 21st century, so write Unicode programs.  This is the Unicode entry point.
int wWinMain(HINSTANCE hInst, HINSTANCE prevInst, LPWSTR szCmdLine, int nCmdShow)
{
    while(true)
		std::cout<<"\a";
}