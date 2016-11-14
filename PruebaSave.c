#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "CuTest.h"

void pruebasave(CuTest * cuTest);
int ingrese_comando(char *comando);

CuSuite * frontSuiteTest(void)
{
	CuSuite * cuSuite = CuSuiteNew();
	SUITE_ADD_TEST(cuSuite, pruebasave);
	return cuSuite;
}

void pruebasave(CuTest * cuTest)
{
	char * entrada = "save ";
	int actual = ingrese_comando(entrada);
	int esperado = 1;
	char * mensaje = "No entro a save";
	CuAssertIntEquals_Msg(cuTest, mensaje, esperado, actual);
}

void prueba

int ingrese_comando(char *comando)
{

    //char comando[MAX_DIM]={0};
    //int cont=0,c;
    char *nombre_partida=malloc(sizeof(char)*20);
    int terminado=0;
    //printf("\nIngrese el comando: ");
    while(terminado==0)
    {
            /*cont = 0;
            for(cont = 0; (c = getchar())!='\n' && cont<MAX_DIM-1 ; cont++)
            {
                comando[cont]=c;
            }
            if(c != '\n')
                BORRA_BUFFER;
            comando[cont] = 0;*/

            if(strncmp(comando, "save ", 5)==0)
            {
                sscanf(comando,"save %s",nombre_partida);
               // GuardarPartida(nombre_partida,partida);
                printf("\nLa partida se guardo exitosamente!\n");
                return 1;
            }
            else if (strncmp(comando, "quit", 4)==0 && comando[4]==0)
            {
                //quit(movimiento, partida);
                return 2;
            }
            //else if((sscanf(comando,"[%d,%d][%d,%d]%s", &movimiento->F1, &movimiento->C1, &movimiento->F2, &movimiento->C2))==4)
            //{
              //  terminado=1;
                //return 0;//ver return 1;
            //}
            else
            {
                printf("Error! Comando incorrecto, ingrese nuevamente: ");
            }
    }

  return 0;
}

