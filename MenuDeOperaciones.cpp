#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>

void suma()
{
	int i, j, x, y;
    
    printf("Ingrese el numero de filas de la matriz: ");
    scanf("%d", &i);
    
    printf("Ingrese el numero de columnas de la matriz: ");
    scanf("%d", &j);

    int a[i][j];
    int sumaTotal = 0;

    srand(time(NULL));

    for (x = 0; x < i; x++) 
	{
        for (y = 0; y < j; y++) 
		{
            a[x][y] = rand() % 10;
        }
    }

    for (x = 0; x < i; x++) 
	{
        for (y = 0; y < j; y++) 
		{
            printf("%d ", a[x][y]);
            sumaTotal += a[x][y];
        }
        printf("\n");
    }

    printf("\nLa suma de todos los elementos de la matriz es: %d\n", sumaTotal);
	
}

void resta ()
{
	int i, j, x, y;
    
    printf("Ingrese el numero de filas de la matriz: ");
    scanf("%d", &i);
    
    printf("Ingrese el numero de columnas de la matriz: ");
    scanf("%d", &j);

    int a[i][j];
    int b[i][j];
    int resta[i][j];
    
    srand(time(NULL));

    for ( x = 0; x < i; x++) 
	{
        for ( y = 0; y < j; y++) 
		{
            a[x][y] = rand() % 10;
        }
    }

    for (int x = 0; x < i; x++) 
	{
        for (int y = 0; y < j; y++) 
		{
            b[x][y] = rand() % 10;
        }
    }

    for (int x = 0; x < i; x++) 
	{
        for (int y = 0; y < j; y++) 
		{
            resta[x][y] = a[x][y] - b[x][y];
        }
    }

    printf("Matriz A:\n");
    for (int x = 0; x < i; x++) {
        for (int y = 0; y < j; y++) {
            printf("%d ", a[x][y]);
        }
        printf("\n");
    }

    printf("Matriz B:\n");
    for (int x = 0; x < i; x++) 
	{
        for (int y = 0; y < j; y++) 
		{
            printf("%d ", b[x][y]);
        }
        printf("\n");
    }

    printf("Resultado de la resta:\n");
    for ( x = 0; x < i; x++) 
	{
        for ( y = 0; y < j; y++) 
		{
            printf("%d ", resta[x][y]);
        }
        printf("\n");
    }
}

void multi()
{
 int n, i, j, k;

    
    srand(time(NULL));

    printf("Ingrese la longitud de la matriz: ");
    scanf("%d", &n);

    int A[n][n], B[n][n], C[n][n];

    printf("Matriz A:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            A[i][j] = rand() % 9 + 1; 
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("Matriz B:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            B[i][j] = rand() % 9 + 1; 
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    printf("Matriz C:\n");
    int temporal;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            temporal = 0;
            for (k = 0; k < n; k++) {
                temporal += A[i][k] * B[k][j];
            }
            C[i][j] = temporal;
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }	
}

void D()
{
	int i, j, x, y;
    
    printf("Ingrese el numero de filas y columnas de las matrices: ");
    scanf("%d", &i);

    int a[i][i];
    int b[i][i];
    int division[i][i];
    
    srand(time(NULL));

    for (int x = 0; x < i; x++) 
	{
        for (y = 0; y < i; y++) 
		{
            a[x][y] = rand() % 10;
            b[x][y] = rand() % 10;
        }
    }

    for (x = 0; x < i; x++) 
	{
        for (y = 0; y < i; y++) 
		{
            division[x][y] = a[x][y] / b[x][y];
        }
    }

    printf("Matriz A:\n");
    for (int x = 0; x < i; x++) 
	{
        for (int y = 0; y < i; y++) 
		{
            printf("%d ", a[x][y]);
        }
        printf("\n");
    }

    printf("Matriz B:\n");
    for (int x = 0; x < i; x++) 
	{
        for (y = 0; y < i; y++) 
		{
            printf("%d ", b[x][y]);
        }
        printf("\n");
    }

    printf("Resultado de la division:\n");
    for (int x = 0; x < i; x++) 
	{
        for (int y = 0; y < i; y++) 
		{
            printf("%d ", division[x][y]);
        }
        printf("\n");
    }
}

void diagonal ()
{
	int i, j, x, y;
    
    printf("Ingrese el tamaño de la matriz cuadrada: ");
    scanf("%d", &i);

    int matriz[i][i];
    int sumaD= 0;
    
    srand(time(NULL));

    for (x = 0; x < i; x++) 
	{
        for (y = 0; y < i; y++) 
		{
            matriz[x][y] = rand() % 10;
        }
    }

    for (int x = 0; x < i; x++) 
	{
        sumaD += matriz[x][x];
    }

    printf("Matriz:\n");
    for (x = 0; x < i; x++) 
	{
        for (y = 0; y < i; y++) 
		{
            printf("%d ", matriz[x][y]);
        }
        printf("\n");
    }

    printf("Suma de la diagonal principal: %d\n", sumaD);
	
}

void triangulo()
{
	 int filas, columnas, i, j, x, y;
    
    printf("Ingrese longitud: ");
    scanf("%d", &filas);
    columnas = filas;

    int matriz[filas][columnas];
    int stp = 0;
    
    srand(time(NULL));

    for ( i = 0; i < filas; i++) 
	{
        for ( j = 0; j < columnas; j++) 
		{
            matriz[i][j] = rand() % 10;
        }
    }

    for (int x = 0; x < filas; x++) 
	{
        for (y = x; y < columnas; y++) 
		{
            stp += matriz[x][y];
        }
    }

    printf("Matriz:\n");
    for (i = 0; i < filas; i++) 
	{
        for (j = 0; j < columnas; j++) 
		{
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Suma de la triangular superior: %d\n", stp);
}





int main(int argc, char** argv) 

{
int d;
int i=1;


printf("Que desea hacer?\n"); 
printf("1. suma\n"); 
printf("2. resta\n"); 
printf("3. multiplicacion\n"); 
printf("4. Division\n"); 
printf("5. Diagonal\n"); 
printf("6. Triangulo\n"); 
scanf("%d", &d);

if(d==1)
{
 suma();
}
if(d==2)
{
resta();
}
if(d==3)
{
 multi ();
}
if(d==4)
{
 D();	
}
if(d==5)
{
diagonal();	
}
if(d==6)
{
 triangulo ();	
}



	


 
	
	
	
	
	
    
    
   

	
	
	return 0;
}
