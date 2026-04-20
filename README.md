# 🎨 Colors in console in C++

This shows how to use the `SetConsoleTextAttribute` method in C++ to change the text color in the console.

👀 Only works for **Windows**

## 📊 Color Chart

|Code|       Color      | 
|:--:|:-----------------|
| 0  | Black            |
| 1  | Blue             |
| 2  | Green            |
| 3  | Cyan             |
| 4  | Red              |
| 5  | Purple           |
| 6  | Yellow           |
| 7  | White            |
| 8  | Gray             |
| 9  | Light Blue       |
| 10 | Light Green      |
| 11 | Light Aqua       |
| 12 | Light Red        |
| 13 | Pink             |
| 14 | Light Yellow     |
| 15 | Bright White     |

## ❓ How to Use

### Basic Usage
```c++
#include <Windows.h>

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, 2); // Green text
cout << "Hello World!" << endl;
SetConsoleTextAttribute(hConsole, 7); // Reset to white
```

### Combined Colors (Foreground + Background)

You can combine a text color with a background color using the operator `|`:

```c++
// Yellow text on red background
SetConsoleTextAttribute(hConsole, 6 | (4 << 4));
```

### Complete Example - Color Table
```c++
#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;

void printColor(HANDLE hConsole, int color) {
    SetConsoleTextAttribute(hConsole, color);
    cout << "||||||||||||||||||||||||";
    SetConsoleTextAttribute(hConsole, 15); // Reset to white
}

int main() {
    string colors[16] = {
        "Black", "Blue", "Green", "Cyan", "Red", "Purple",
        "Yellow", "White", "Gray", "Light Blue", "Light Green",
        "Light Aqua", "Light Red", "Pink", "Light Yellow", "Bright White"
    };
    
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    
    cout << "+---------+--------------------------+--------------------------+\n";
    cout << "| Code    | Color Name               | Output                   |\n";
    cout << "+---------+--------------------------+--------------------------+\n";
    
    for (int i = 0; i < 16; i++)
    {
        cout << "| " << left << setw(7) << i
             << "| " << left << setw(24) << colors[i]
             << "| ";
        printColor(hConsole, i);
        cout << " |\n";
    }
    
    cout << "+---------+--------------------------+--------------------------+\n";
    return 0;
}
```

## 📖 Resources

[Microsoft Docs: SetConsoleTextAttribute](https://learn.microsoft.com/en-us/windows/console/setconsoletextattribute)
