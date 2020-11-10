#include <sodium.h>
#include <stdio.h>

void print_uuid(char* byte_string) {
	for (int i = 0; i < 16; i++) {
		if (i == 4)
			printf("-%02hhx", byte_string[i]);
		else if (i == 6)
			printf("-%02hhx", byte_string[i]);
		else if (i == 7)
			printf("%02hhx", (byte_string[i] & 0xf0) | 0x04);
		else if (i == 8)
			printf("-%02hhx", (byte_string[i] | 0x01) & 0xfd);
		else if (i == 10)
			printf("-%02hhx", byte_string[i]);
		else
			printf("%02hhx", byte_string[i]);
	}
	printf("\n");
}

int main() {

	char byte_string[16];

	// get 128 random bits from the csprng
	randombytes_buf(byte_string, 16);

	// mask and print the uuid
	print_uuid(byte_string);

	return 0;
}
