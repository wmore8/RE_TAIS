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

### Tema 8: Algoritmos Voraces I

| Nº | Ejercicio | Enunciado | Solución | Complejidad | Estado |
| :---: | :--- | :---: | :---: | :---: | :---: |
| 8.1 | Agujeros en la manguera | [PDF](8_Algoritmos_Voraces_I/8.1%20Agujeros%20en%20la%20manguera/prob-Agujeros%20en%20la%20manguera.pdf) | [8_1.cpp](8_Algoritmos_Voraces_I/8.1%20Agujeros%20en%20la%20manguera/8_1.cpp) | $O(N)$ | `CORRECT` |
| 8.2 | ¡Nos invaden! | [PDF](8_Algoritmos_Voraces_I/8.2%20Nos%20invaden/prob-%C2%A1Nos%20invaden!.pdf) | [8_2.cpp](8_Algoritmos_Voraces_I/8.2%20Nos%20invaden/8_2.cpp) | $O(N \log N)$ | `CORRECT` |
| 8.3 | Comienza la temporada | [PDF](8_Algoritmos_Voraces_I/8.3%20Comienza%20la%20temporada/prob-Comienza%20la%20temporada.pdf) | [8_3.cpp](8_Algoritmos_Voraces_I/8.3%20Comienza%20la%20temporada/8_3.cpp) | $O(N \log N)$ | `CORRECT` |
| 8.4 | Maratón de cine de terror | [PDF](8_Algoritmos_Voraces_I/8.4%20Maraton%20de%20cine%20de%20terror/prob-Marat%C3%B3n%20de%20cine%20de%20terror.pdf) | [8_4.cpp](8_Algoritmos_Voraces_I/8.4%20Maraton%20de%20cine%20de%20terror/8_4.cpp) | $O(N \log N)$ | `CORRECT` |
| 8.L | Planificación de conferencias *(Laboratorio)* | [PDF](8_Algoritmos_Voraces_I/8.L%20Planificacion%20de%20conferencias/prob-Planificaci%C3%B3n%20de%20conferencias.pdf) | [8_L.cpp](8_Algoritmos_Voraces_I/8.L%20Planificacion%20de%20conferencias/8_L.cpp) | $O(N \log N)$ | `CORRECT` |

### Tema 9: Algoritmos Voraces II

| Nº | Ejercicio | Enunciado | Solución | Complejidad | Estado |
| :---: | :--- | :---: | :---: | :---: | :---: |
| 9.1 | ¡En primera línea de playa! | [PDF](9_Algoritmos_Voraces_II/9.1%20En%20primera%20linea%20de%20playa/prob-%C2%A1En%20primera%20l%C3%ADnea%20de%20playa!.pdf) | [9_1.cpp](9_Algoritmos_Voraces_II/9.1%20En%20primera%20linea%20de%20playa/9_1.cpp) | $O(N \log N)$ | `WRONG ANSWER` |
| 9.2 | El alienígena infiltrado | [PDF](9_Algoritmos_Voraces_II/9.2%20El%20alienigena%20infiltrado/prob-El%20alien%C3%ADgena%20infiltrado.pdf) | [9_2.cpp](9_Algoritmos_Voraces_II/9.2%20El%20alienigena%20infiltrado/9_2.cpp) | $O(N \log N)$ | `CORRECT` |
| 9.3 | Carreras de coches | [PDF](9_Algoritmos_Voraces_II/9.3%20Carreras%20de%20coches/prob-Carreras%20de%20coches.pdf) | [9_3.cpp](9_Algoritmos_Voraces_II/9.3%20Carreras%20de%20coches/9_3.cpp) | $O(N \log N)$ | `CORRECT` |
| 9.4 | El telesilla | [PDF](9_Algoritmos_Voraces_II/9.4%20El%20telesilla/prob-Telesillas.pdf) | [9_4.cpp](9_Algoritmos_Voraces_II/9.4%20El%20telesilla/9_4.cpp) | $O(N \log N)$ | `CORRECT` |
| 9.L | Necesitamos agua *(Laboratorio)* | [PDF](9_Algoritmos_Voraces_II/9.L%20Necesitamos%20agua/prob-Necesitamos%20agua.pdf) | [9_L.cpp](9_Algoritmos_Voraces_II/9.L%20Necesitamos%20agua/9_L.cpp) | $O(A \log V)$ | `CORRECT` |

