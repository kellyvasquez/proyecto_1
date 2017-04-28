#include <stdio.h>
#include <stdlib.h>
#define reservar_memoria (nodo*)malloc(sizeof(nodo))

struct nodo{
    int dato;
    nodo *siguiente;
    nodo *atras; };

nodo *primero = NULL;
nodo *pila = NULL;
nodo *inicio = NULL;
nodo *fin = NULL;

/*FUNCIONES GENERALES*/
void crear ();
bool lista_vacia (nodo *);
void buscar_elementos();
void eliminar_elementos();
void editar ();
void vaciar_elementos ();
void eliminar_lista ();//??????????

/*FUNCIONES LISTAS LIFO O PILAS:   */
void insertar_pila ();
void imprimir_pila ();


/*FUNCIONES LISTAS FIFO O COLAS:    */
void insertar_cola ();
void imprimir_cola ();

/*FUNCIONES LISTAS CIRCULARES SIMPLEMENTE ENLAZADAS   */
void insertar_circularSimple();
void imprimir_circularSimple();
void buscar_circularSimple();
void editar_circularSimple();
void eliminar_circularSimple();

/*FUNCIONES LISTAS CIRCULARES DOBLEMENTE ENLAZADAS  */
void insertar_circularDoble();
void imprimir_asc();
void imprimir_desc();
void eliminar_circularDoble();

/*FUNCIONES LISTAS DOBLEMENTE ENLAZADAS */
void insertar_listaDoble();

void menu();

int main(){
    menu();
    return 0;
}

