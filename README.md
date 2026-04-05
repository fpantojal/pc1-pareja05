## Practica Calificada 1

### Integrantes
- Fabio Alberto Pantoja Limache
- Adriel Alejandro Espinoza Sandoval
### Problema asignado
- [Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/)

### Requisitos de Construcción
Para compilar este proyecto, necesitas tener instalado:
* **MSYS2 (UCRT64)**
* **GCC 15.2.0** o superior
* **CMake 3.20+**
* **Ninja** o **Make**

### Instrucciones de Compilación y Ejecución

Sigue estos pasos en tu terminal **UCRT64**:

1. **Generar el sistema de construcción:**
   ```bash
   cmake -S . -B build

2. **Compilar el proyecto:**
   ```bash
   cmake --build build --config Release

3. **Ejecutar el programa:**
   ```bash
   ./build/main_app.exe