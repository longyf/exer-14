#include <iostream>
//#include "cut.h"
#include "myCut.h"
using namespace std;

void test(int length) {
    cout<<"The input is: "<<length<<endl;
    cout<<"The largest length is: "<<maxProductAfterCutting_solution1(length)<<" "<<maxProductAfterCutting_solution2(length)<<endl;

//	if (maxProductAfterCutting_solution1(length)!=maxProductAfterCutting_solution2(length)) cout<<length<<endl;

}

int main() {
	for (int i=1; i!=100; ++i) {
		test(i);
	}
	return 0;
}
