#include <iostream>
double **p = nullptr;
double *value = new double(2.0);
p=new double*;
p = value;
std::cout<<**p<<std::endl;
delete *p;
delete p;

