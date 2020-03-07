/* Printing different patterns  */

#include<iomanip>
#include<iostream>
using namespace std;

int main()
{
	int Max = 6;
	int row = 0;
	for(int i=1;i<12;i++)
	{
		if(i<7)
			row++;
		else
			row--;
		cout<<setfill('*')<<setw(row+1);
		cout<<" "<<endl;
	}

	return 0;
}
