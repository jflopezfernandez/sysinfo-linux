
#include "includes/Main.hpp"


void clearScreen()
{
	system("clear");
}


void printLines(int n)
{
	printf("\n");

	for (int i = 0; i < n; ++i) {
		printf("\n");
	}
}


void printCompilationInfo()
{
	printf("\t\tCompiled on %s, at %s\n", __DATE__, __TIME__);
}


void printCppStandard()
{
	printf("\t\t\tC++ Standard: %li\n", __cplusplus);
}


void initializeProgram()
{
	clearScreen();
	printCompilationInfo();
	printCppStandard();
	printLines(2);
}

void terminateProgram()
{
	// .. nothing
}