### Tema 10: Programación Dinámica I

| Nº | Ejercicio | Enunciado | Solución | Complejidad | Estado |
| :---: | :--- | :---: | :---: | :---: | :---: |
| A.2 | Construyendo dianas | [PDF](10_Programacion_Dinamica_I/A.2%20Construyendo%20dianas/prob-Construyendo%20dianas.pdf) | [A_2.cpp](10_Programacion_Dinamica_I/A.2%20Construyendo%20dianas/A_2.cpp) | $O(D \times P)$ | `CORRECT` |
| A.3 | Esquivando las obras en los cruces | [PDF](10_Programacion_Dinamica_I/A.3%20Esquivando%20las%20obras%20en%20los%20cruces/prob-Esquivando%20las%20obras%20en%20los%20cruces.pdf) | [A_3.cpp](10_Programacion_Dinamica_I/A.3%20Esquivando%20las%20obras%20en%20los%20cruces/A_3.cpp) | $O(N \times M)$ | `CORRECT` |
| A.4 | ¿Por dónde hay que subir? | [PDF](10_Programacion_Dinamica_I/A.4%20Por%20donde%20hay%20que%20subir/prob-%C2%BFPor%20d%C3%B3nde%20hay%20que%20subir_.pdf) | [A_4.cpp](10_Programacion_Dinamica_I/A.4%20Por%20donde%20hay%20que%20subir/A_4.cpp) | $O(N^2)$ | `WRONG ANSWER` |

### Tema 11: Programación Dinámica II

| Nº | Ejercicio | Enunciado | Solución | Complejidad | Estado |
| :---: | :--- | :---: | :---: | :---: | :---: |
| B.1 | El cazatesoros | [PDF](11_Programacion_Dinamica_II/B.1%20El%20cazatesoros/prob-El%20cazatesoros.pdf) | [B_1.cpp](11_Programacion_Dinamica_II/B.1%20El%20cazatesoros/B_1.cpp) | $O(N \times T)$ | `CORRECT` |
| B.2 | Aibofobia | [PDF](11_Programacion_Dinamica_II/B.2%20Aibofobia/prob-Aibofobia.pdf) | [B_2.cpp](11_Programacion_Dinamica_II/B.2%20Aibofobia/B_2.cpp) | $O(N^2)$ | `WRONG ANSWER` |
| B.3 | Nos vamos de concierto | [PDF](11_Programacion_Dinamica_II/B.3%20Nos%20vamos%20de%20concierto/prob-Nos%20vamos%20de%20concierto.pdf) | [B_3.cpp](11_Programacion_Dinamica_II/B.3%20Nos%20vamos%20de%20concierto/B_3.cpp) | $O(N \times P)$ | `CORRECT` |
| B.4 | Las vacas pensantes | [PDF](11_Programacion_Dinamica_II/B.4%20Las%20vacas%20pensantes/prob-Las%20vacas%20pensantes.pdf) | [B_4.cpp](11_Programacion_Dinamica_II/B.4%20Las%20vacas%20pensantes/B_4.cpp) | $O(N^2)$ | `CORRECT` |
| B.L | La fiesta de graduación *(Laboratorio)* | [PDF](11_Programacion_Dinamica_II/B.L%20La%20fiesta%20de%20graduacion/prob-La%20fiesta%20de%20graduaci%C3%B3n.pdf) | [B_L.cpp](11_Programacion_Dinamica_II/B.L%20La%20fiesta%20de%20graduacion/B_L.cpp) | $O(N \times M)$ | `CORRECT` |

### Tema 12: Programación Dinámica III

