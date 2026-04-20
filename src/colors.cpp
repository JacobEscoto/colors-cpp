#include <iostream>
#include <iomanip>
#include <string>
#include <Windows.h>
using namespace std;

void printColor(HANDLE hConsole, int color)
{
    SetConsoleTextAttribute(hConsole, color);
    cout << "||||||||||||||||||||||||";
    SetConsoleTextAttribute(hConsole, 15);
}

void printTable(string colors[])
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    cout << "+---------+--------------------------+--------------------------+\n";
    cout << "| Code    | Color Name               | Output                   |\n";
    cout << "+---------+--------------------------+--------------------------+\n";
    for (int i = 0; i < 16; i++)
    {

        cout << "| " << left << setw(7) << i
             << " |  " << left << setw(24) << colors[i]
             << "| ";
        printColor(hConsole, i);
        cout << " ";

        cout << "|\n";
    }
    cout << "+---------+--------------------------+--------------------------+\n";
}

int main()
{
    string colors[16] = {
        "Black", "Blue", "Green", "Cyan", "Red", "Purple",
        "Yellow", "White", "Gray", "Light Blue", "Light Green",
        "Light Aqua", "Light Red", "Pink", "Light Yellow", "Bright White"};
    printTable(colors);
}