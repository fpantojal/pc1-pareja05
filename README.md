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

### Especificación de problema breve
#### Especificación: Best Time to Buy and Sell Stock

##### 1. Descripción del Problema
Dado un arreglo `prices` donde `prices[i]` representa el precio de una acción determinada en el día `i`, el objetivo es maximizar la ganancia eligiendo **un solo día** para comprar una acción y **un día diferente en el futuro** para venderla.

##### 2. Entradas y Salidas
* **Entrada:** `prices` (Un arreglo de números enteros).
    * $1 \le \text{prices.length} \le 10^5$
    * $0 \le \text{prices[i]} \le 10^4$
* **Salida:** `profit` (Un número entero).
    * Representa la diferencia máxima entre el precio de venta y el de compra.
    * Si no es posible obtener ninguna ganancia, el valor de retorno debe ser `0`.

##### 3. Restricciones Lógicas
* **Temporalidad:** La venta debe ocurrir estrictamente después de la compra ($index_{venta} > index_{compra}$).
* **Operaciones:** Solo se permite realizar **una única transacción** (una compra y una venta).
* **Eficiencia:** Debido al tamaño de la entrada ($10^5$), se requiere una solución de paso único o técnica eficiente para evitar un tiempo de ejecución excedido.