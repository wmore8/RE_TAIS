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

### Tema 4: Grafos no dirigidos y sus recorridos

| Nº | Ejercicio | Enunciado | Solución | Complejidad | Estado |
| :---: | :--- | :---: | :---: | :---: | :---: |
| 4.1 | Árboles libres | [PDF](4_Grafos_No_Dirigidos/4.1%20Arboles%20libres/prob-%C3%81rboles%20libres.pdf) | [4_1.cpp](4_Grafos_No_Dirigidos/4.1%20Arboles%20libres/4_1.cpp) | $O(V + A)$ | `CORRECT` |
| 4.2 | Grafo bipartito | [PDF](4_Grafos_No_Dirigidos/4.2%20Grafo%20bipartito/prob-Grafo%20bipartito.pdf) | [4_2.cpp](4_Grafos_No_Dirigidos/4.2%20Grafo%20bipartito/4_2.cpp) | $O(V + A)$ | `CORRECT` |
| 4.3 | Los amigos de mis amigos son mis amigos | [PDF](4_Grafos_No_Dirigidos/4.3%20Los%20amigos%20de%20mis%20amigos%20son%20mis%20amigos/prob-Los%20amigos%20de%20mis%20amigos%20son%20mis%20amigos.pdf) | [4_3.cpp](4_Grafos_No_Dirigidos/4.3%20Los%20amigos%20de%20mis%20amigos%20son%20mis%20amigos/4_3.cpp) | $O(V + A)$ | `CORRECT` |
| 4.4 | Detección de manchas negras | [PDF](4_Grafos_No_Dirigidos/4.4%20Deteccion%20de%20manchas%20negras/prob-Detecci%C3%B3n%20de%20manchas%20negras.pdf) | [4_4.cpp](4_Grafos_No_Dirigidos/4.4%20Deteccion%20de%20manchas%20negras/4_4.cpp) | $O(F \times C)$ | `CORRECT` |
| 4.5 | Los números de Bacon | [PDF](4_Grafos_No_Dirigidos/4.5%20Los%20numeros%20de%20Bacon/prob-Los%20n%C3%BAmeros%20de%20Bacon.pdf) | [4_5.cpp](4_Grafos_No_Dirigidos/4.5%20Los%20numeros%20de%20Bacon/4_5.cpp) | $O(V + A)$ | `CORRECT` |
| 4.6 | ¡Las noticias vuelan! | [PDF](4_Grafos_No_Dirigidos/4.6%20Las%20noticias%20vuelan/prob-%C2%A1Las%20noticias%20vuelan!.pdf) | [4_6.cpp](4_Grafos_No_Dirigidos/4.6%20Las%20noticias%20vuelan/4_6.cpp) | $O(V + A)$ | `CORRECT` |
| 4.7 | Un nodo muy muy lejano | [PDF](4_Grafos_No_Dirigidos/4.7%20Un%20nodo%20muy%20muy%20lejano/prob-Un%20nodo%20muy%20muy%20lejano.pdf) | [4_7.cpp](4_Grafos_No_Dirigidos/4.7%20Un%20nodo%20muy%20muy%20lejano/4_7.cpp) | $O(V + A)$ | `CORRECT` |
| 4.L | Peaje a la sombra *(Laboratorio)* | [PDF](4_Grafos_No_Dirigidos/4.L%20Peaje%20a%20la%20sombra/prob-Peaje%20a%20la%20sombra.pdf) | [4_L.cpp](4_Grafos_No_Dirigidos/4.L%20Peaje%20a%20la%20sombra/4_L.cpp) | $O(V + A)$ | `CORRECT` |

### Tema 5: Grafos dirigidos y sus recorridos

