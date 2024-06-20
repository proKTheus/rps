#include <"../rps.h">

void op(int l, int *phi){
	int i, j;
	FILE *arq;
	char *nom[50];

	sprintf(nom, "dat/phi-%d.dat", l);

	for(i= 0; i<Nx; i++){
		for(j= 0; j<Ny; j++){
			fprintf(arq, "%d ", phi[i*Nx+j]);			
		}				
	}
	fclose(arq);
}
