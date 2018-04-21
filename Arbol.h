#include <stdio.h>
#include <stdlib.h>

//nota estado :
//• 0 camino sin explorar
//• 1 camino explorado sin salida
//• 2 camino de la solucion
struct Arbol_{
	struct Arbol_ *top,*mid,*bot,*ant;
	short estado=0;
};
typedef struct Arbol_ arbol;

struct Raiz{
	arbol *raiz;
};
typedef struct Raiz raiz;

arbol *Inint(void){
	arbol *rama=(arbol*)malloc(sizeof(arbol));
	rama->top=NULL;
	rama->mid=NULL;
	rama->bot=NULL;
	rama->ant=NULL;
	rama->estado=0;
	return rama;
}
raiz *CrearArbol(void){
	raiz *r=(raiz*)malloc(sizeof(raiz));
	r->raiz=Inint();
	return r;
}
void AgreRamaTop(arbol *arbol){
	arbol *rama=Inint();
	rama->ant=arbol;
	arbol->top=rama;
}
void AgreRamaMid(arbol *arbol){
	arbol *rama=Inint();
	rama->ant=arbol;
	arbol->mid=rama;
}
void AgreRamaBot(arbol *arbol){
	arbol *rama=Inint();
	rama->ant=arbol;
	arbol->bot=rama;
}
int main(void){

}
