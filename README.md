# 🎨 Colores en C++ (Consola)

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
### Aplicar
- Importar la librería **Windows.h**
```c++
#import <Windows.h>
```
- Instanciar el objeto **HANDLE**
```c++
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
```
- Cambiar el color de texto en Consola
```c++
SetConsoleTextAttribute(hConsole, 2); // Color Output: Verde
```
---
### Salida en Consola de Colores
![output](/colors-output.png)