| Nº | Ejercicio | Enunciado | Solución | Complejidad | Estado |
| :---: | :--- | :---: | :---: | :---: | :---: |
| 5.1 | La máquina calculadora | [PDF](5_Grafos_Dirigidos/5.1%20La%20maquina%20calculadora/prob-La%20m%C3%A1quina%20calculadora.pdf) | [5_1.cpp](5_Grafos_Dirigidos/5.1%20La%20maquina%20calculadora/5_1.cpp) | $O(10^D)$ | `CORRECT` |
| 5.2 | Paella los jueves | [PDF](5_Grafos_Dirigidos/5.2%20Paella%20los%20jueves/prob-Paella%20los%20jueves.pdf) | [5_2.cpp](5_Grafos_Dirigidos/5.2%20Paella%20los%20jueves/5_2.cpp) | $O(Q(V + A))$ | `CORRECT` |
| 5.3 | Ordenando tareas | [PDF](5_Grafos_Dirigidos/5.3%20Ordenando%20tareas/prob-Ordenando%20tareas.pdf) | [5_3.cpp](5_Grafos_Dirigidos/5.3%20Ordenando%20tareas/5_3.cpp) | $O(V + A)$ | `CORRECT` |
| 5.4 | Sistema de inecuaciones | [PDF](5_Grafos_Dirigidos/5.4%20Sistema%20de%20inecuaciones/prob-Sistema%20de%20inecuaciones.pdf) | [5_4.cpp](5_Grafos_Dirigidos/5.4%20Sistema%20de%20inecuaciones/5_4.cpp) | $O(V + A)$ | `CORRECT` |
| 5.5 | Juego de Transformación Modular | [PDF](5_Grafos_Dirigidos/5.5%20Juego%20de%20Transformacion%20Modular/prob-Sistema%20de%20inecuaciones.pdf) | [5_5.cpp](5_Grafos_Dirigidos/5.5%20Juego%20de%20Transformacion%20Modular/5_5.cpp) | $O(N)$ | `CORRECT` |
| 5.6 | Haciendo trampas en Serpientes y Escaleras | [PDF](5_Grafos_Dirigidos/5.6%20Haciendo%20trampas%20en%20Serpientes%20y%20Escaleras/prob-Haciendo%20trampas%20en%20Serpientes%20y%20Escaleras.pdf) | [5_6.cpp](5_Grafos_Dirigidos/5.6%20Haciendo%20trampas%20en%20Serpientes%20y%20Escaleras/5_6.cpp) | $O(V + A)$ | `CORRECT` |
| 5.L | El Necronomicón de la informática *(Laboratorio)* | [PDF](5_Grafos_Dirigidos/5.L%20El%20Necronomicon%20de%20la%20informatica/prob-El%20Necronomic%C3%B3n%20de%20la%20inform%C3%A1tica.pdf) | [5_L.cpp](5_Grafos_Dirigidos/5.L%20El%20Necronomicon%20de%20la%20informatica/5_L.cpp) | $O(L + A)$ | `CORRECT` |

### Tema 6: Conjuntos disjuntos, grafos valorados y árboles de recubrimiento mínimo (ARM)

