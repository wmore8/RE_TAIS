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

*(Las tablas detalladas por tema se completarán a medida que se migren los ejercicios).*
