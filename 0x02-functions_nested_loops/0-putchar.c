#include "main.h"
#define MAX_CHAR 9

int main(void){

	char charCount = 0u;
	char* string_ptr = "_putchar\n";

	while(charCount++ < MAX_CHAR){
		_putchar(*(string_ptr + charCount - 1));
	}

	return 0;
}
