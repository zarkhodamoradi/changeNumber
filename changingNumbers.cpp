#include <iostream>
using namespace std;

void sad(long);
void dah(int);
void dbt(int);
void yek(int);
void seraghm(int);

/*/////////////////////////tabe///////////////////////////*/
void sad(int x)
{
    int sadgan = x / 100;
    switch (sadgan)
    {
    case 1:
        cout << "sad";
        break;
    case 2:
        cout << "devist";
        break;
    case 3:
        cout << "sisad";
        break;
    case 4:
        cout << "charsad";
        break;
    case 5:
        cout << "pansad";
        break;
    case 6:
        cout << "sheshsad";
        break;
    case 7:
        cout << "haftsad";
        break;
    case 8:
        cout << "hashtsad";
        break;
    case 9:
        cout << "nohsad";
        break;
    }
}
/*/////////////////////////tabe///////////////////////////*/
void dah(int x)
{
    int dahgan = (x % 100) / 10;

    switch (dahgan)
    {

    case 2:
        cout << "bist";
        break;
    case 3:
        cout << "si";
        break;
    case 4:
        cout << "chehel";
        break;
    case 5:
        cout << "panjah";
        break;
    case 6:
        cout << "shast";
        break;
    case 7:
        cout << "haftad";
        break;
    case 8:
        cout << "hashtad";
        break;
    case 9:
        cout << "navad";
        break;
    }
}
/*/////////////////////////tabe///////////////////////////*/

void dbt(int x)
{
    int db = x % 100;

    switch (db)
    {
    case 10:
        cout << "dah";
        break;
    case 11:
        cout << "yazdah";
        break;
    case 12:
        cout << "davazdah";
        break;
    case 13:
        cout << "sizdah";
        break;
    case 14:
        cout << "chardah";
        break;
    case 15:
        cout << "panzdah";
        break;
    case 16:
        cout << "shanzdah";
        break;
    case 17:
        cout << "hefdah";
        break;
    case 18:
        cout << "hejdah";
        break;
    case 19:
        cout << "noozdah";
        break;
    }
}
/*/////////////////////////tabe///////////////////////////*/
void yek(int x)
{
    int yekan = x % 10;
    switch (yekan)

    {
    case 1:
        cout << "yek";
        break;
    case 2:
        cout << "do";
        break;
    case 3:
        cout << "se";
        break;
    case 4:
        cout << "char";
        break;
    case 5:
        cout << "panj";
        break;
    case 6:
        cout << "shesh";
        break;
    case 7:
        cout << "haft";
        break;
    case 8:
        cout << "hasht";
        break;
    case 9:
        cout << "noh";
        break;
    }
}
/*/////////////////////////tabe///////////////////////////*/

void seraghm(int x)
{
    int sadgan = x / 100;
    int dahgan = (x % 100) / 10;
    int db = x % 100;
    int yekan = x % 10;

    if (sadgan == 0)
    {
        if (dahgan == 0)
        {
            if (yekan != 0)
            {
                yek(x);
            }
        }
        else if (dahgan != 0)
        {
            if (dahgan == 1)
            {
                dbt(x);
            }
            else if (dahgan > 1)
            {
                dah(x);
                if (yekan == 0)
                {
                }
                else if (yekan != 0)
                {
                    cout << " o ";
                    yek(x);
                }
            }
        }
    }

    if (sadgan != 0)
    {
        sad(x);
        if (dahgan == 0)
        {
            if (yekan != 0)
            {
                cout << " o ";
                yek(x);
            }
        }
        else if (dahgan != 0)
        {
            cout << " o ";
            if (dahgan == 1)
            {
                dbt(x);
            }
            else if (dahgan > 1)
            {
                dah(x);
                if (yekan == 0)
                {
                }
                else if (yekan != 0)
                {
                    cout << " o ";
                    yek(x);
                }
            }
        }
    }
}

/*/////////////////////////tabe///////////////////////////*/

int main()
{
    long int x;
    do
    {

        cout << "Please enter a number : ";
        cin >> x;

        long int milyard = x / 1000000000;
        int milyoon = (x % 1000000000) / 1000000;
        int hezar = (x % 1000000) / 1000;
        int sad = x % 1000;

        if (x == 0)
        {
            cout << endl;
            cout << "Going out ..." << endl;
            break;
        }

        cout << endl;
        cout << "-------------result-------------" << endl;
        cout << endl;
        cout << "Number changed: ";

        if (milyard == 0)
        {
            if (milyoon == 0)
            {
                if (hezar == 0)
                {
                    if (sad == 0)
                    {
                    }
                    else if (sad != 0)
                    {
                        seraghm(sad);
                    }
                }
                else if (hezar != 0)
                {
                    seraghm(hezar);
                    if (sad == 0)
                    {
                        cout << " hezar ";
                    }
                    else if (sad != 0)
                    {
                        cout << " hezar o ";
                        seraghm(sad);
                    }
                }
            }
            else if (milyoon != 0)
            {
                seraghm(milyoon);
                if (hezar == 0)
                {
                    if (sad == 0)
                    {
                        cout << " milioon ";
                    }
                    else if (sad != 0)
                    {
                        cout << " milioon o ";
                        seraghm(sad);
                    }
                }
                else if (hezar != 0)
                {
                    cout << " milioon o ";
                    seraghm(hezar);
                    if (sad == 0)
                    {
                        cout << " hezar ";
                    }
                    else if (sad != 0)
                    {
                        cout << " hezar o ";
                        seraghm(sad);
                    }
                }
            }
        }

        else if (milyard != 0)
        {
            seraghm(milyard);
            if (milyoon == 0)
            {
                if (hezar == 0)
                {
                    if (sad == 0)
                    {
                        cout << " milyard ";
                    }
                    else if (sad != 0)
                    {
                        cout << " milyard o ";
                        seraghm(sad);
                    }
                }
                else if (hezar != 0)
                {
                    cout << " milyard o ";
                    seraghm(hezar);
                    if (sad == 0)
                    {
                        cout << " hezar ";
                    }
                    else if (sad != 0)
                    {
                        cout << " hezar o ";
                        seraghm(sad);
                    }
                }
            }
            else if (milyoon != 0)
            {
                cout << " milyard o ";
                seraghm(milyoon);
                if (hezar == 0)
                {
                    if (sad == 0)
                    {
                        cout << " milioon ";
                    }
                    else if (sad != 0)
                    {
                        cout << " milioon o ";
                        seraghm(sad);
                    }
                }
                else if (hezar != 0)
                {
                    cout << " milioon o ";
                    seraghm(hezar);
                    if (sad == 0)
                    {
                        cout << " hezar ";
                    }
                    else if (sad != 0)
                    {
                        cout << " hezar o ";
                        seraghm(sad);
                    }
                }
            }
        }

        cout << endl;
        cout<<endl;
        cout << "-------------------------------" << endl;
        cout << endl;
        cout << "Enter 0 to exit the program " << endl;
        cout << endl;

    } while ((true));
}