| Nº | Ejercicio | Enunciado | Solución | Complejidad | Estado |
| :---: | :--- | :---: | :---: | :---: | :---: |
| 6.1 | Petroleros hundidos | [PDF](6_Conjuntos_Disjuntos_ARM/6.1%20Petroleros%20hundidos/prob-Petroleros%20hundidos.pdf) | [6_1.cpp](6_Conjuntos_Disjuntos_ARM/6.1%20Petroleros%20hundidos/6_1.cpp) | $O(F \times C)$ | `CORRECT` |
| 6.2 | Camiones de reparto | — | [6_2.cpp](6_Conjuntos_Disjuntos_ARM/6.2%20Camiones%20de%20reparto/6_2.cpp) | $O(V + E)$ | `CORRECT` |
| 6.3 | Recorriendo el archipiélago en bicicleta | [PDF](6_Conjuntos_Disjuntos_ARM/6.3%20Recorriendo%20el%20archipielago%20en%20bicicleta/prob-Recorriendo%20el%20archipi%C3%A9lago%20en%20bicicleta.pdf) | [6_3.cpp](6_Conjuntos_Disjuntos_ARM/6.3%20Recorriendo%20el%20archipielago%20en%20bicicleta/6_3.cpp) | $O(A \log A)$ | `CORRECT` |
| 6.4 | La autonomía de los coches | [PDF](6_Conjuntos_Disjuntos_ARM/6.4%20La%20autonomia%20de%20los%20coches/prob-La%20autonom%C3%ADa%20de%20los%20coches.pdf) | [6_4.cpp](6_Conjuntos_Disjuntos_ARM/6.4%20La%20autonomia%20de%20los%20coches/6_4.cpp) | $O(A \log A)$ | `CORRECT` |
| 6.L | ¿Dónde construimos los aeropuertos? *(Laboratorio)* | [PDF](6_Conjuntos_Disjuntos_ARM/6.L%20Donde%20construimos%20los%20aeropuertos/prob-%C2%BFD%C3%B3nde%20construimos%20los%20aeropuertos_.pdf) | [6_L.cpp](6_Conjuntos_Disjuntos_ARM/6.L%20Donde%20construimos%20los%20aeropuertos/6_L.cpp) | $O(A \log A)$ | `CORRECT` |

### Tema 7: Caminos mínimos en grafos valorados (Dijkstra)

| Nº | Ejercicio | Enunciado | Solución | Complejidad | Estado |
| :---: | :--- | :---: | :---: | :---: | :---: |
| 7.1 | RapidEats | [PDF](7_Caminos_Minimos_Dijkstra/7.1%20RapidEats/prob-RapidEats.pdf) | [7_1.cpp](7_Caminos_Minimos_Dijkstra/7.1%20RapidEats/7_1.cpp) | $O(A \log V)$ | `CORRECT` |
| 7.2 | Navegando sin teclado | [PDF](7_Caminos_Minimos_Dijkstra/7.2%20Navegando%20sin%20teclado/prob-Navegando%20sin%20teclado.pdf) | [7_2.cpp](7_Caminos_Minimos_Dijkstra/7.2%20Navegando%20sin%20teclado/7_2.cpp) | $O(A \log V)$ | `CORRECT` |
| 7.3 | Camino al cole | [PDF](7_Caminos_Minimos_Dijkstra/7.3%20Camino%20al%20cole/prob-Camino%20al%20cole.pdf) | [7_3.cpp](7_Caminos_Minimos_Dijkstra/7.3%20Camino%20al%20cole/7_3.cpp) | $O(A \log V)$ | `CORRECT` |
| 7.4 | Ratones en un laberinto | [PDF](7_Caminos_Minimos_Dijkstra/7.4%20Ratones%20en%20un%20laberinto/prob-Ratones%20en%20un%20laberinto.pdf) | [7_4.cpp](7_Caminos_Minimos_Dijkstra/7.4%20Ratones%20en%20un%20laberinto/7_4.cpp) | $O(A \log V)$ | `CORRECT` |
| 7.5 | ¿Cuál es el mejor camino? | [PDF](7_Caminos_Minimos_Dijkstra/7.5%20Cual%20es%20el%20mejor%20camino/prob-%C2%BFCu%C3%A1l%20es%20el%20mejor%20camino_.pdf) | [7_5.cpp](7_Caminos_Minimos_Dijkstra/7.5%20Cual%20es%20el%20mejor%20camino/7_5.cpp) | $O(A \log V)$ | `CORRECT` |
| 7.L | La conferencia de paz *(Laboratorio)* | [PDF](7_Caminos_Minimos_Dijkstra/7.L%20La%20conferencia%20de%20paz/enunciado.pdf) | [7_L.cpp](7_Caminos_Minimos_Dijkstra/7.L%20La%20conferencia%20de%20paz/7_L.cpp) | $O(A \log V)$ | `CORRECT` |


