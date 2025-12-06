# 🎨 Colores en C++ (Consola)

Se muestra como utilizar el método `SetConsoleTextAttribute` en C++ para cambiar color de texto en consola

👀 Solo funciona para **Windows**

---
### Tabla de Colores
|Codigo|       Color      | 
|:----:|:-----------------|
| 0    | Negro            |
| 1    | Azul             |
| 2    | Verde            |
| 3    | Cian             |
| 4    | Rojo             |
| 5    | Púrpura          |
| 6    | Amarillo         |
| 7    | Blanco           |
| 8    | Gris             |
| 9    | Azul Claro       |
| 10   | Verde Claro      |
| 11   | Aqua Claro       |
| 12   | Rojo Claro       |
| 13   | Rosa             |
| 14   | Amarillo Claro   |
| 15   | Blanco Brillante |
---
### Cómo Usarlo
- Importar la librería **Windows.h**
```c++
#import <Windows.h>
```
- Obtener el **HANDLE** de consola
```c++
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
```
- Cambiar el color de texto
```c++
SetConsoleTextAttribute(hConsole, 2); // Color: Verde
```
---
### Salida en Consola de Colores
![output](/colors-output.png)
