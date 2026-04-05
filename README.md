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

### Descripción de la solución
La solución recorre el arreglo una sola vez (complejidad temporal $O(n)$) y mantiene un registro del menor precio observado hasta el momento. En cada paso de la iteración, calcula la ganancia potencial asumiendo que se vende la acción en ese día (precio actual menos el precio mínimo histórico). Si esta ganancia potencial es mayor que la ganancia máxima registrada, se actualiza el valor máximo. Al finalizar el recorrido, se devuelve la ganancia máxima obtenida. Esto requiere de un espacio de memoria extra constante (complejidad espacial $O(1)$).

### Justificación de determinismo y factibilidad
El algoritmo es determinista porque no involucra operaciones aleatorias ni depende de estado externo. Para una misma secuencia de precios siempre ejecuta las mismas comparaciones y asignaciones en el mismo orden, produciendo resultados idénticos y predecibles.

En cuanto a su factibilidad, el algoritmo es completamente viable dados los límites de entrada. El tamaño máximo del arreglo `prices` es de $10^5$ elementos. La solución propuesta tiene una complejidad temporal $O(n)$, lo que significa que realizará a lo sumo $10^5$ iteraciones. Considerando que los procesadores modernos pueden procesar alrededor de $10^8$ operaciones por segundo, el programa ejecutará esta tarea en una pequeña fracción de milisegundo, cumpliendo con holgura los límites de tiempo. Además, la complejidad espacial es $O(1)$, empleando solo variables primitivas sin asignar nuevas estructuras de datos en memoria, lo que garantiza que no se excedan los límites de espacio.

### Argumento de finitud
El algoritmo es finito y está garantizado a terminar porque se basa en un único bucle que recorre de forma secuencial el arreglo de entrada `prices`. La longitud de este arreglo, digamos $n$, es finita y estrictamente conocida de antemano. En cada iteración, el índice de control avanza positivamente paso a paso, sin condiciones que permitan retroceder o estancarse en el mismo elemento. Adicionalmente, dentro del bucle solo se realizan operaciones aritméticas básicas y asignaciones condicionales que operan en tiempo constante ($O(1)$) y no contienen llamadas recursivas ni otros bucles que dependan de cambios de estado inciertos. Por consiguiente, tras procesar el elemento $n$, la ejecución del ciclo concluye ineludiblemente, garantizando que el algoritmo termine en un número finito de pasos.

### Invariante y Monotonicidad
Con prespecto a invariante, al finalizar cada iteración i, la variable `maxProfit` contiene la ganancia máxima encontrada hasta ese momento entre todos los pares (compra, venta) donde la compra ocurre en una posición anterior a i.

En cuanto a monotonicidad del algoritmo se cumple en dos variables clave. Por un lado, el precio mínimo acumulado es no creciente, porque en cada iteración se conserva el menor valor observado (`buy`) hasta ese punto. Por otro lado, la ganancia máxima acumulada es no decreciente, ya que solo se actualiza cuando aparece una ganancia mayor. Estas dos propiedades garantizan estabilidad durante el recorrido y aseguran que, al finalizar, se obtiene correctamente el máximo beneficio posible.

### Complejidad temporal y espacial
En la implementación principal de src/solucion.cpp la complejidad temporal es de $O(n)$ porque el arreglo se recorre una sola vez mediante un bucle lineal.En cada iteracion se realizan operaciones de costo constante, por lo que el costo total crece proporcionalmente al tamaño de la entrada.
La complejidad espacial de esta misma funcion es $O(1)$, ya que solo se usan variables auxiliares escalares y no se reserva momoria adicional dependiente de n.

### 
