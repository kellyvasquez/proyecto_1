#include <stdio.h>
#include <stdlib.h>
#define reservar_memoria (nodo*)malloc(sizeof(nodo))

struct nodo{
    int dato;
    nodo *siguiente;
    nodo *atras; };


nodo *pila = NULL;
nodo *inicio = NULL;
nodo *fin = NULL;

/** FUNCIONES GENERALES*/
void texto_subMenu(); /** INVOCA EL SUBMENU PARA TODOS LOS SWITCH */
void crear ();
bool lista_vacia (nodo *);
void buscar_elementos();
void eliminar_elementos();
void editar ();
void vaciar_elementos ();
void eliminar_lista ();//??????????

/** FUNCIONES LISTAS LIFO O PILAS:   */
void insertar_pila ();
void imprimir_pila ();


/** FUNCIONES LISTAS FIFO O COLAS Y ANEXAS A LISTAS SIMPLEMENTE ENLAZADAS:    */
void insertar_cola ();
void imprimir_cola ();

/** FUNCIONES LISTAS CIRCULARES SIMPLEMENTE ENLAZADAS   */
void insertar_circularSimple();
void imprimir_circularSimple();
void buscar_circularSimple();
void editar_circularSimple();
void eliminar_circularSimple();

/** FUNCIONES LISTAS CIRCULARES DOBLEMENTE ENLAZADAS  */
void insertar_circularDoble();
void imprimir_asc();
void imprimir_desc();
void eliminar_circularDoble();

/** FUNCIONES LISTAS DOBLEMENTE ENLAZADAS */
void insertar_listaDoble();
void imprimir_asc_listaDoble();
void imprimir_desc_listaDoble();
void buscar_listaDoble();
void editar_listaDoble();
void eliminar_listaDoble();

void menu();

int main(){
    menu();
    return 0;
}

void menu(){

    int opc, salir=1;

    do{ printf("\n  ********** MENU LISTAS **********\n\n");
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
        do{ printf("\n  ********** MENU LISTAS LIFO **********\n\n");
            texto_subMenu();

            printf("  Ingrese una opcion: "); scanf("%d", &opc);

            switch(opc){

                case 1: crear ();
                    break;

                case 2: insertar_pila();
                    break;

                case 3: imprimir_pila();
                    break;

                case 4: buscar_elementos();
                    break;

                case 5: eliminar_elementos ();
                    break;

                case 6: editar();
                    break;

                case 7: vaciar_elementos();
                    break;

                case 8: lista_vacia(pila);
                    break;

                case 9: eliminar_lista();
                    break;

                case 0:
                    system("cls");
                    menu();
                    break;

                default: printf("\n LA OPCION INGRESADA NO ES VALIDA. \n\n");
                    break;
                }
        }while(opc!=0);
                break;

//********************************************************************************************

            case 2: //MENU LISTAS FIFO

                system("cls");
            do{ printf("\n  ********** MENU LISTAS FIFO **********\n\n");
                texto_subMenu();

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
                        system("cls");
                        menu();
                        break;
                    default: printf("\n LA OPCION INGRESADA NO ES VALIDA. \n\n");
                        break;
                }
                }while(salir!=0);
                break;

//********************************************************************************************

            case 3: //LISTA CIRCULAR SIMPLEMENTE ENLAZADA

                system("cls");
            do{ printf("\n ***** MENU LISTAS CIRCULARES SIMPLEMENTE ENLAZADAS *****\n\n");
                texto_subMenu();

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
                        system("cls");
                        menu();
                        break;

                    default: printf("\n LA OPCION INGRESADA NO ES VALIDA. \n\n");
                        break;
                }
            }while(salir!=0);
                break;

//************************************************************************************************************

            case 4:  //MENU LISTAS CIRCULARES DOBLEMENTE ENLAZADAS

                system("cls");
            do{ printf("\n ***** MENU LISTAS CIRCULARES DOBLEMENTE ENLAZADAS *****\n\n");
                texto_subMenu();

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
                        system("cls");
                        menu();
                        break;

                    default: printf("\n LA OPCION INGRESADA NO ES VALIDA. \n\n");
                        break;
                }
                }while(salir!=0);
                break;

//************************************************************************************************************************

            case 5:   //MENU LISTAS SIMPLEMENTE ENLAZADAS

                system("cls");
            do{ printf("\n ***** MENU LISTAS SIMPLEMENTE ENLAZADAS *****\n\n");
                texto_subMenu();

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
                            system("cls");
                            menu();
                            break;
                        default: printf("\n LA OPCION INGRESADA NO ES VALIDA. \n\n");
                            break;
                }
                }while(salir!=0);
                break;

