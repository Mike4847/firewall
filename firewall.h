#define _GNU_SOURCE
#include <stdio.h>
#ifdef _WIN32
// Windows does not have unistd.h; provide alternatives or stubs as needed
#else
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#endif
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>
#include <assert.h>
#include <errno.h>
#include <stdio.h>

#define int8 int8_t
#define int16 int16_t
#define int32 int32_t
#define uint32 uint32_t
#define int64 int64_t
#define uint64 int64_t
#define uint64 uint64_t
#define uint32 uint64_t
int main(int,char **);


typedef unsigned char IntId;
typedef uint64 MacAdrress;
typedef uint32 IpAdrress ;



/*Interface e/0/1
    MacAddress 48 bits
    ip address 32




*/

struct InterFace{
    IntId IntId:3;
    MacAdrress Adress:48;
    IpAdrress Ip;
        
};