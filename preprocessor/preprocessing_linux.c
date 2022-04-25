#include <stdio.h>




#define PLATFORM_NAME "UNKNOWN"

int imWindows();
static int imLinux() __attribute__((constructor));
void exitW();
static void exitL() __attribute__((destructor));

#if defined(_WIN32) || defined(_WIN64) || defined(__CYGWIN__)
	#pragma startup imWindows
	#pragma exit exitW 
#endif


#if defined(linux) 
	#undef PLATFORM_NAME
	#define PLATFORM_NAME "LINUX"
#else
	#error "not POSIX compliant, Obsolete"
#endif

#define DEBUG 1

#define debug_print(fmt, ...) \
            do { if (DEBUG) fprintf(stderr, fmt, __VA_ARGS__); } while (0)





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
	/*printf("%s\n", PLATFORM_NAME);
	#undef PLATFORM_NAME
	#ifndef PLATFORM_NAME
		printf("got deleted!\n");
		#ifdef DEBUG_ERROR
			#error "PLATFORM_NAME got deleted"	
		#endif
	#endif*/
}