void menu(){

    int opc, salir=1;

    do{
        printf("\n  ********** MENU LISTAS **********\n\n");
        printf("  1. LISTAS LIFO.\n");
        printf("  2. LISTAS FIFO.\n");
        printf("  3. LISTA CIRCULAR SIMPLEMENTE ENLAZADA.\n");
        printf("  4. LISTA CIRCULAR DOBLEMENTE ENLAZADA.\n");
        printf("  5. LISTA SIMPLEMENTE ENLAZADAS.\n");
        printf("  6. LISTA DOBLEMENTE ENLAZADAS.\n");
        printf("  7. OPERACIONES ENTRE LISTAS.\n");
        printf("  0. Salir. \n\n");
        printf("  Ingrese una opcion: "); scanf("%d", &opc);

        switch(opc){

            case 0:
                salir=0;
                break;

 //********************************************************************************************
            case 1: //MENU LISTAS LIFO

            system("cls");
            printf("\n  ********** MENU LISTAS LIFO **********\n\n");
            printf("  1. Crear lista. \n");
            printf("  2. Insertar elementos. \n");
            printf("  3. Imprimir elementos. \n");
            printf("  4. Buscar elementos. \n");
            printf("  5. Eliminar elementos. \n");
            printf("  6. Editar elementos. \n");
            printf("  7. Vaciar elementos. \n");
            printf("  8. Lista vacia. \n");
            printf("  9. Eliminar lista. \n\n");
            printf("  0. Volver al menu anterior. \n\n");
            printf("  Ingrese una opcion: "); scanf("%d", &opc);

            switch(opc){

                case 1:
                    crear ();
                    break;

                case 2:
                    insertar_pila();
                    break;

                case 3:
                    imprimir_pila();
                    break;

                case 4:
                    buscar_elementos();
                    break;

                case 5:
                    eliminar_elementos ();
                    break;

                case 6:
                    editar();
                    break;

                case 7:
                    vaciar_elementos();
                    break;

                case 8:
                    lista_vacia(pila);
                    break;

                case 9:
                    eliminar_lista();
                    break;

                case 0:
                    menu();
                    break;

                default: printf("\n LA OPCION INGRESADA NO ES VALIDA. \n\n");
                    break;
                }
                break;

//********************************************************************************************

            case 2: //MENU LISTAS FIFO

                system("cls");
                printf("\n  ********** MENU LISTAS FIFO **********\n\n");
                printf("  1. Crear lista. \n");
                printf("  2. Insertar elementos. \n");
                printf("  3. Imprimir elementos. \n");
                printf("  4. Buscar elementos. \n");
                printf("  5. Eliminar elementos. \n");
                printf("  6. Editar elementos. \n");
                printf("  7. Vaciar elementos. \n");
                printf("  8. Lista vacia. \n");
                printf("  9. Eliminar lista. \n");
                printf("  0. Volver al menu anterior. \n\n");
                printf("  Ingrese una opcion: "); scanf("%d", &opc);

                switch(opc){
                    case 1:
                        insertar_cola();
                        break;
                    case 2:
                        break;
                    case 3:
                        imprimir_cola();
                        break;

                    case 4:
                        buscar_elementos();
                        break;

                    case 5:
                        eliminar_elementos ();
                        break;

                    case 6:
                        editar();
                        break;

                    case 7:
                        vaciar_elementos();
                        break;

                    case 8:
                        lista_vacia(pila);
                        break;

                    case 9:
                        eliminar_lista();
                        break;

                    case 0:
                        menu();
                        break;
                    default: printf("\n LA OPCION INGRESADA NO ES VALIDA. \n\n");
                        break;
                }
                break;

//********************************************************************************************

            case 3: //LISTA CIRCULAR SIMPLEMENTE ENLAZADA

                system("cls");
                printf("\n ***** MENU LISTAS CIRCULARES SIMPLEMENTE ENLAZADAS *****\n\n");
                printf("  1. Crear lista. \n");
                printf("  2. Insertar elementos. \n");
                printf("  3. Imprimir elementos. \n");
                printf("  4. Buscar elementos. \n");
                printf("  5. Eliminar elementos. \n");
                printf("  6. Editar elementos. \n");
                printf("  7. Vaciar elementos. \n");
                printf("  8. Lista vacia. \n");
                printf("  9. Eliminar lista. \n");
                printf("  0. Volver al menu anterior. \n\n");
                printf("  Ingrese una opcion: "); scanf("%d", &opc);

                switch(opc){

                    case 1:
                        crear();
                        break;

                    case 2:
                        insertar_circularSimple();
                        break;

                    case 3:
                        imprimir_circularSimple();
                        break;

                    case 4:
                        buscar_circularSimple();
                        break;

                    case 5:
                        eliminar_circularSimple();
                        break;

                    case 6:
                        editar_circularSimple();
                        break;

                    case 7:
                        vaciar_elementos();
                        break;

                    case 8:
                        lista_vacia(pila);
                        break;

                    case 9:
                        eliminar_lista();
                        break;

                    case 0:
                        menu();
                        break;

                    default: printf("\n LA OPCION INGRESADA NO ES VALIDA. \n\n");
                        break;
                }
                break;

//************************************************************************************************************

            case 4:  //MENU LISTAS CIRCULARES DOBLEMENTE ENLAZADAS

                system("cls");
                printf("\n ***** MENU LISTAS CIRCULARES DOBLEMENTE ENLAZADAS *****\n\n");
                printf("1. Crear lista. \n");
                printf("2. Insertar elementos. \n");
                printf("3. Imprimir elementos. \n");
                printf("4. Buscar elementos. \n");
                printf("5. Eliminar elementos. \n");
                printf("6. Editar elementos. \n");
                printf("7. Vaciar elementos. \n");
                printf("8. Lista vacia. \n");
                printf("9. Eliminar lista. \n");
                printf("0. Volver al menu principal. \n\n");
                printf("Ingrese una opcion: "); scanf("%d", &opc);

                switch(opc){
                    case 1:
                        crear();
                        break;

                    case 2:
                        insertar_circularDoble();
                        break;

                    case 3:
                        printf("    1. Mostrar en forma ascendente.\n");
                        printf("    2. Mostrar en forma descendente.\n");
                        printf("    Ingrese una opcion: "); scanf("%d", &opc);

                        //SWITCH PARA MOSTRAR ELEMENTOS
                            switch(opc){
                                case 1:
                                    imprimir_asc();
                                    break;

                                case 2:
                                    imprimir_desc();
                                    break;

                                default: printf("\n LA OPCION INGRESADA NO ES VALIDA. \n\n"); }
                        //FIN SWITCH PARA MOSTRAR ELEMENTOS
                        break;

                    case 4:
                        buscar_circularSimple();
                        break;

                    case 5:
                        eliminar_circularDoble();
                        break;

                    case 6:
                        editar_circularSimple();
                        break;

                    case 7:
                        vaciar_elementos();
                        break;

                    case 8:
                        lista_vacia(pila);
                        break;

                    case 9:
                        eliminar_lista();
                        break;
                    case 0:
                        menu();
                        break;

                    default: printf("\n LA OPCION INGRESADA NO ES VALIDA. \n\n");
                        break;
                }
                break;

//************************************************************************************************************************

            case 5:   //MENU LISTAS SIMPLEMENTE ENLAZADAS

                system("cls");
                printf("\n ***** MENU LISTAS SIMPLEMENTE ENLAZADAS *****\n\n");
                printf("  1. Crear lista. \n");
                printf("  2. Insertar elementos. \n");
                printf("  3. Imprimir elementos. \n");
                printf("  4. Buscar elementos. \n");
                printf("  5. Eliminar elementos. \n");
                printf("  6. Editar elementos. \n");
                printf("  7. Vaciar elementos. \n");
                printf("  8. Lista vacia. \n");
                printf("  9. Eliminar lista. \n");
                printf("  0. Volver al menu anterior. \n\n");
                printf("  Ingrese una opcion: "); scanf("%d", &opc);

                switch(opc){
                        case 1:
                            crear();
                            break;

                        case 2:
                            insertar_cola();
                            break;

                        case 3:
                           imprimir_cola();
                            break;

                        case 4:
                            buscar_elementos();
                            break;

                        case 5:
                            eliminar_elementos();
                            break;

                        case 6:
                            editar();
                            break;

                        case 7:
                            vaciar_elementos();
                            break;

                        case 8:
                            lista_vacia(pila);
                            break;

                        case 9:
                            eliminar_lista();
                            break;

                        case 0:
                            menu();
                            break;
                        default: printf("\n LA OPCION INGRESADA NO ES VALIDA. \n\n");
                            break;
                }
                break;

//***********************************************************************************************************

            case 6: //MENU LISTAS DOBLEMENTE ENLAZADAS

                system("cls");
                printf("\n***** MENU LISTAS DOBLEMENTE ENLAZADAS *****\n\n");
                printf("  1. Crear lista. \n");
                printf("  2. Insertar elementos. \n");
                printf("  3. Imprimir elementos. \n");
                printf("  4. Buscar elementos. \n");
                printf("  5. Eliminar elementos. \n");
                printf("  6. Editar elementos. \n");
                printf("  7. Vaciar elementos. \n");
                printf("  8. Lista vacia. \n");
                printf("  9. Eliminar lista. \n");
                printf("  0. Volver al menu anterior. \n\n");
                printf("  Ingrese una opcion: "); scanf("%d", &opc);

                        switch(opc){
                            case 1:
                                insertar_listaDoble();
                                break;

                            case 0:
                                menu();
                                break;

                            default: printf("\n LA OPCION INGRESADA NO ES VALIDA. \n\n");
                                break;
                        }
                        break;

//***********************************************************************************************************

            case 7:  //MENU DE OPERACIONES

                system("cls");
                printf("\n  ********** MENU DE OPERACIONES **********\n\n");
                printf("  1. Concatenar dos listas. \n");
                printf("  2. Sumar dos listas. \n");
                printf("  3. Dividir dos listas. \n");
                printf("  4. Elevar una lista a la potencia de otra. \n");
                printf("  5. Copiar una lista en otra. \n");
                printf("  6. Problema de Josephus. \n\n");
                printf("  0. Volver al menu anterior. \n\n");
                printf("  Ingrese una opcion: "); scanf("%d", &opc);

                    switch(opc){
                        case 0:
                            menu();

                        default: printf("\n LA OPCION INGRESADA NO ES VALIDA. \n\n");
                            break;
                    }


//********************************************************************************************

            default: printf("\n LA OPCION INGRESADA NO ES VALIDA. \n\n");
                break;
            }

        system("Pause");
        system("cls");
        }while(salir!=0);
}

