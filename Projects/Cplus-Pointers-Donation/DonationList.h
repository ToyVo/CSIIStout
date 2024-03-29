#ifndef DONATIONLIST_H
#define DONATIONLIST_H

class DonationList
{
private:
	int numDonations;
	double *donations;
	double **arrPtr;
	void selectSort();
public:
	DonationList(int num, double gifts[]);
     ~DonationList(); 
	void show();
	void showSorted();
};
#endif