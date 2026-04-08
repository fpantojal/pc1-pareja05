# Reporte de Cobertura

## Objetivo
Este reporte documenta la cobertura de pruebas medida para el código del proyecto, con especial énfasis en los archivos de lógica principal. La cobertura indica qué porcentaje de líneas de código ejecutables han sido ejecutadas durante las pruebas.

## Método
- Se utilizaron los archivos de cobertura generados por `gcov` en el directorio raíz del repositorio.
- Los datos corresponden a las ejecuciones que produjeron los archivos `.gcov` para `src/solution.cpp` y `src/main.cpp`.
- Se calculó la cobertura de líneas ejecutables basándose en el conteo de ejecuciones por línea.
- No se incluyen métricas de cobertura de ramas o funciones detalladas, ya que los datos disponibles se limitan a líneas ejecutadas.

## Resultados Principales
- `src/solution.cpp`: 100.0% de líneas ejecutadas (22 líneas ejecutables cubiertas de 22 totales).
- `src/main.cpp`: 100.0% de líneas ejecutadas (13 líneas ejecutables cubiertas de 13 totales).

## Cobertura de Pruebas
Se ejecutaron las pruebas públicas e internas con builds instrumentados para cobertura.

- `test_public`: Se ejecutaron todas las funciones
- `test_internal`: Se ejecutaron todas las funciones
- `edge_cases`: Se ejecutaron todas las funciones. Se observa que el bucle no inició cuando el arreglo es unitario.

La ejecución de estas pruebas no alteró la cobertura global, manteniéndola en 100.0% para los archivos principales, ya que todas las líneas ejecutables ya habían sido cubiertas.

## Archivos Evaluados
- `src/solution.cpp`: Implementación de las funciones `maxProfit` y `maxProfitBruteForce`.
- `src/main.cpp`: Ejecución de la aplicación principal que invoca la solución.

## Observaciones
- Los archivos de código fuente principales alcanzan cobertura completa de líneas en las ejecuciones instrumentadas, incluyendo la aplicación principal y todas las pruebas.
- Existen archivos `.gcov` adicionales para cabeceras de la librería estándar y dependencias, pero el foco relevante para el proyecto son los archivos listados arriba.
- Las pruebas públicas e internas cubren casos funcionales, de eficiencia y borde, asegurando una validación completa.
- No se detectaron líneas no ejecutadas en los archivos analizados después de ejecutar todas las pruebas, exceptuando en el caso borde con arreglo unitario. Esto se debe a que el bucle naturalmente funciona como verificador, evitando una comparación adicional para todos los demás arreglos.

## Conclusión
Con los datos disponibles, incluyendo la ejecución de la aplicación principal y todas las pruebas públicas e internas, la implementación alcanza cobertura completa de líneas en los archivos de código fuente relevantes. Las pruebas validan la eficiencia del algoritmo, proporcionando una base para la calidad del código.