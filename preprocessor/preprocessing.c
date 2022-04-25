#include <stdio.h>




#define PLATFORM_NAME "UNKNOWN"

int imWindows();
int imLinux();
void exitW();
void exitL();


//#ifdef _WIN32 || _WIN64 || __CYGWIN__ // this is for windows
#if defined(_WIN32) || defined(_WIN64) || defined(__CYGWIN__) // this is for windows

	#pragma startup imWindows
	#pragma exit exitW 
#endif


#if defined(linux) // this is for linux
	#pragma startup imLinux
	#undef PLATFORM_NAME
	#define PLATFORM_NAME "LINUX"
#else
	#error "not POSIX compliant, Obsolete"
#endif

#define DEBUG 1 // just defining a macro constant

#define debug_print(fmt, ...) \
            do { if (DEBUG) fprintf(stderr, fmt, __VA_ARGS__); } while (0) // this is for showing off breaking preprocessor directive line





int imWindows()
{
	printf("I'm working from winbugs\n");
	return 0;
}

void exitW()
{
	printf("Bye! have a beautiful time! I'm a copycat from CP/M\n");
}


int imLinux()
{
	printf("Hello from the penguin!\n");
	return 0;
}

void exitL()
{
        printf("Bye! have a beautiful time! I'm finnish!\n");
}

void main()
{
	printf("%s\n", PLATFORM_NAME);
	#undef PLATFORM_NAME
	#ifndef PLATFORM_NAME
		printf("got deleted!\n");
		#ifdef DEBUG_ERROR
			#error "PLATFORM_NAME got deleted"	
		#endif
	#endif
}

