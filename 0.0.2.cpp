#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    bool fail = false;
    int num[10], a, b, c, d;
    string str;
    for (str ; getline(cin, str); )
    {
        istringstream stream(str);
        for (c = 0; c < 10; ++c)
        {
        if (!(stream >> num[c]))
        {
            cout << "An error has occurred while reading the input sequence";
            return 0;
        }
            
        }
        break;
    }
    
    for (k = 0; c < 9 ; c++)
        if (num[c] > num[c+1])
        {
            cout << "The input sequence must be non-decreasing.";
            return 0;
        }
    cin >> a;
    for (c = 0; c <10; c++)
    {
        for (d = c + 1; d <10; d++)
        {
            b = num[c]+num[d];
            if(s == a)
            {
                cout << num[c] << ' '<< num[d];
                return 0;
            }
            else fail = true;
        }
    }
    if (fail) cout << "There is no such pair of num.";
    return 0;
}
