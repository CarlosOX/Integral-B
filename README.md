## CORRECIONES
Se realizó la INTEGRAL B la cual no había sido entregada.

# Integral-B
### INTEGRAL B AVANCE 1
En este proyecto se implementa la creación de un grafo para un hotel que se encuentra en playa del carmen. Este hotel tiene una gran extension por lo que es fácil pederse y tomar caminos demasiado largos por lo que la implementación de algoritmos de búsqueda es funcional para este caso. 

![](grafito.PNG)

### AQUI SE PUEDE APRECIAR EL GRAFO DEL HOTEL. A CONTINUACIÓN SE MUESTRAS COMPETENCIAS A DEMOSTRAR.

### SICT0301B: Evalúa los componentes

Presenta Casos de Prueba correctos y completos para todas las funciones y procedimientos del programa

En el archivo pruebas.cpp se demuestran las funciones del grafo utilizadas para ver que sirvan correctamente.
PARA UTILIZAR EL ARCHIVO SE DE BE SUSTITUIR EN EL MAIN.CPP PARA EVITAR ERRORES DE COMPILACIÓN. Decidí no incluirlo en el main por estética del programa del hotel. Pero se puede comprobar las funciones del grafo con el archivo pruebas.cpp


### SICT0302B: Toma decisiones

**Usa grafos para hacer analisis de información** 

En el archivo hotel.txt se encuentran las conexiones entre los diferentes lugares del hotel Sandos en Cancun. Estos valores serán guardados en una lista y matriz de adyacencia. 
De tal forma que se puedan proyectar en consola,tanto en forma de lista como en forma de matriz. En adición, con el archivo cargado para la creación del grafo se podrá realizar un algortimo de búsqueda ya que es muy fácil perderse en ese hotel.

**Usa un algoritmo de búsqueda en grafos adecuado para resolver un problema**

En este proyecto se utilizará un BFS ya que el objetivo es mostrar el camino más corto para llegar a diferentes partes del hotel ya que es demasiado grande y tiene muchos caminos.Esto facilitará la movilidad y hará una estancia más práctica. 
Para poder visualizar el comportamiento de el algoritmo de búsqueda, en el mmenú que se presenta en el programa se debe escoger la opción 2 (escoger ruta), esta permite utilizar el BTS.

### SICT0303B: Implementa acciones científicas

**Implementa mecanismos de lectura de archivos correctos y útiles dentro de un programa.** 

Se leen los datos del archivo "hotelito.txt" con  la funcion loadGraphMat() y loadGraphList. Con esto se libera peso y trabajo al código fuente.

**Implementa mecanismos de escritura de archivos correctos.**
Se presenta esctritura de archivos en las líneas 55-67 del main.cpp donde se guarda la ruta, la matriz de adyasencia y la lista de adyasencia en un archivo de texto generado automáticamente

### SEG0702A. Tecnologías de vanguardia
**Investiga e implementa un algoritmo o una estructura de datos que no se vió durante el curso.**
Para este proyecto se utilizó la estructura de ordenamiento ShellSort.

Tiene ventaja contra Bubble Sort ya que tiene un pivote que reduce el tamaño de iteraciones, al “dividir” en mitad, e ir ordenando.Cuando presentamos un array pequeño optimiza su tiempo por lo que puede ganar a algoritmos como Merge o Quick Sort.
Su implementación se encuentra en la parte del menú desplegable en la opción "4. Opiniones", donde se ordena un array de los lugares que escogió el usuario.
También se puede ver su implementación en las líneas 7-30 del main.cpp

**Describe cada algoritmo de la estructura (inserción, consulta, etc...) de forma clara y con ejemplos**
Para la parte de inserción:

El algoritmo ShellSort mejora el ordenamiento por inserción comparando elementos separados por un espacio de varias posiciones,permitiendo de tal forma  que un elemento haga “pasos más grandes” hacia su posición a la cual se desea llegar. Los pasos múltiples sobre los datos se hacen con tamaños de espacio cada vez más pequeños.
El último paso del ShellSort es un simple ordenamiento por inserción. 

**Ejemplo de funcionalidad del SHELLSORT**

Se presenta el siguietne array. ARRAY(10,8,4,7)
Primero se obtiene el tamaño del arreglo, el cual es de 4. 
Posteriormente se obtiene el valor del gap en esa primera iteración: 4/2= 2
Los elemntos que se encuentran en el intervalo dos se comparan y si el segundo es menor se intercambian.
En este caso: 
Se compara, si es verdadero hay un intercambio:

ARRAY[0]>ARRAY[2], esto es verdadero por lo que tenemos el array cambiado a ARRAY(4,8,10,7).

Ahora se compara la siguiente iteración: 

ARRAY[1]>ARRAY[3], esto es verdadero por lo que se cambia el array a ARRAY(4,7,10,8).

Ahora la segunda iteración o subarray es de 2-
Obteniendo un gap de 2/1. Los elementos que se encuentren en ese intervalo se comparan como en la primera parte del algoritmo.
Teniendo el array de la primera iteración ARRAY(4,7,10,8) obtenemos lo siguiente:

Debido a que el gap tiene un valor de 1, se comparan los siguientes valores:

ARRAY[0]>ARRAY[1], esto es falso por lo que se queda como estaba.
ARRAY[1]>ARRAY[2], esto es falso por lo que no existe un intercambio.
ARRAY[2]>ARRAY[3], esto es verdadero por lo que se intercambian quedando como resultado, 


ARRAY(4,7,8,10).

De esta forma queda el array final, como se puede observar, este algoritmo es muy funcional cuando se trata de pocos elementos y ya casi ordenados ya que funciona con iteraaciones.

**ANÁLISIS DE COMPLEJIDAD SHELLSORT**

Para el peor de los casos donde existan elementos muy desordenados se tiene una complejidad de O(n^2) debido a que se realiza un swap por cada gap generado y para el mejor de los casos será una complejidad Ω(nlog n), esto cuando no se tengan que realizar casi swaps ya que están casi ordenados.

### ANÁLISIS DE COMPLEJIDAD GRAFOS

loadgraphlist: Esta función se basa en una lectura de un archivo por lo que su complejidad es O(n), estos datos se introducen a una lista con complejidad O(1) así que la complejidad de la funcion es O(n)

BFS: Esta función arroja el camino más corto para llegar de un nodo a otro. Su complejidad temporal es de O(V+A) para el peor de los casos, ya que le toma V+A pasos para guardar en un string la lista de nodos visitados y el camino del recorrido de un grafo, donde V es el número de vértices y A es el número de arcos del grafo.

