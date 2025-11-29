#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main()
{   
    short int sayi,i,j,control=1;
    cout << "Bir sayi giriniz: ";
    cin >> sayi;

    for(i=2;i<=sayi;i++)
    {
        control=1;
        for(j=2;j<=sqrt(i);j++)
        {
            if (i%j ==0)
            {
                control=2;
                break;
            }
        }
        if (control==1)
            cout<<i<<" ";
    }
    cout << endl;
    system("pause");
    return 0;      
}