//************************************************************************************


/*FUNCIONES GENERALES:      */

void crear (){
    printf("\n\n LA PILA SE INICIO CORRECTAMENTE.\n\n");
}

bool lista_vacia(nodo *pila){
    return (pila==NULL)?true: false;
}

void buscar_elementos (){

    int buscar=0;
    bool encontrado=false;

    printf("\n  Ingrese el numero que desea buscar: "); scanf("%d", &buscar);
    if(pila != NULL){
        while (primero != NULL){
            if(primero->dato == buscar){
                printf("\n El numero (%d) se encuentra en la lista! \n\n");
                encontrado=true; }
            primero = primero->siguiente;
        }

    }
    if(encontrado=false){
        printf("\n  El numero buscado no se encuentra en la pila! \n\n");
    }else{
        printf("\n  La pila esta vacia! \n"); }

}

void eliminar_elementos (){

    int buscar=0;
    bool encontrado=false;

    nodo *anterior = reservar_memoria;
    anterior = NULL;


    printf("\n  Ingrese el dato que desea eliminar: "); scanf("%d", &buscar);
    if(primero != NULL){
        while(pila != NULL && encontrado != true){
            if(pila->dato == buscar){
                if(pila == primero){
                    primero = primero->siguiente;
                }else{
                    anterior->siguiente = pila->siguiente;
                }
                printf("\n  El numero (%d) ha sido borrado con exito. ", buscar);
                encontrado = true;
            }
            anterior = pila;
            pila = pila->siguiente;
        }
        if(encontrado==false){
            printf("\n  El numero buscado no se encuentra en la pila! \n\n");
        }else{
            free(anterior);
        }
    }else{
        printf("\n  La pila esta vacia. \n\n");
    }
}

