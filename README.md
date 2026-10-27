# Técnicas Algorítmicas en Ingeniería del Software (TAIS)

Repositorio de ejercicios, prácticas y exámenes de la asignatura **Técnicas Algorítmicas en Ingeniería del Software (TAIS)**.

Diseñado para sincronización fluida entre equipos y ejecución nativa en **Visual Studio 2022** sin necesidad de crear proyectos `.vcxproj` ni soluciones `.sln` para cada ejercicio.

---

## Estructura del Repositorio

```text
RE_TAIS/
├── CMakeLists.txt                         # Configuración CMake con auto-detección de ejercicios
├── .gitignore                             # Filtro de temporales de VS2022 y CMake
├── README.md                              # Índice y panel de control
├── TADS/                                  # Estructuras de datos base de la asignatura
│   ├── bintree.h
│   ├── ConjuntosDisjuntos.h
│   ├── Digrafo.h
│   ├── DigrafoValorado.h
│   ├── EnterosInf.h
│   ├── Grafo.h
│   ├── GrafoValorado.h
│   ├── IndexPQ.h
│   ├── Matriz.h
│   ├── PriorityQueue.h
│   └── TreeSet_AVL.h
├── plantillas/                            # Plantillas oficiales para jueces online (Domjudge)
│   ├── PlantillaJuezNumeroCasos.cpp
│   ├── PlantillaJuezCentinela.cpp
│   └── PlantillaJuezCasosIlimitados.cpp
├── 1_Arboles_AVL/                         # Semana 1: Árboles de búsqueda avanzados
├── 2_Colas_Prioridad_Monticulos/          # Semana 2: Colas de prioridad y montículos
├── 3_Colas_Prioridad_Variables/           # Semana 3: Heapsort e IndexPQ
├── 4_Grafos_No_Dirigidos/                 # Semana 4: Grafos no dirigidos y recorridos
├── 5_Grafos_Dirigidos/                    # Semana 5: Digrafos, DAGs y toposort
├── 6_Conjuntos_Disjuntos_ARM/             # Semana 6: Union-Find y Kruskal
├── 7_Caminos_Minimos_Dijkstra/            # Semana 7: Dijkstra en digrafos valorados
├── 8_Algoritmos_Voraces_I/                # Semana 8: Algoritmos voraces I
├── 9_Algoritmos_Voraces_II/               # Semana 9: Algoritmos voraces II
├── 10_Programacion_Dinamica_I/            # Semana 10: Dinámica I (Subproblemas y tabulación)
├── 11_Programacion_Dinamica_II/           # Semana 11: Dinámica II (Mochila, LCS)
├── 12_Programacion_Dinamica_III/          # Semana 12: Dinámica avanzada y optimización
└── Examenes_y_Repaso/                     # Examen ordinaria (EN1) y problemas de examen (R.1 - R.16)
```

---

## Flujo de Trabajo en Visual Studio 2022

### 1. Abrir el repositorio
1. Abre **Visual Studio 2022**.
2. Selecciona **Abrir una carpeta...** (*Open Folder*) y elige la raíz `RE_TAIS`.
3. VS2022 detectará automáticamente el archivo `CMakeLists.txt` y generará la configuración en segundo plano.

### 2. Ejecutar y depurar un ejercicio
1. En la barra superior, haz clic en el menú desplegable **"Seleccionar elemento de inicio"** (al lado del botón verde de reproducir).
2. Selecciona el ejercicio que quieras ejecutar (ej: `1.1_Es_un_arbol_AVL.exe`).
3. Pulsa **F5** (depuración) o **Ctrl + F5** (ejecución directa).
4. El programa ejecutará automáticamente tomando como directorio de trabajo su propia carpeta, leyendo de su archivo `.in` (o `datos.in`).

### 3. Crear un ejercicio nuevo
1. Crea una carpeta dentro del tema correspondiente (ej: `4_Grafos_No_Dirigidos/4.08_NuevoProblema/`).
2. Copia la plantilla adecuada desde `plantillas/` como `4_08.cpp`.
3. Añade tu archivo de casos de prueba (`4_08.in`), la salida esperada (`4_08.ans`) y el enunciado `.pdf`.
4. Visual Studio detectará automáticamente el nuevo ejercicio (si tarda, pulsa **Ctrl + S** sobre `CMakeLists.txt`) y aparecerá en el desplegable superior para ejecutarlo con **F5**.

---

## Tabla de Seguimiento de Ejercicios

### Tema 1: Árboles de búsqueda avanzados (AVL)

