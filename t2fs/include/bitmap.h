

#ifndef __SUPPORTT2FS___
#define __SUPPORTT2FS___

void setBit(unsigned char *bitmap, int n) ;

void clearBit(unsigned char *bitmap, int n);

int getBit(unsigned char *bitmap, int n);

int setAndReturnBit(unsigned char *bitmap, int bufferStart, int bufferSizeBytes);

#endif
