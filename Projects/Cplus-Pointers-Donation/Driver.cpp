// This program shows the donations made to the United Cause
// by the employees of CK Graphics, Inc. It displays
// the donations in order from lowest to highest
// and in the original order they were received. 

#include <iostream>
#include "DonationList.h"

using namespace std;

int main()
{
	double funds[] = {5,  100, 5,  25, 10, 5,  25,  5,  5,  100, 10, 15,  10, 5,  10 };	                    				
	DonationList ckGraphics(15, funds);
	cout << "The donations sorted in ascending order are:\n";
	ckGraphics.showSorted();
	cout << endl;

	cout << "The donations in their original order are:\n";
	ckGraphics.show();

	system("pause");
	return 0;
}
