#pragma once
#include <iostream>;
const int BUFSIZE = 10;
const int ITERATIONS = 50;

void processData(int*& outbuf, int& count, int& total);

int* generateData(int*& inbuf, int& count);
