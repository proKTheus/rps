#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <gsl/gsl_rng.h>

//Definições da rede
#define Nx 50
#define Ny Nx

//Definições de probabilidades

#define Mob 1e-5 //Mobility
#define pm Mob*(Nx*Ny)/(Mob*Nx*Ny+1.0)
#define pp (1.0-pm)/2.0
#define pr pp

//Definições de tempo/impressão

#define NF 10
#define NG 10000
#define NS 3

//Matriz de predação

#define mp[NS*NS]= {\
				0.0, 1.0, 0.0 ,\
				0.0, 0.0, 1.0 ,\
				1.0, 0.0, 0.0}
