#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
      /*Angeles Lopez Manuel Alejandro 2EV9*/
int main()
{
    char problema;

printf("Selecciona el número que corresponda a su categoria: ");

    do
    {
        printf( "\n   1. Quien es el presideonte de los Estados Unidos?.");
        printf( "\n   2. Quien es el presidente de Mexico?.");
        printf( "\n   3. Capital de Mexico?." );
        printf( "\n   4. Capital de Estados Unidos?." );
        printf( "\n   5. Salir." );


        /* Filtramos la opción elegida por el usuario */
        do
        {
            printf( "\n   Introduzca opci%cn (1-5): ");
            scanf( "%d", &problema);

        } while ( problema < 1 || problema > 5 );
        /* La opción sólo puede ser 1, 2, 3 o 4 */

        switch (problema)
        {
            case 1: printf("Joe Biden.");
                    break;

            case 2: printf("Andres Manuel Lopez Obrador");
                    break;

            case 3: printf("La Ciudad de Mexico");
                    break;

            case 4: printf("Washington D.C");
                    break;
         }

    } while ( problema != 5 );

    return 0;
}
