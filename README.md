# 🎨 Colors in console in C++

This shows how to use the `SetConsoleTextAttribute` method in C++ to change the text color in the console.

👀 Only works for **Windows**

### Text Color Chart (Foreground)

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

### How to Use it
- Import the **Windows.h** library
```c++
#import <Windows.h>
```
- Get the console **HANDLE**
```c++
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
```
- Change text color
```c++
SetConsoleTextAttribute(hConsole, 2); // Color: Green
```
---
