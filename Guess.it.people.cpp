// Game Guess it : You is Role and Computer is Player

#include <iostream>
#include <cmath>
#include <cstdlib>

#define MIN 1

using namespace std;

long long computerThink(long long a, long long b);

char ansRole(char &ans);

long long uplateData(long long &a, long long &b, long long &num, char ans, long long &turn);

long long maxTurn(long long a);

int main()
{
    long long max;
    long long a = MIN, b, turn;
    long long count = 0 ;
    char ans;
    do
    {
        system("cls");

        cout << "Enter MAX = ";
        cin >> max;
        b = max;
        turn = maxTurn(b);
        cout << "With this estimate.\n"
             << "The computer will definitely find out your "
             << "per-selected number in " << b << " turn\n"
             << "\aI Shift You Not.\n";
             system("pause");

        do
        {
            count ++;
            cout << "\n" << count << " Guess\n";
            long long taget = computerThink(a, b);
            cout << "Answer computer: " <<  taget ;
            ans = ansRole(ans);
            uplateData(a, b, taget, ans, turn);

        }while(ans != 'T' && turn > 0);



    }while (1);

}
long long computerThink(long long a, long long b)
{
    a = a + b;
    return ( a / 2);
}
char ansRole(char &ans)
{
        cout << " is "
             << "True = T\t Bigger = B\t, Smaller = S\t"
             << " With your number"
             << "\nAnswer of Role = ";
        cin >> ans;

    return ans;
}
long long uplateData(long long &a, long long &b, long long &num, char ans, long long &turn)
{
    if ( ans == 'T' || ans == 't')
    {
        cout << "Computer is Knowing\n";
        return 0;
    }
    else
    {
        if ( ans == 'B')
        {
            a = num;

        }
        else
        {

            b = num;
        }
    }
    cout << "Computer rests " << turn << " turn in game\n";
    cout << "==> Number is between " << a << " and " << b << endl;
    //return ( a , b);
}
long long maxTurn(long long a)
{
    double taget = log2(a);
    if ( taget -  int(taget) != 0)
    {
        return taget + 1;
    }

    return taget;
}
