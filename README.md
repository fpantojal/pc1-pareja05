## Practica Calificada 1

### Integrantes
- Fabio Alberto Pantoja Limache
- Adriel Alejandro Espinoza Sandoval
### Problema asignado
- [Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/)





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

### Argumento de correctitud
Se demuestra mediante invariante de bucle e induccion.
sea i el indice de la iteracion actual. Al inicio de cada iteracion se mantiene la siguiente invariante:
* `buy` es el menor precio observado.
* `maxProfit` es la mayor ganancia valida obtenida hasta el momento, considerando solo ventas en dias ya procesador y compras en dias anteriores.
**Caso base**: antes de procesar el primer dia de venta imposible, `buy`se inicializa con el primer precio y `maxProfit` con 0.
Por tanto, el minimo precio observado y la mejor ganancia conocida están correctamente representados.
**Paso inductivo**: al procesar el dia i, hay 2 posibilidades.**1** Si el precio actual es mayor que `buy`, la ganancia candidata es `price[i] - buy`; al comparar con `maxProfit` conserva el mayor valor, la mejor ganancia acumulada sigue siendo correcta.**2**Si el precio actual es menor o igual que `buy`, se actualiza `buy`, preservando que `buy` sea el minimo procesad. **En ambos casos** la invariante se mantiene.

El bucle recorre un numero finito de posiciones y finalza en n-1. Al terminar, por la invariante, `maxProfit` coincide con la maxima ganancia posible. Si no existe ganancia positiva, el valor permanece en 0, que es exactamente la salida requerida. 


### 

### Instrucciones de Compilación y Ejecución

## Requisitos de Construcción
Para compilar este proyecto, necesitas tener instalado:
* **MSYS2 (UCRT64)**
* **GCC 15.2.0** o superior
* **CMake 3.20+**
* **Ninja** o **Make**


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
   ./build/benchmark.exe

### Descripción de tests

Los tests públicos verifican el comportamiento mínimo esperado de la solución.
* Ejecuta una serie de arreglos predeterminados con solución conocida.
* Verifica que `maxProfit` y `maxProfitBruteForce` devuelvan dicha solución correspendiente.

Los test internos verifican comportamientos más internos de la solución.
* `edge_cases` verifica que las funciones trabajen correctamente con casos borde, verificando su robustez.
* `test_internal` verifica que la función `maxProfit` es más optima o igual que `maxProfitBruteForce`, demostrando que la primera es una solución más óptima.

### Breve descripcion del benchmark 

El benchmark compara el rendimiento de dos enfoques para el problema de ganancia máxima.
* Genera arreglos de precios aleatorios ( de entre 0 y $10^4$) para tamaños creciendes de 1000, 5000, 10000, 50000 y 100000.
* Para cada tamaño, ejecuta 5 pruebas.
* Mide el tiempo promedio en microsegundos de `maxProfit` y `maxProfitBruteForce`.
* Imprime los resultados por tamaño para ver como escala cada algoritmo.

### Tabla resumida de builds y resultados

Con $10^4$ elementos y 5 pruebas

|Build|Flag|Tiempo Alg Ingenuo ($O(n^2)$)|Tiempo Alg Óptimo ($O(n)$)|
|----|----|----|----|
|Depuración|`-O0`|300.15 ms|0.055 ms|
|Depuración optimizado|`-Og`|145.2272 ms|0.0174 ms|
|Release|`-O2`|137.477 ms|0.0182 ms|
|Compacto|`-Os`|159.729 ms|0.0222 ms|

### Observación de sanitizers

Los sanitizers son utilidades adicionales al momento de compilar código para detectar problemas que usualmente son desapercibidos en una compilación normal.

**ASan** (AddressSanitizer) detecta accesos de memoria no reservadas para el programa.
* Todos los ejecutables corrieron sin observaciones

**UBSan** (UndefinedBehaviorSanitizer) detecta operaciones que no están definidas (como un overflow) y pueden causar comportamientos impredecibles y/o indeseables.
* Los ejecutables `benchmark` y `test_internal` (con arreglo de tamaño $10^5$) generaron un error de overflow al tomar tipo de datos `int`.

Esto apoya la idea que dependiendo del tamaño de la entrada y sus datos se puede requerir de una estructura de datos diferente para un mejor manejo y evitar comportamientos indefinidos. Fuera de ese marco, las funciones han demostrado ser robustas.

### Resumen de cobertura

Es una métrica que indica el porcentaje de líneas, ramas, funciones o condiciones del programa se ejecutan. Su objetivo es saber si existe parte de código que **no se ejecuta**.

### Resumen de profiling

Analiza el rendimiento de un programa. Su objetivo es saber **los recursos** que se toman en cada función como tiempo, memoria, consumo energético/CPU, etc.

### Microoptimización vs Algoritmo

Microoptimización se refiere a ajustes en el código que permita reducir los recursos usados de la computadora al ejecutar.
La discusión se centra entre trabajar con microoptimizaciones o con un algoritmo eficiente.
En un caso general, **trabajar con un algoritmo eficiente como base garantiza la eficiencia** a larga escala, mientras que las microoptimizaciones en partes críticas pueden ayudar a conseguir una mayor pero en menor escala.

### Uso de Copilot

Se usó la herramienta de IA para pequeñas guías de código y del uso eficiente de la terminal, siempre supervisando que los cambios realizados eran los esperados y no se modificara otro archivo.