//***********************************************************************************************************

            case 6: //MENU LISTAS DOBLEMENTE ENLAZADAS

                system("cls");
            do{ printf("\n***** MENU LISTAS DOBLEMENTE ENLAZADAS *****\n\n");
                texto_subMenu();

                printf("  Ingrese una opcion: "); scanf("%d", &opc);

                        switch(opc){
                            case 1:
                                crear();
                                break;

                            case 2:
                                insertar_listaDoble();
                                break;

                            case 3:
                                printf("    1. Mostrar en forma ascendente.\n");
                                printf("    2. Mostrar en forma descendente.\n");
                                printf("    Ingrese una opcion: "); scanf("%d", &opc);

                                //SWITCH PARA MOSTRAR ELEMENTOS
                                    switch(opc){
                                        case 1:
                                            imprimir_asc_listaDoble();
                                            break;

                                        case 2:
                                            imprimir_desc_listaDoble();
                                            break;

                                        default: printf("\n LA OPCION INGRESADA NO ES VALIDA. \n\n"); }
                                //FIN SWITCH PARA MOSTRAR ELEMENTOS
                                break;

                            case 4:
                                buscar_listaDoble();
                                break;

                            case 5:
                                eliminar_listaDoble();
                                break;

                            case 6:
                                editar_listaDoble();
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
                                system("cls");
                                menu();
                                break;

                            default: printf("\n LA OPCION INGRESADA NO ES VALIDA. \n\n");
                                break;
                        }
            }while(salir!=0);
                        break;

//***********************************************************************************************************

            case 7:  //MENU DE OPERACIONES

                system("cls");
            do{ printf("\n  ********** MENU DE OPERACIONES **********\n\n");
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
                            system("cls");
                            menu();
                            break;
                        default: printf("\n LA OPCION INGRESADA NO ES VALIDA. \n\n");
                            break;
                    }
            }while(salir!=0);


//********************************************************************************************

            default: printf("\n LA OPCION INGRESADA NO ES VALIDA. \n\n");
                break;
            }

        system("Pause");
        system("cls");
        }while(salir!=0);
}

//************************************************************************************


/**FUNCIONES GENERALES:      */

void texto_subMenu(){   /** INVOCA EL SUBMENU PARA TODOS LOS SWITCH */
        printf("  1.    Crear lista. \n");
        printf("  2.    Insertar elementos. \n");
        printf("  3.    Imprimir elementos. \n");
        printf("  4.    Buscar elementos. \n");
        printf("  5.    Eliminar elementos. \n");
        printf("  6.    Editar elementos. \n");
        printf("  7.    Vaciar elementos. \n");
        printf("  8.    Lista vacia. \n");
        printf("  9.    Eliminar lista. \n");
        printf("  0.    Volver al menu anterior. \n\n");
}

void crear (){  /** CREAR O INICIALIZAR LA PILA */
    printf("\n\n LA PILA SE INICIO CORRECTAMENTE.\n\n");
}

bool lista_vacia(nodo *inicio){   /** VERIFICAR SI LA PILA ESTA VACIA */
    return (inicio==NULL)?true: false;
}

void buscar_elementos (){   /** BUSCAR ELEMENTOS EN LAS LISTAS */

    int buscar=0;
    bool encontrado=false;

    nodo *actual = reservar_memoria;
    actual = inicio;

    printf("\n  Ingrese el numero que desea buscar: "); scanf("%d", &buscar);
    if(inicio != NULL){
        while (actual != NULL){
            if(actual->dato == buscar){
                printf("\n El numero (%d) se encuentra en la lista! \n\n");
                encontrado=true; }
            actual = actual->siguiente;
        }

    }
    if(encontrado=false){
        printf("\n  El numero buscado no se encuentra en la i! \n\n");
    }else{
        printf("\n  La pila esta vacia! \n"); }

}

