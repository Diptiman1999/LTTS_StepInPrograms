// C program to detect Operating System

#include <stdio.h>

// Driver Code
int main()
{

// Checking for windows OS with
// _WIN32 macro
#ifdef _WIN32
	printf("Windows OS.\n");

// Checking for mac OS with
// __APPLE__ macro

// Checking for linux OS with
// __linux__ macro
#elif __linux__
	printf("LINUX\n");

// Checking for unix OS with
// __unix__ macro
#elif __unix__
	printf("UNIX\n");

// If neither of them is present
// then this is printed...
#else
	printf("Sorry, the system are"
		"not listed above.\n");
#endif
	return 0;
}
