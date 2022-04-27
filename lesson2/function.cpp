#include "function.h"


int* generateData(int*& inbuf, int& count) {
	int num = (rand() / (RAND_MAX + 1.) * 10);
	int* ret = 0;
	*(inbuf + count) = num;
	count++;
	if (count == BUFSIZE) {
		count = 0;
		ret = inbuf;
		inbuf = new int[BUFSIZE];
	}
	return ret;
}


void processData(int*& outbuf, int& count, int& total) {
	if (!outbuf) {
		return;
	}
	total += *(outbuf + count);
	count++;
	if (count == BUFSIZE) {
		count = 0;
		delete[]outbuf;
		outbuf = NULL;
	}
}