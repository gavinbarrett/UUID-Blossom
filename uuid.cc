#include <sodium.h>

int main() {

	char string[32];

	randombytes_buf(string, 32);

	printf("%s\n", string);

	return 0;
}