| Nº | Ejercicio | Enunciado | Solución | Complejidad | Estado |
| :---: | :--- | :---: | :---: | :---: | :---: |
| C.1 | El carpintero Ebanisto | [PDF](12_Programacion_Dinamica_III/C.1%20El%20carpintero%20Ebanisto/prob-El%20carpintero%20Ebanisto.pdf) | [C_1.cpp](12_Programacion_Dinamica_III/C.1%20El%20carpintero%20Ebanisto/C_1.cpp) | $O(N^3)$ | `CORRECT` |
| C.2 | Cine romántico a raudales | [PDF](12_Programacion_Dinamica_III/C.2%20Cine%20romantico%20a%20raudales/prob-Cine%20rom%C3%A1ntico%20a%20raudales.pdf) | [C_2.cpp](12_Programacion_Dinamica_III/C.2%20Cine%20romantico%20a%20raudales/C_2.cpp) | $O(N \log N)$ | `CORRECT` |
| C.3 | Mejor no llevar muchas monedas | [PDF](12_Programacion_Dinamica_III/C.3%20Mejor%20no%20llevar%20muchas%20monedas/prob-Mejor%20no%20llevar%20muchas%20monedas.pdf) | [C_3.cpp](12_Programacion_Dinamica_III/C.3%20Mejor%20no%20llevar%20muchas%20monedas/C_3.cpp) | $O(N \times P)$ | `CORRECT` |
| C.4 | Volando entre pivotes | [PDF](12_Programacion_Dinamica_III/C.4%20Volando%20entre%20pivotes/prob-Volando%20entre%20pivotes.pdf) | [C_4.cpp](12_Programacion_Dinamica_III/C.4%20Volando%20entre%20pivotes/C_4.cpp) | $O(N^2)$ | `CORRECT` |

### Exámenes y Repaso

