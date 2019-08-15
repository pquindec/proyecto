#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void ingresar_datos();
void presentar_datos();
int num;
char datos[2][20];
main()
{
    int n, opcion;
    char nomalum[100];
    

    do
    {
        menu:
        printf( "\n 1. Menu.");
        printf( "\n 2. Ingresar nombre de Profesores.");
        printf( "\n 3. Presentar nombre de Estudiantes.");
        printf( "\n 4. Salir." );
        printf( "\n Introduzca opcion (1-4): ");
        scanf( "%d", &opcion );
        switch ( opcion )
        {
            case 1: int m;
                    do{
                    printf( "\n 1. Ingresar Datos");
                    printf( "\n 2. Asignar Datos");
                    printf( "\n 3. Presentar Datos");
                    printf( "\n 4. Eliminar Datos" );
                    printf("\n 5. Salir");
                    printf( "\n Introduzca opcion (1-5): ");
                    scanf( "%d", &m );
                    switch(m)
                    {
                        case 1: 
                                ingresar_datos();
                    break;
                        case 2: break;
                        case 3: 
                                presentar_datos();
                        break;
                        case 4: break;
                        case 5: goto menu;
                    }
                    } while ( m != 5 );
                    break;
            case 2: 
                    break;
            case 3: printf("\nEl nombre del estudiante es: %s\n", nomalum);
         }
    } while ( opcion != 4 );

    return 0;
}
void ingresar_datos()
{
    printf("\n Cuantos datos desea ingresar: ");
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
    printf("\n ingrese un nombre: ");
    scanf("%s",datos[i]);
    }
}
void presentar_datos()
{
    printf("\n Presentacion de Datos");
    for(int i=0;i<num;i++)
    {
        printf("\n %s",datos[i]);
    }
}