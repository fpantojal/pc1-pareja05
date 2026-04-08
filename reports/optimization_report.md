### Reporte de optimizaciones

#### Build de depuracion : `-O0`
 ```bash
    cmake -S . -B build/debug -DCMAKE_BUILD_TYPE=Debug
    cmake --build build/debug
    ls -lh build/debug/main_app.exe 
 ```
#### Build de depuracion optimizada : `-Og`
```bash
    cmake -S . -B build/debug_opt -DCMAKE_BUILD_TYPE=RelWithDebInfo
    cmake --build build/debug_opt
    ls -lh build/debug_opt/main_app.exe
```
#### Build de release : `-O2`
```bash
    cmake -S . -B build/release -DCMAKE_BUILD_TYPE=Release
    cmake --build build/release
    ls -lh build/release/main_app.exe
```
#### Build de compacto : `-Os`
```bash
    cmake -S . -B build/compacto -DCMAKE_BUILD_TYPE=MinSizeRel
    cmake --build build/compacto
    ls -lh build/compacto/main_app.exe
```

### Salidas
* build de depuracion: -rwxr-xr-x 1 fpantojal Ninguno 279K abr.  8 12:27 build/debug/main_app.exe

* build de depuracion optimizada: -rwxr-xr-x 1 fpantojal Ninguno 239K abr.  8 12:28 build/debug_opt/main_app.exe

* build de release: -rwxr-xr-x 1 fpantojal Ninguno 142K abr.  8 12:29 build/release/main_app.exe

* build de compacto: -rwxr-xr-x 1 fpantojal Ninguno 141K abr.  8 12:29 build/compacto/main_app.exe


### Conclusiones
A partir de los tamaños obtenidos para `main_app.exe`, se observa un impacto claro del nivel de optimización del compilador:
 * La build de depuración (`-O0`) genera el ejecutable más grande (279K), porque prioriza facilidad de depuración sobre optimización.
 * La build de depuración optimizada (`-Og`) genera el ejecutable más pequeño (239K), porque prioriza optimización sobre facilidad de depuración.
 * La build de release (`-O2`) genera el ejecutable más pequeño (142k) siendo adecuada para entrega final con mejor rendimiento general.
 * La build de compacto (`-Os`) genera el ejecutable más pequeño (141k), muy cercano a `-O2`, por lo que es una buena opcion cuando el objetivo principal es minimizar tamaño.