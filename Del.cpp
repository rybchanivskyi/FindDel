#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x;
    cout<<"Input x = ";
    cin>>x;
    cout<<"\n";
    for(int i = 1 ; i <= sqrt(x);++i)
    {
        if (x%i==0 and i != sqrt(x))
        {
            cout << i << " " << x/i<< " ";
        }
        if (i == sqrt(x))
        {
            cout<< sqrt(x)<<" ";
        }
    }


    return 0;
}
