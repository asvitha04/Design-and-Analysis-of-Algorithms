#include<iostream>
using namespace std;

int main()
{
	int A, B, C;
	cout<<"A \t B \t C \t (A+AB).(B+BC)\n";

	for(A=0; A<=1; A++)
	{
		for(B=0;B<=1; B++)
		{
            for(C=0;C<=1;C++)
			{
				int result=((A||(A&&B)) && (B||(B&&C)));
				cout<<A<< " \t "<<B<<" \t "<<C<<" \t "<<result<<" \n " ;
			}
		}
	}

    return 0;
}