| Nº | Ejercicio | Enunciado | Solución | Complejidad | Estado |
| :---: | :--- | :---: | :---: | :---: | :---: |
| EN.1 | El puesto de fruta (El frutero exitoso) *(Ordinaria 2026)* | [PDF](Examenes_y_Repaso/EN1%20El%20puesto%20de%20fruta/prob-El%20frutero%20exitoso.pdf) | [main1.cpp](Examenes_y_Repaso/EN1%20El%20puesto%20de%20fruta/main1.cpp) | $O(N \log K)$ | `CORRECT` |
| R.01 | Las minas del emperador Trajano | [PDF](Examenes_y_Repaso/R.01%20Las%20minas%20del%20emperador%20Trajano/prob-Las%20minas%20del%20emperador%20Trajano.pdf) | [R_1.cpp](Examenes_y_Repaso/R.01%20Las%20minas%20del%20emperador%20Trajano/R_1.cpp) | $O(A \log V)$ | `CORRECT` |
| R.02 | Paintball | [PDF](Examenes_y_Repaso/R.02%20Paintball/prob-Paintball.pdf) | [R_2.cpp](Examenes_y_Repaso/R.02%20Paintball/R_2.cpp) | $O(V + A)$ | `CORRECT` |
| R.03 | Bollos preñaos | [PDF](Examenes_y_Repaso/R.03%20Bollos%20prenaos/prob-Bollos%20Pre%C3%B1aos.pdf) | [R_3.cpp](Examenes_y_Repaso/R.03%20Bollos%20prenaos/R_3.cpp) | $O(N \times M)$ | `CORRECT` |
| R.04 | Conectando pueblos | [PDF](Examenes_y_Repaso/R.04%20Conectando%20pueblos/prob-Conectando%20pueblos.pdf) | [R_4.cpp](Examenes_y_Repaso/R.04%20Conectando%20pueblos/R_4.cpp) | $O(A \log A)$ | `CORRECT` |
| R.05 | Tirando el dado | [PDF](Examenes_y_Repaso/R.05%20Tirando%20el%20dado/prob-Tirando%20los%20dados.pdf) | [R_5.cpp](Examenes_y_Repaso/R.05%20Tirando%20el%20dado/R_5.cpp) | $O(K \times S)$ | `CORRECT` |
| R.06 | Difundiendo un rumor | [PDF](Examenes_y_Repaso/R.06%20Difundiendo%20un%20rumor/prob-Difundiendo%20un%20rumor.pdf) | [R_6.cpp](Examenes_y_Repaso/R.06%20Difundiendo%20un%20rumor/R_6.cpp) | $O(V + A)$ | `CORRECT` |
| R.07 | Abajo o a la derecha | [PDF](Examenes_y_Repaso/R.07%20Abajo%20o%20a%20la%20derecha/prob-Abajo%20o%20a%20la%20derecha.pdf) | [R_7.cpp](Examenes_y_Repaso/R.07%20Abajo%20o%20a%20la%20derecha/R_7.cpp) | $O(N \times M)$ | `CORRECT` |
| R.08 | Semana de la Informática | [PDF](Examenes_y_Repaso/R.08%20Semana%20de%20la%20Informatica/prob-Semana%20de%20la%20Inform%C3%A1tica.pdf) | [R_8.cpp](Examenes_y_Repaso/R.08%20Semana%20de%20la%20Informatica/R_8.cpp) | $O(N \log N)$ | `CORRECT` |
| R.09 | Pavimentar Barro City | [PDF](Examenes_y_Repaso/R.09%20Pavimentar%20Barro%20City/prob-Pavimentar%20Barro%20City.pdf) | [R_9.cpp](Examenes_y_Repaso/R.09%20Pavimentar%20Barro%20City/R_9.cpp) | $O(A \log A)$ | `CORRECT` |
| R.10 | Las gorras de la competición | [PDF](Examenes_y_Repaso/R.10%20Las%20gorras%20de%20la%20competicion/prob-Las%20gorras%20de%20la%20competici%C3%B3n.pdf) | [R_10.cpp](Examenes_y_Repaso/R.10%20Las%20gorras%20de%20la%20competicion/R_10.cpp) | $O(N \log N)$ | `CORRECT` |
| R.11 | Bases en Marte | [PDF](Examenes_y_Repaso/R.11%20Bases%20en%20Marte/prob-Bases%20en%20Marte.pdf) | [R_11.cpp](Examenes_y_Repaso/R.11%20Bases%20en%20Marte/R_11.cpp) | $O(N \log N)$ | `CORRECT` |
| R.12 | De aventura por el Amazonas | [PDF](Examenes_y_Repaso/R.12%20De%20aventura%20por%20el%20Amazonas/prob-De%20aventura%20por%20el%20Amazonas.pdf) | [R_12.cpp](Examenes_y_Repaso/R.12%20De%20aventura%20por%20el%20Amazonas/R_12.cpp) | $O(N^3)$ | `CORRECT` |
| R.13 | Inserción de paréntesis | [PDF](Examenes_y_Repaso/R.13%20Insercion%20de%20parentesis/prob-Inserci%C3%B3n%20de%20par%C3%A9ntesis.pdf) | [R_13.cpp](Examenes_y_Repaso/R.13%20Insercion%20de%20parentesis/R_13.cpp) | $O(N^3)$ | `CORRECT` |
| R.14 | El turrón a la puerta | [PDF](Examenes_y_Repaso/R.14%20El%20turron%20a%20la%20puerta/prob-El%20turr%C3%B3n%20a%20la%20puerta.pdf) | [R_14.cpp](Examenes_y_Repaso/R.14%20El%20turron%20a%20la%20puerta/R_14.cpp) | $O(N^2)$ | `CORRECT` |
| R.16 | Bizcocho con frutas | [PDF](Examenes_y_Repaso/R.16%20Bizcocho%20con%20frutas/prob-Bizcocho%20con%20frutas.pdf) | [R_16.cpp](Examenes_y_Repaso/R.16%20Bizcocho%20con%20frutas/R_16.cpp) | $O(N^2)$ | `CORRECT` |





