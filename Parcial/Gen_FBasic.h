typedef struct{
    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmpty;
}eGenerica;



/** \brief To indicate that all position in the array are empty,
 * this function put the flag (isEmpty) in TRUE in all
 * position of the array
 * \param list Employee* Pointer to array of employees
 * \param len int Array length
 * \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
 *
 */
int generica_init (eGenerica*, int);


/** \brief Inicializa la estructura Employee
 *
 * \param list Employee* Puntero que apunta a la estructura de empleados
 * \param int limite del puntero.
 * \return void
 *
 */
void inicializarEmployeesConDatos (eGenerica*, int);


/** \brief Obtiene el primer indice libre del array.
 *
 * \param Employee* Puntero que apunta a la estructura de empleados
 * \param int limite del puntero.
 * \return (-1) si no hay espacio - Indice si lo hay.
 *
 */
int generica_buscarEspacio (eGenerica*, int);



/** \brief find an Employee by Id en returns the index position in array.
 *
 * \param list Employee*
 * \param len int
 * \param id int
 * \return Return employee index position or (-1) if [Invalid length or NULL
pointer received or employee not found]
 *
 */
int generica_findGenericById(eGenerica*, int, int);



/** \brief Funcion que muestra un solo empleado.
 *
 * \param Employee Estructura de la cual se mostrara un solo empleado.
 * \return void.
 *
 */
void generica_mostrarUno (eGenerica);



/** \brief print the content of employees array
 *
 * \param list Employee* Puntero que apunta a la estructura de empleados
 * \param length int limite del puntero.
 * \return int
 *
 */
int generica_mostrarTodos(eGenerica*, int);



/** \brief Funcion que hace que el ID sea autoincremental.
 *
 * \param Employee* Puntero que apunta a la estructura de empleados.
 * \param int limite del puntero.
 * \return int Devuelve el id incrementado en 1 si se pudo y 0 si no se pudo.
 *
 */
int generica_idAutoIncremental(eGenerica*, int);







///////////////////////////////////////////// ABM  /////////////////////////////////////////////

/** \brief
 *
 * \param Employee* Puntero que apunta a la estructura de empleados.
 * \param int limite del puntero.
 * \return int (0) si fue ingresado - (-1) Si no hay espacio.
 *
 */
int generica_add(eGenerica*, int);




/** \brief Remove a Employee by Id (put isEmpty Flag in 0)
 *
 * \param list Employee*
 * \param int limite del puntero.
 * \param id int id del empleado.
 * \return int Return (-1) if Error [Invalid length or NULL pointer or if can't
find a employee] - (0) if Ok - (-2) if you cancel the action.
 *
 */
//int removeEmployee(Employee*, int, int); // FUNCION DE TP2



/** \brief Funcion que permite modificar un empleado
 *
 * \param
 * \param int limite del puntero.
 * \return int mayor a 0 si se pudo modificar y -1 si se cancelo la modificacion.
 *
 */
//int modificacionDeEmpleado(Employee*, int);



/** \brief Funcion que permite mostrar el menu del dato que se desea modificar.
 *
 * \param * Puntero a modificar datos.
 * \param  limite del puntero.
 * \return int mayor a 0 si se pudo modificar y -1 si se cancelo la modificacion.
 *
 */
//int menuModificacion(Employee*, int);



/** \brief Sort the elements in the array of employees, the argument order
indicate UP or DOWN order
 *
 * \param list Employee*
 * \param len int
 * \param order int [1] indicate UP - [0] indicate DOWN
 * \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
 *
 */
//int sortEmployees(Employee* list, int len, int order);