| Nº | Ejercicio | Enunciado | Solución | Complejidad | Estado |
| :---: | :--- | :---: | :---: | :---: | :---: |
| 1.1 | ¿Es un árbol AVL? | [PDF](1_Arboles_AVL/1.1%20Es%20un%20arbol%20AVL/prob-%C2%BFEs%20un%20%C3%A1rbol%20AVL_.pdf) | [1_1.cpp](1_Arboles_AVL/1.1%20Es%20un%20arbol%20AVL/1_1.cpp) | $O(N)$ | `CORRECT` |
| 1.2 | k-ésimo elemento en AVL | [PDF](1_Arboles_AVL/1.2%20k-esimo%20elemento%20en%20AVL/prob-k-esimo%20elemento%20en%20AVL.pdf) | [1_2.cpp](1_Arboles_AVL/1.2%20k-esimo%20elemento%20en%20AVL/1_2.cpp) | $O(\log N)$ | `CORRECT` |

### Tema 2: Colas de prioridad y montículos

| Nº | Ejercicio | Enunciado | Solución | Complejidad | Estado |
| :---: | :--- | :---: | :---: | :---: | :---: |
| 2.1 | Lo que cuesta sumar | [PDF](2_Colas_Prioridad_Monticulos/2.1%20Lo%20que%20cuesta%20sumar/prob-Lo%20que%20cuesta%20sumar.pdf) | [2_1.cpp](2_Colas_Prioridad_Monticulos/2.1%20Lo%20que%20cuesta%20sumar/2_1.cpp) | $O(N \log N)$ | `CORRECT` |
| 2.2 | Unidad Curiosa de Monitorización | [PDF](2_Colas_Prioridad_Monticulos/2.2%20Unidad%20Curiosa%20de%20Monitorizacion/prob-Unidad%20Curiosa%20de%20Monitorizaci%C3%B3n.pdf) | [2_2.cpp](2_Colas_Prioridad_Monticulos/2.2%20Unidad%20Curiosa%20de%20Monitorizacion/2_2.cpp) | $O(N \log N)$ | `CORRECT` |
| 2.3 | Reina del súper | [PDF](2_Colas_Prioridad_Monticulos/2.3%20Reina%20del%20super/prob-Reina%20del%20s%C3%BAper.pdf) | [2_3.cpp](2_Colas_Prioridad_Monticulos/2.3%20Reina%20del%20super/2_3.cpp) | $O(M \log N)$ | `CORRECT` |
| 2.4 | Ordenando a los pacientes en urgencias | — | [2_4.cpp](2_Colas_Prioridad_Monticulos/2.4%20Ordenando%20a%20los%20pacientes%20en%20urgencias/2_4.cpp) | $O(N \log N)$ | `CORRECT` |
| 2.5 | Coleccionando cómics | [PDF](2_Colas_Prioridad_Monticulos/2.5%20Coleccionando%20comics/prob-Coleccionando%20c%C3%B3mics.pdf) | [2_5.cpp](2_Colas_Prioridad_Monticulos/2.5%20Coleccionando%20comics/2_5.cpp) | $O(M \log N)$ | `CORRECT` |
| 2.L | Las partituras de la orquesta *(Laboratorio)* | — | [2_L.cpp](2_Colas_Prioridad_Monticulos/2.L%20Las%20partituras%20de%20la%20orquesta/2_L.cpp) | $O((P - N) \log N)$ | `CORRECT` |

### Tema 3: Heapsort y colas de prioridad con prioridades variables (IndexPQ)

| Nº | Ejercicio | Enunciado | Solución | Complejidad | Estado |
| :---: | :--- | :---: | :---: | :---: | :---: |
| 3.1 | Pájaros en vuelo | [PDF](3_Colas_Prioridad_Variables/3.1%20Pajaros%20en%20vuelo/prob-P%C3%A1jaros%20en%20vuelo.pdf) | [3_1.cpp](3_Colas_Prioridad_Variables/3.1%20Pajaros%20en%20vuelo/3_1.cpp) | $O(N \log N)$ | `CORRECT` |
| 3.2 | 12 points go to… | [PDF](3_Colas_Prioridad_Variables/3.2%2012%20points%20go%20to/prob-12%20points%20go%20to%E2%80%A6.pdf) | [3_2.cpp](3_Colas_Prioridad_Variables/3.2%2012%20points%20go%20to/3_2.cpp) | $O(E \log P)$ | `CORRECT` |
| 3.3 | Multitarea | [PDF](3_Colas_Prioridad_Variables/3.3%20Multitarea/prob-Multitarea.pdf) | [3_3.cpp](3_Colas_Prioridad_Variables/3.3%20Multitarea/3_3.cpp) | $O(N \log K)$ | `CORRECT` |
| 3.4 | Volando drones | [PDF](3_Colas_Prioridad_Variables/3.4%20Volando%20drones/prob-Volando%20drones.pdf) | [3_4.cpp](3_Colas_Prioridad_Variables/3.4%20Volando%20drones/3_4.cpp) | $O(N \log M)$ | `CORRECT` |
| 3.L | La batalla de las audiencias *(Laboratorio)* | — | [3_L.cpp](3_Colas_Prioridad_Variables/3.L%20La%20batalla%20de%20las%20audiencias/3_L.cpp) | $O(N \log C)$ | `CORRECT` |

