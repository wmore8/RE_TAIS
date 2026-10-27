/*@ <authors>
 *
 * E42 Washington Morocho Lema
 *
 *@ </authors> */

#include <iostream>
#include <fstream>
using namespace std;

/*@ <answer>

 Escribe aquí un comentario general sobre la solución, explicando cómo
 se resuelve el problema y cuál es el coste de la solución, en función
 del tamaño del problema.

 COSTE:

 @ </answer> */

// ================================================================
// Escribe el código completo de tu solución aquí debajo
// ================================================================
//@ <answer>

bool resuelveCaso() {
    // 1. Lectura del primer dato
    // int n;
    // if (!(cin >> n)) return false;

    // 2. Lectura del resto de datos

    // 3. Resolución del problema y escritura de la solución

    return true;
}

//@ </answer>
//  Lo que se escriba debajo de esta línea ya no forma parte de la solución.

int main() {
    // Ajustes para que cin extraiga directamente de un fichero local
#ifndef DOMJUDGE
    std::ifstream in("datos.in");
    if (!in.is_open())
        std::cout << "Error: no se ha podido abrir el archivo de entrada." << std::endl;
    auto cinbuf = std::cin.rdbuf(in.rdbuf());
#endif

    while (resuelveCaso());

#ifndef DOMJUDGE
    std::cin.rdbuf(cinbuf);
    std::cout << "Pulsa Intro para salir..." << std::flush;
    std::cin.get();
#endif
    return 0;
}
