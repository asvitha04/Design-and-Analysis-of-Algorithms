#include<iostream>
using namespace std;

int main()
{
	int X, Y, Z;
	cout<<"X \t Y \t Z \t XY+Z\n";

	for(X=0; X<=1; X++)
	{
		for(Y=0;Y<=1; Y++)
		{
            for(Z=0;Z<=1;Z++)
			{
				if((X &&Y) || Z)
				{
					cout<<X<< " \t "<<Y<<" \t "<<Z<<" \t 1\n";
				}
				else
				{
					cout<<X<< " \t "<<Y<<" \t "<<Z<<" \t 0\n";
				}
			}
		}
	}

    return 0;
}
