#ifndef __APE_BASE64_H
#define __APE_BASE64_H

int base64_decode(unsigned char * out, const char *in, int out_length);
char *base64_encode(unsigned char * src, int len);

#endif