void editar (){

    int buscar=0;
    bool encontrado=false;

    printf("\n  Ingrese el numero que desea editar de la pila: "); scanf("%d", &buscar);

    if(pila != NULL){
        while(primero != NULL){
            if(primero->dato == buscar){
                printf("\n  El numero ( %d ) se encuentra en la pila.", buscar);
                printf("\n  Ingrese el nuevo numero: "); scanf("%d", &primero->dato);
                printf("\n  Editado con exito!\n");
                encontrado = true;
            }
            primero = primero->siguiente;
        }
        if(encontrado==false){
            printf("\n  El numero (%d) no se encuentra en la pila. ", buscar);
        }
    }else{
        printf("\n  La pila esta vacia. \n\n");
    }
}

void vaciar_elementos(){
}

void eliminar_lista(){
}



//FUNCIONES DE LISTAS LIFO O PILAS:

void insertar_pila (){
    nodo *nuevo_nodo = reservar_memoria;
    printf("    Que numero desea insertar en la pila? \n\n");
    scanf("%d", &nuevo_nodo->dato);
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;
}

void imprimir_pila (){
    nodo *pila_real = reservar_memoria;
    pila_real = pila;
    if(pila != NULL){
        while(pila_real != NULL);{
            printf("    %d", pila_real -> dato);
            pila_real = pila_real -> siguiente; }
    }else{
        printf("\n  La pila esta vacia! \n\n"); }
}



// FUNCIONES PARA LAS LISTAS FIFO O COLAS:

void insertar_cola (){

    nodo *nuevo_nodo = reservar_memoria;

    printf("\n\n    Insertar el numero que desea ingresar: "); scanf("%d", &nuevo_nodo->dato);

    if(lista_vacia(inicio)){
        inicio = nuevo_nodo;
        inicio->siguiente = NULL;
        fin=nuevo_nodo;
    }else{
        fin->siguiente = nuevo_nodo;
        nuevo_nodo->siguiente=NULL;
        fin = nuevo_nodo; }

    printf("\n  Ingresado con exito! \n\n");
}

void imprimir_cola (){

    if(inicio != NULL){
        while(lista_vacia(inicio)!=true){
            printf("    %d", inicio->dato);
            inicio=inicio->siguiente;
        }
    }else{  printf("\n  La cola esta vacia. \n\n"); }
}

//FUNCIONES PARA LISTAS CIRCULARES SIMPLEMENTE ENLAZADAS

void insertar_circularSimple(){

    nodo* nuevo_nodo = reservar_memoria;

    printf("\n\n    Insertar el numero que desea ingresar: "); scanf("%d", &nuevo_nodo->dato);

    if(lista_vacia(inicio)){
        inicio = nuevo_nodo;
        inicio->siguiente = NULL;
        fin=nuevo_nodo;
    }else{
        fin->siguiente = nuevo_nodo;
        nuevo_nodo->siguiente=NULL;
        fin = nuevo_nodo; }

    printf("\n  Ingresado con exito! \n\n");
}

void imprimir_circularSimple(){

    if(primero != NULL){
        do{
            printf("\n  %d", inicio->dato);
            inicio=inicio->siguiente;
        }while(inicio!=primero);
    }else{
        printf("\n  La lista circular esta vacia! \n\n");
    }
}

