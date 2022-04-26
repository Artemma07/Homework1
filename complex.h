#pragma once
#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>

using namespace std;


struct Complex
{
	double im = 0;
	double re = 0;
	Complex sum(Complex n2);
	Complex minus(Complex n2);
	Complex multi(Complex n2);
	Complex div(Complex n2);
	double leng();
	void WriteConsole();
};

#endif