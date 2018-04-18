#ifndef my_cut_h
#define my_cut_h
#include <iostream>
#include <stdexcept>
#include <cmath>
using namespace std;
int maxProductAfterCutting_solution1(int n) {
	if (n<2) return 0;
	if (n==2) return 1;
	if (n==3) return 2;

	int *temp=new int[n+1];
	temp[0]=0;
	temp[1]=1;
	temp[2]=2;
	temp[3]=3;

	int max=0;
	for (int i=4; i<=n; ++i) {
		max=0;
		for (int j=1; j<=i/2; ++j) {
			if (max<(temp[j]*temp[i-j])) {
				max=temp[j]*temp[i-j];
			}
		}
		temp[i]=max;
	}

	return temp[n];
}

int maxProductAfterCutting_solution2(int length) {
	if (length<=1) return 0;
	if (length==2) return 1;
	if (length==3) return 2;

	int timesof3=length/3;
	if (length-3*timesof3==1) timesof3--;
	int timesof2=(length-3*timesof3)/2;

	return (int)(pow(3,timesof3))*(int)(pow(2,timesof2));
}
#endif
