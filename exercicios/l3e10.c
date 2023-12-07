#include <stdio.h>
#include <stdlib.h>

void adicao (int nx, int dx, int ny, int dy, int *nv, int *dv);

void subtracao (int nx, int dx, int ny, int dy, int *nv, int *dv);

void multiplicacao (int nx, int dx, int ny, int dy, int *nv, int *dv);

void divisao (int nx, int dx, int ny, int dy, int *nv, int *dv);

void main (){

    int nx, dx, ny, dy, *nv, *dv;

    printf("Digite o numerador de X: ");
    scanf("%d", &nx);
    printf("Digite o denominador de X: ");
    scanf("%d", &dx);
    printf("Digite o numerador de Y: ");
    scanf("%d", &ny);
    printf("Digite o denominador de Y: ");
    scanf("%d", &dy);
    adicao(nx,dx,ny,dy,&nv,&dv);
    printf("Adicao: %d/%d", nv,dv);
    subtracao(nx,dx,ny,dy, &nv, &dv);
    printf("\nSubtracao: %d/%d", nv,dv);
    multiplicacao(nx,dx,ny,dy, &nv, &dv);
    printf("\nMultiplicacao: %d/%d", nv,dv);
    divisao(nx,dx,ny,dy, &nv, &dv);
    printf("\nDivisao: %d/%d", nv,dv);
    getchar();
}

void adicao (int nx, int dx, int ny, int dy, int *nv, int *dv){

    *nv= (nx*dy+ny*dx);
    *dv = (dx*dy);

}

void subtracao (int nx, int dx, int ny, int dy, int *nv, int *dv){

    *nv= (nx*dy-ny*dx);
    *dv = (dx*dy);

}

void multiplicacao (int nx, int dx, int ny, int dy, int *nv, int *dv){

    *nv= (nx*ny);
    *dv = (dx*dy);

}

void divisao (int nx, int dx, int ny, int dy, int *nv, int *dv){

    *nv= (nx*dy);
    *dv = (ny*dx);

}
