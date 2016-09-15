#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int N;


int main(int argc, char **argv) {



int i,j,k;

int *tab;




if (argc <=1){

fprintf(stderr,"brak podanej liczby do wygnerowania liczb pierwszych\n");

return(-1);

}

else

{

N=atoi(argv[1]);
//printf("%d\n",N);


}



if ((tab = (int*) malloc(N*sizeof(int))) == NULL)
{
	fprintf(stderr, "Nie można przydzielić pamięci\n");
	return(-1);
}


for (i=0;i<N;i++){

tab[i]= 1;

//printf("%d\n",tab[i]);


}


for (i=2;i< (int) sqrt(N);i++){

if (tab[i] == 1){


for (j=2;j*i < N;j++){


tab[j*i]= 0;


}

}


}


for (k=2;k < N;k++){

if(tab[k]==1){


printf("%d\n",k);

}

}


free(tab);

return(0);


}