void buscar_circularSimple(){

    int buscar=0;
    bool encontrado=false;

    printf("\n  Ingrese el numero que desea buscar: "); scanf("%d", &buscar);

    if(primero != NULL){
        do{
            if(inicio->dato == buscar){
                printf("\n\n El numero ( %d ) se encuentra en la lista. ", buscar);
                encontrado=true;
            }
            inicio=inicio -> siguiente;
        }
        while(inicio != primero && encontrado != true);
            if(encontrado == false){
                printf("\n  El numero (%d) no se encuentra en la lista.\n\n");
            }
    }else{
        printf("\n  La lista circular esta vacia! \n\n");
    }
}

void editar_circularSimple(){

    int buscar=0;
    bool encontrado=false;

    printf("\n  Ingrese el numero que desea editar: "); scanf("%d", &buscar);
    if(primero != NULL){
        do{
            if(inicio->dato == buscar){
                printf("\n\n El numero ( %d ) se encuentra en la lista. ", buscar);
                printf("\n  Ingrese el nuevo numero: "); scanf("%d", &inicio->dato);
                printf("\n  El numero (%d) se modifico con exito! \n\n");
                encontrado = true;
            }
            inicio=inicio -> siguiente;
        }while(inicio != primero && encontrado != true);
        if(encontrado == false){
            printf("\n  El numero (%d) no se encuentra en la lista.\n\n");
            }
    }else{ printf("\n  La lista circular esta vacia! \n\n"); }
}

void eliminar_circularSimple(){

    int buscar=0;
    bool encontrado=false;

    nodo* anterior = reservar_memoria;
    anterior = NULL;


    printf("\n  Ingrese el dato del nodo que desea eliminar: "); scanf("%d", &buscar);

    if(primero != NULL){

        do{
            if(inicio->dato == buscar){
                if(inicio == primero){
                    primero = primero -> siguiente;
                    fin -> siguiente = primero;
                }else if(inicio == fin){
                    anterior -> siguiente = primero;
                    fin = anterior;
                }else{ anterior -> siguiente = inicio -> siguiente; }

                printf("\n  El numero (%d) ha sido eliminado con exito! \n\n");
                encontrado = true;
            }
            anterior = inicio;
            inicio = inicio -> siguiente;
        }while(inicio != primero && encontrado != true);

        if(encontrado == false){
            printf("\n  El numero (%d) no se encuenta \n");
        }else{ free(anterior); }
    }else{ printf("\n   La lista circular esta vacia! \n\n"); }
}


//FUNCIONES PARA LISTAS CIRCULARES DOBLEMENTE ENLAZADAS

void insertar_circularDoble(){
    nodo* nuevo_nodo = reservar_memoria;

    printf("\n  Inserte el numero que desea ingresar: "); scanf("%d", &nuevo_nodo->dato);

    if(inicio == NULL){
        inicio = nuevo_nodo;
        inicio -> siguiente = inicio;
        fin = inicio;
        inicio -> atras = fin;
    }else{
        fin -> siguiente = nuevo_nodo;
        nuevo_nodo -> siguiente = inicio;
        nuevo_nodo -> atras = fin;
        fin = nuevo_nodo;
        inicio -> atras = fin; }

    printf("\n  Ingresado con exito! \n\n");
}

void imprimir_asc(){

    if(inicio != NULL){
        do{
            printf("\n     %d", primero -> dato);
            pila = pila -> siguiente;
        }while(pila != inicio);
    }else{
        printf("\n La lista circular doble esta vacia! \n\n");
    }
}

void imprimir_desc(){

    if(inicio != NULL){
        do{
            printf("\n     %d", primero -> dato);
            primero = primero -> atras;
        }while(primero != inicio);
    }else{
        printf("\n La lista circular doble esta vacia! \n\n");
    }
}
void eliminar_circularDoble(){

    int buscar=0;
    bool encontrado=false;

    nodo* anterior = reservar_memoria;
    anterior = NULL;


    printf("\n  Ingrese el dato del nodo que desea eliminar: "); scanf("%d", &buscar);

    if(primero != NULL){
        do{
            if(inicio->dato == buscar){
                if(inicio == primero){
                    primero = primero -> siguiente;
                    primero -> atras = fin;
                    fin -> siguiente = primero;
                }else if(inicio == fin){
                    fin = anterior;
                    fin -> siguiente = primero;
                    primero -> atras = fin;
                }else{
                    anterior -> siguiente = inicio -> siguiente;
                    inicio -> siguiente -> atras = anterior;
                }
                printf("\nEL NODO HA SIDO BORRADO CON EXITO\n");
                encontrado = 1;
            }
            anterior = inicio;
            inicio = inicio -> siguiente;
        }while(inicio != primero && encontrado != true);
        if(encontrado == false){
            printf("\n\nEL NODO NO HA SIDO ENCONTRADO\n");
        }else{
            free(anterior);
        }
    }else{
        printf("\n\nLA LISTA DOBLE CIRCULAR SE ENCUENTRA VACIA");
    }
}


