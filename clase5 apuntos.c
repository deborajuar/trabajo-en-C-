CLASE 5

cuando se pone el & se guarda el dato de ladireccion de memoria.
en un puntero (*) se guarda la direccion de memoria, donde se encuentra el dato.


                       dir        dato
            legajo.....xx1              ......>aca se asina el dato de *pResultado (por ser un puntero).
            check .....xx2
            pResultado.xx3         [xx1] cuando me dije aca lo que hace es ir a la direccion de memoria indicada
                                         y el valor se va a archivar en xx1
            mensaje....xx4
        mensajeError...xx5
        minim..........xx6          1
        maximo.........xx7          10000
        reintentos.....xx8          3
        ret............xx9
        num............x10          23


        cuando ho hay llaves en una estrucctura de control(ej.if) significa que tiene una sola instrucciòn (la primera).


        ARRAY

        es una variable q puede contener guardado mas de un dato. a los cuales se puede acceder a tras del indice....> ([])
        Ej int nros [5].... con  esto lo que quiero decir es qur la variable puede contener
                            hasta 5 datos/elementos. 0 1 2 3 4

                            ej. int nro;
                            nro=5;
                            int nros[5];
                            printf("%d",nros[0]);
                            scanf("%d",&nros[2]); --------> el dato que me va a arrojar el indice es la que
                                                           se encuentra alojada en el segundo lugar.
                                                            0  1  2  3  4 ------>order de direcciones de memoria
                                                            |  |  |  |  |
                                                            5  8  2  1  3 ------>elementos guardados en la direc.
                                                                                 de memoria.

                            ejemplo en una fun màs grande:

                            for(i=0;i<44;i++));
                            printf("ingrese edad: ");
                            scanf("%d",&edad[i]);

                            Lo que tambien se puede hacer es declarar una constante al principio del programa,
                            entonces que entre el parentesis en vez de un numero pongo el nombre de la constante.
                            EJ.
                            #define CANTIDAD 100

                            for(i=0;i<CANTIDAD;i++)
                            {
                                printf("%d",&edad[i])

                            }





