#include <stdio.h>
#include <stdint.h>
#include <netinet/in.h>

int main(int argc, char *argv[]) {
        if(argc != 3) {
                return -1;
        }
	int x, y, z;
        FILE *point1, *point2;
        uint32_t n1, n2;
        point1 = fopen(argv[1], "rb");
        point2 = fopen(argv[2], "rb");

        fread(&n1, sizeof(int), 1, point1);
        fread(&n2, sizeof(int), 1, point2);
        x = (ntohl(n1));
	y = (ntohl(n2));
	z = int(ntohl(n1)) + int(ntohl(n2));
	printf("%d(0x%x) + %d(0x%x) = %d(0x%x)", x, x, y, y, z, z);
		

        fclose(point1);
        fclose(point2);
        return 0;
} 
