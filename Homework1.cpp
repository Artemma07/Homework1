#include "Complex.h"

int main()
{
    Complex arr[2];
    cout << "Input 2 complex numbers: ";
    for (int ind = 0; ind < 2; ++ind)
    {
        double re = 0;
        double im = 0;
        if (!(cin >> re >> im))
        {
            cout << "Error!";
            return 0;
        }
        arr[ind] = { re, im };
    }

    arr[0].sum(arr[1]).WriteConsole();
    arr[0].minus(arr[1]).WriteConsole();
    arr[0].multi(arr[1]).WriteConsole();
    arr[0].div(arr[1]).WriteConsole();

    ifstream file("complex.txt");
    int n = 0;
    vector<Complex> p;
    while (!(file.eof()))
    {
        double re = 0, im = 0;
        file >> re >> im;
        p.push_back({ im,re });
        n++;
    }
    Complex maxim;
    double maxlen = 0;
    for (int ind = 0; ind < n; ++ind)
    {
        if (p[ind].leng() > maxlen)
        {
            maxlen = p[ind].leng();
            maxim = p[ind];
        }
    }
    cout << "Max len img: " << maxim.re << ((maxim.im < 0) ? "" : "+") << maxim.im << "i" << endl;
}