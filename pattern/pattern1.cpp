#include <bits/stdc++.h>
using namespace std;

void print1(int num1)
{
    for (int i = 0; i < num1; i++)
    {
        for (int j = 0; j < num1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // Output
    // ****
    // ****
    // ****
    // ****
}

void print2(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // Output
    // *
    // **
    // ***
    // ****
}

void print3(int num)
{
    for (int i = 1; i < num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    // Output
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // 1 2 3 4 5
    // 1 2 3 4 5 6
    // 1 2 3 4 5 6 7
    // 1 2 3 4 5 6 7 8
}
void print4(int num)
{
    for (int i = 1; i < num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    // Output
    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
    // 5 5 5 5 5
}
void print5(int num)
{
    for (int i = 1; i < num; i++)
    {
        for (int j = 0; j <= num - i + 1; j++)
        {
            cout << "* "
                 << " ";
        }
        cout << endl;
    }
    // Output
    //*****
    //****
    //***
    //**
    //*
}
void print6(int num)
{
    for (int i = 1; i < num; i++)
    {
        for (int j = 1; j <= num - i + 1; j++)
        {
            cout << j
                 << " ";
        }
        cout << endl;
    }
    // Output
    //*****
    //****
    //***
    //**
    //*
}

void print7(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num - i + 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < num - i + 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    // output
    //        *
    //       ***
    //      *****
    //     *******
    //    *********
}

void print8(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * num - (2 * i + 1); j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    // output
    //    *********
    //     *******
    //     *****
    //       ***
    //        *
}

void print10(int num)
{
    for (int i = 1; i < 2 * num - 1; i++)
    {
        int stars = i;
        if (i > num)
            stars = 2 * num - i;
        for (int j = 1; j < stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void print11(int num)
{
    int start = 1;
    for (int i = 0; i < num; i++)
    {
        if (i % 2 == 0)
            start = 1;
        else
            start = 0;
        for (int j = 0; j <= i; j++)
        {
            cout << start;
            // Flip The Value Here 0 1
            // 10
            start = 1 - start;
        }
        cout << endl;
    }
}

void print12(int num)
{
    int stars = 2 * (num - 1);
    for (int i = 1; i <= num; i++)
    {
        // numbers
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        // space
        for (int j = 1; j <= stars; j++)
        {
            cout << " ";
        }
        // Number
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        stars -= 2;
    }
}

void print13(int num)
{
    for (int i = 1; i <= num; i++)
    {
        int startNum = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << startNum << " ";
            startNum = startNum + 1;
        }
        cout << endl;
    }
}

void print14(int num)
{
    for (int i = 1; i < num; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void print15(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (char j = 'A'; j <= 'A' + (num - i - 1); j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void print16(int num)
{
    for (int i = 0; i < num; i++)
    {
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void print17(int num)
{
    for (int i = 0; i <= num; i++)
    {
        // space
        for (int j = 0; j <= num - i - 1; j++)
        {
            cout << " ";
        };
        // Print charcter

        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << ch;
            if (j <= breakpoint)
                ch++;
            else
                ch--;
        }
        // Space
        for (int j = 0; j <= num - i - 1; j++)
        {
            cout << " ";
        };
        cout << endl;
    }
}

void print18(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (char ch = 'E' - i; ch <= 'E'; ch++)
        {
            cout << ch << " ";
        };
        cout << endl;
    }
}

void print19(int num)
{
    int inis = 0;
    for (int i = 0; i < num; i++)
    {
        // stars
        for (int j = 1; j <= num - i; j++)
        {
            cout << "*";
        }
        // Space
        for (int j = 0; j < inis; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= num - i; j++)
        {
            cout << "*";
        }
        inis += 2;
        cout << endl;
    };
    inis = 8;
    for (int i = 1; i < num; i++)
    {
        // stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // Space
        for (int j = 0; j < inis; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        inis -= 2;
        cout << endl;
    };
}

void print20(int num)
{
    int spaces = 2 * num - 2;
    for (int i = 1; i <= 2 * num - 1; i++)
    {
        int star = i;
        if (i > num)
            star = 2 * num - i;
        for (int j = 1; j <= star; j++)
        {
            cout << "*";
        }

        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= star; j++)
        {
            cout << "*";
        }
        cout << endl;
        if (i < num)
            spaces -= 2;
        else
            spaces += 2;
    }
}

void print21(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (i == 0 || j == 0 || i == num - 1 || j == num - 1)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << endl;
    }
}

void print22(int num)
{

    for (int i = 0; i < num; i++)
    {

        for (int j = 1; j < num - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void print23(int num)
{

    for (int i = 0; i < num; i++)
    {

        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = num; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    int num1;
    cin >> num1;
    print23(num1);
    return 0;
}