//FUNCIONES LISTAS DOBLEMENTE ENLAZADAS

void insertar_listaDoble(){

    nodo* nuevo_nodo = reservar_memoria;

    printf("\n  Inserte el numero que desea insertar: "); scanf("%d", &nuevo_nodo->dato);

    if(inicio == NULL){
        inicio = nuevo_nodo;
        inicio -> siguiente = NULL;
        inicio->atras = NULL;
        fin = inicio;
    }else{
        fin -> siguiente = nuevo_nodo;
        nuevo_nodo -> siguiente = NULL;
        nuevo_nodo -> atras = fin;
        fin = nuevo_nodo;
    }
    printf("\n Ingresado con exito! \n\n");
}

void imprimir_asc_listaDoble(){

    if(inicio != NULL){
        while(pila != NULL){
            printf("\n     %d", pila->dato);
            pila = pila->siguiente; }
    }else{ printf("\n  La lista doblemente enlazada se encuentra vacia! \n\n"); }
}

void imprimir_desc_listaDoble(){

    if(primero != NULL){
        while(fin != NULL){
            printf("\n     %d", fin->dato);
            fin = fin->atras; }
    }else{ printf("\n  La lista doblemente enlazada se encuentra vacia! \n\n"); }
}

void buscar_listaDoble(){

    int buscar=0;
    bool encontrado=false;

    printf("\n  Ingrese el numero que desea buscar: "); scanf("%d", &buscar);

    if(primero != NULL){
        while(inicio != NULL && encontrado != true){
            if(inicio->dato == buscar){
                printf("\n  El numero (%d) se encuentra en la lista! \n\n", buscar);
                encontrado = true;
            }
            inicio = inicio->siguiente;
        } if(encontrado == false){
                printf("\n  El nodo no ha sido encontrado en la lista! \n\n"); }
    }else{ printf("\n   La lista doblemente enlazada esta vacia! \n\n"); }
}

void editar_listaDoble(){

    int buscar=0;
    bool encontrado=false;

    printf("\n  Ingrese el numero que desea buscar: "); scanf("%d", &buscar);

    if(primero != NULL){
        while(inicio != NULL){
            if(inicio->dato == buscar){
                printf("\n  El numero (%d) se encuentra en la lista", buscar);
                printf("\n  Ingrese el nuevo numero: "); scanf("%d", &inicio->dato);
                printf("\n  El numero (%d) se modifico con exito! \n\n");
                encontrado = true;
            }
            inicio = inicio->siguiente;
        }
        if(encontrado == false){
            printf("\n  El numero (%d) no se encuentra en la lista.", buscar); }
    }else{ printf("\n   La lista doblemente enlazada esta vacia! \n\n"); }
}

void eliminarNodo(){

    nodo* anterior = (nodo*) malloc(sizeof(nodo));
    anterior = NULL;

    int buscar=0;
    bool encontrado=false;

    printf("\n  Ingrese el numero que desea buscar: "); scanf("%d", &buscar);

    if(primero != NULL){
        while(inicio != NULL && encontrado != 1){
            if(inicio->dato == buscar){
                if(inicio == primero){
                    primero = primero -> siguiente;
                    primero -> atras = NULL;
                }else if(inicio == fin){
                    anterior -> siguiente = NULL;
                    fin = anterior;
                }else{
                    anterior -> siguiente = inicio -> siguiente;
                    inicio -> siguiente -> atras = anterior;
                }
                printf("\nEL NODO HA SIDO BORRADO CON EXITO\n");
                encontrado = true;
            }
            anterior = inicio;
            inicio = inicio -> siguiente;
        }
        if(encontrado == false){
            printf("\nEL NODO NO HA SIDO ENCONTRADO\n");
        }else{
            free(anterior);
        }
    }else{
        printf("\nLA LISTA DOBLE SE ENCUENTRA VACIA\n");
    }
}