void eliminar_elementos (){ /** ELIMINAR ELEMENTOS DE LAS LISTAS */

    int buscar=0;
    bool encontrado=false;

    nodo *actual = reservar_memoria;
    actual = inicio;

    nodo *anterior = reservar_memoria;
    anterior = NULL;


    printf("\n  Ingrese el dato que desea eliminar: "); scanf("%d", &buscar);
    if(inicio != NULL){
        while(actual != NULL && encontrado != true){
            if(actual->dato == buscar){
                if(actual == inicio){
                    inicio = inicio->siguiente;
                }else{
                    anterior->siguiente = actual->siguiente;
                }
                printf("\n  El numero (%d) ha sido borrado con exito. ", buscar);
                encontrado = true;
            }
            anterior = actual;
            actual = actual->siguiente;
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

void editar (){ /** MODIFICAR ELEMENTOS DE LAS LISTAS */

    int buscar=0;
    bool encontrado=false;

    nodo *actual = reservar_memoria;
    actual = inicio;

    printf("\n  Ingrese el numero que desea editar de la pila: "); scanf("%d", &buscar);

    if(inicio != NULL){
        while(actual != NULL){
            if(actual->dato == buscar){
                printf("\n  El numero ( %d ) se encuentra en la pila.", buscar);
                printf("\n  Ingrese el nuevo numero: "); scanf("%d", &actual->dato);
                printf("\n  Editado con exito!\n");
                encontrado = true;
            }
            actual = actual->siguiente;
        }
        if(encontrado==false){
            printf("\n  El numero (%d) no se encuentra en la pila. ", buscar);
        }
    }else{
        printf("\n  La pila esta vacia. \n\n");
    }
}

void vaciar_elementos(){    /** VACIAR ELEMENTOS DE LA LISTA */
}

void eliminar_lista(){  /** ELIMINAR TODA LA LISTA */
}



/** 1) FUNCIONES DE LISTAS LIFO O PILAS:       */

void insertar_pila (){

    nodo *nuevo_nodo = reservar_memoria;
    printf("\n\n   Que numero desea insertar en la pila?:  "); scanf("%d", &nuevo_nodo->dato);
    nuevo_nodo->siguiente = inicio;
    inicio = nuevo_nodo;
    printf("\n\n El numero fue ingresado con exito! \n\n");
}

void imprimir_pila (){

    nodo *actual = reservar_memoria;
    actual = inicio;

    if(inicio != NULL){
         while(actual != NULL);{
             printf("    %d", actual->dato);
             actual = actual->siguiente;
             printf("\n"); }
     }else{
        printf("\n  La pila esta vacia! \n\n"); }
}



/**** 2) FUNCIONES PARA LAS LISTAS FIFO O COLAS: ****/

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


/***** 3)  FUNCIONES PARA LISTAS CIRCULARES SIMPLEMENTE ENLAZADAS  ******/

void insertar_circularSimple(){ /**INGRESAR ELEMENTOS A LA LISTA CIRCULAR SIMPLEMENTE ENLAZADA*/

    nodo* nuevo_nodo = reservar_memoria;

    printf("\n\n    Insertar el numero que desea ingresar: "); scanf("%d", &nuevo_nodo->dato);

    if(inicio == NULL){
        inicio = nuevo_nodo;
        inicio->siguiente = inicio;
        fin=inicio;
    }else{
        fin->siguiente = nuevo_nodo;
        nuevo_nodo->siguiente=inicio;
        fin = nuevo_nodo; }

    printf("\n  Ingresado con exito! \n\n");
}

void imprimir_circularSimple(){ /** IMPRIMIR ELEMENTOS DE LA LISTA CIRCULAR SIMPLEMENTE ENLAZADA */

    nodo* actual = reservar_memoria;
    actual = inicio;

    if(inicio != NULL){
        do{
            printf("\n  %d", actual->dato);
            actual = actual->siguiente;
        }while(actual!=inicio);
    }else{
        printf("\n  La lista circular esta vacia! \n\n");
    }
}

void buscar_circularSimple(){ /**BUSCAR ELEMENTOS EN LA LISTA CIRCULAR SIMPLEMENTE ENLAZADA*/

    int buscar=0;
    bool encontrado=false;

    nodo* actual = reservar_memoria;
    actual = inicio;

    printf("\n  Ingrese el numero que desea buscar: "); scanf("%d", &buscar);

    if(inicio != NULL){
        do{
            if(actual->dato == buscar){
                printf("\n\n El numero ( %d ) se encuentra en la lista. ", buscar);
                encontrado=true;
            }
            actual = actual -> siguiente;
        }
        while(actual != inicio && encontrado != true);
            if(encontrado == false){
                printf("\n  El numero (%d) no se encuentra en la lista. ", buscar);
            }
    }else{
        printf("\n  La lista circular esta vacia! \n\n");
    }
}

void editar_circularSimple(){ /** MODIFICAR ELEMENTOS DE LA LISTA CIRCULAR SIMPLEMENTE ENLAZADA*/

    int buscar=0;
    bool encontrado=false;

    nodo* actual = reservar_memoria;
    actual = inicio;

    printf("\n  Ingrese el numero que desea editar: "); scanf("%d", &buscar);
    if(inicio != NULL){
        do{
            if(actual->dato == buscar){
                printf("\n\n El numero ( %d ) se encuentra en la lista. ", buscar);
                printf("\n  Ingrese el nuevo numero: "); scanf("%d", &actual->dato);
                printf("\n  El numero (%d) se modifico con exito! \n\n", buscar);
                encontrado = true;
            }
            actual = actual -> siguiente;
        }while(actual != inicio && encontrado != true);
        if(encontrado == false){
            printf("\n  El numero (%d) no se encuentra en la lista.\n\n", buscar);
            }
    }else{ printf("\n  La lista circular esta vacia! \n\n"); }
}

void eliminar_circularSimple(){ /** ELIMINAR ELEMENTOS DE LA LISTA CIRCULAR SIMPLEMENTE ENLAZADA*/

    int buscar=0;
    bool encontrado=false;

    nodo* actual = reservar_memoria;
    actual = inicio;
    nodo* anterior = reservar_memoria;
    anterior = NULL;


    printf("\n  Ingrese el dato del nodo que desea eliminar: "); scanf("%d", &buscar);

    if(inicio!= NULL){

        do{
            if(actual->dato == buscar){
                if(actual == inicio){
                    inicio = inicio -> siguiente;
                    fin -> siguiente = inicio;
                }else if(actual == fin){
                    anterior -> siguiente = inicio;
                    fin = anterior;
                }else{ anterior -> siguiente = actual -> siguiente; }

                printf("\n  El numero (%d) ha sido eliminado con exito! \n\n", buscar);
                encontrado = true;
            }
            anterior = actual;
            actual=actual-> siguiente;
        }while(actual != inicio && encontrado != true);
        if(encontrado == false){
            printf("\n  El numero (%d) no se encuenta \n", buscar);
        }else{ free(anterior); }
    }else{ printf("\n   La lista circular esta vacia! \n\n"); }
}


/** 4) FUNCIONES PARA LISTAS CIRCULARES DOBLEMENTE ENLAZADAS */

void insertar_circularDoble(){  /** INGRESAR ELEMENTOS A LA LISTA CIRCULAR DOBLEMENTE ENLAZADA */
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

void imprimir_asc(){    /** IMPRIMR ELEMENTOS EN FORMA ASCENDENTE EN LA LISTA CIRCULAR DOBLEMENTE ENLAZADA */

    nodo *actual = reservar_memoria;
    actual = inicio;

    if(inicio != NULL){
        do{
            printf("\n     %d", actual -> dato);
            actual = actual -> siguiente;
        }while(actual != inicio);
    }else{
        printf("\n La lista circular doble esta vacia! \n\n");
    }
}

void imprimir_desc(){   /** IMPRIMIR ELEMENTOS EN FORMA DESCENDENTE EN LA LISTA CIRCULAR DOBLEMENTE ENLAZADA */


    nodo *actual = reservar_memoria;
    actual = fin;

    if(inicio != NULL){
        do{
            printf("\n     %d", actual -> dato);
            actual = actual -> atras;
        }while(actual != fin);
    }else{
        printf("\n La lista circular doble esta vacia! \n\n");
    }
}
void eliminar_circularDoble(){  /** ELIMINAR ELEMENTOS DE LA LISTA CIRCULAR DOBLEMENTE ENLAZADA */

    int buscar=0;
    bool encontrado=false;

    nodo *actual = (nodo*) malloc(sizeof(nodo));
    actual = inicio;

    nodo* anterior = reservar_memoria;
    anterior = NULL;


    printf("\n  Ingrese el dato del nodo que desea eliminar: "); scanf("%d", &buscar);

    if(inicio != NULL){
        do{
            if(actual->dato == buscar){
                if(actual == inicio){
                    inicio = inicio -> siguiente;
                    inicio -> atras = fin;
                    fin -> siguiente = inicio;
                }else if(actual == fin){
                    fin = anterior;
                    fin -> siguiente = inicio;
                    inicio -> atras = fin;
                }else{
                    anterior -> siguiente = actual -> siguiente;
                    actual -> siguiente -> atras = anterior;
                }
                printf("\nEL NODO HA SIDO BORRADO CON EXITO\n");
                encontrado = 1;
            }
            anterior = actual;
            actual = actual -> siguiente;
        }while(actual != inicio && encontrado != true);
        if(encontrado == false){
            printf("\n\nEL NODO NO HA SIDO ENCONTRADO\n");
        }else{
            free(anterior);
        }
    }else{
        printf("\n\nLA LISTA DOBLE CIRCULAR SE ENCUENTRA VACIA");
    }
}


/** 6) FUNCIONES LISTAS DOBLEMENTE ENLAZADAS */

void insertar_listaDoble(){     /** INGRESAR ELEMENTOS A LA LISTA DOBLEMENTE ENLAZADA */

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

void imprimir_asc_listaDoble(){      /** IMPRIMIR ELEMENTOS DE FORMA ASCENDENTE EN LA LISTA DOBLEMENTE ENLAZADA */

    nodo *actual = reservar_memoria;
    actual = inicio;

    if(inicio != NULL){
        while(actual != NULL){
            printf("\n     %d", actual->dato);
            actual = actual->siguiente; }
    }else{ printf("\n  La lista doblemente enlazada se encuentra vacia! \n\n"); }
}

void imprimir_desc_listaDoble(){     /** IMPRIMIR ELEMENTOS DE FORMA DESCENDENTE EN LA LISTA DOBLEMENTE ENLAZADA */

    nodo *actual = reservar_memoria;
    actual = fin;

    if(inicio != NULL){
        while(actual != NULL){
            printf("\n     %d", actual->dato);
            actual = actual->atras; }
    }else{ printf("\n  La lista doblemente enlazada se encuentra vacia! \n\n"); }
}

void buscar_listaDoble(){     /** BUSCAR ELEMENTOS EN LA LISTA DOBLEMENTE ENLAZADA */

    int buscar=0;
    bool encontrado=false;

    nodo *actual = reservar_memoria;
    actual = inicio;

    printf("\n  Ingrese el numero que desea buscar: "); scanf("%d", &buscar);

    if(inicio != NULL){
        while(actual != NULL && encontrado != true){
            if(actual->dato == buscar){
                printf("\n  El numero (%d) se encuentra en la lista! \n\n", buscar);
                encontrado = true;
            }
            actual = actual->siguiente;
        } if(encontrado == false){
                printf("\n  El nodo no ha sido encontrado en la lista! \n\n"); }
    }else{ printf("\n   La lista doblemente enlazada esta vacia! \n\n"); }
}

void editar_listaDoble(){    /** EDITAR ELEMENTOS EN LA LISTA DOBLEMENTE ENLAZADA */

    int buscar=0;
    bool encontrado=false;

    nodo *actual = reservar_memoria;
    actual = inicio;

    printf("\n  Ingrese el numero que desea buscar: "); scanf("%d", &buscar);

    if(inicio != NULL){
        while(actual != NULL){
            if(actual->dato == buscar){
                printf("\n  El numero (%d) se encuentra en la lista", buscar);
                printf("\n  Ingrese el nuevo numero: "); scanf("%d", &actual->dato);
                printf("\n  El numero (%d) se modifico con exito! \n\n");
                encontrado = true;
            }
            actual = actual->siguiente;
        }
        if(encontrado == false){
            printf("\n  El numero (%d) no se encuentra en la lista.", buscar); }
    }else{ printf("\n   La lista doblemente enlazada esta vacia! \n\n"); }
}

void eliminar_listaDoble(){      /** ELIMINAR ELEMENTOS EN LA LISTA DOBLEMENTE ENLAZADA */

    int buscar=0;
    bool encontrado=false;

    nodo *actual = reservar_memoria;
    actual = inicio;

    nodo* anterior = reservar_memoria;
    anterior = NULL;

    printf("\n  Ingrese el numero que desea buscar: "); scanf("%d", &buscar);

    if(inicio != NULL){
        while(actual != NULL && encontrado != true){
            if(actual->dato == buscar){
                if(actual == inicio){
                    inicio = inicio -> siguiente;
                    inicio -> atras = NULL;
                }else if(actual == fin){
                    anterior -> siguiente = NULL;
                    fin = anterior;
                }else{
                    anterior -> siguiente = actual -> siguiente;
                    actual -> siguiente -> atras = anterior;
                }
                printf("\nEL NODO HA SIDO BORRADO CON EXITO\n");
                encontrado = true;
            }
            anterior = actual;
            actual = actual -> siguiente;
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








