#include <iostream>
#include<time.h>
using namespace std;
class abc
{
public:
};
int main()
{
    srand(time(0));
    int acount = 0, bcount = 0, s, p, q;
    char c;

    cout << "selecting the dice number" << endl;
    s = rand() % 6 + 1;
    cout << s << "is selected" << endl;
    while (acount < 10 && bcount < 10)
    {
        cout << "player 1 turn:\nenter any key to roll dice\n";
        cin >> c;
        p = rand() % 6 + 1;
        q = rand() % 6 + 1;
        cout << p << "and" << q << endl;
        if (p == s)
        {
            acount++;
        }
        if (q == s)
        {
            acount++;
        }
        cout << "player 1 points" << acount << endl;
        cout << "player 2 turn:\nenter any key to roll dice\n";
        cin>>c;
        p = rand() % 6 + 1;
        q = rand() % 6 + 1;

        cout << p << "and" << q << endl;
        if (p == s)
        {
            bcount++;
        }
        if (q == s)
        {
            bcount++;
        }
        cout << "player 2 points" << bcount << endl;
    }
    if (acount > bcount)
    {
        cout << "player 1 is winner";
    }
    else
    {
        cout << "player 2 is winner";
    }
    return 0;
}