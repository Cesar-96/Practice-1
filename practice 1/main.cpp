
//practice 1
#include <iostream>
using namespace std;

/*int main()
{
	int suma = 0;
	int n = 1000;

	for(int i = 0; i < n; i++)
	{
		if(3*i < n)
			suma += 3*i;
		if(5*i < n && (5*i) % 3 != 0)
			suma += 5*i;
	}
	cout << "la suma de los multiplos de 3 y 5 es: " << suma << endl;
}
*/

int main()
{
   int n,i;
   int factorial;
   cout << "Introduce un numero: ";
   cin >> n;
   factorial=1;
   for(i=1;i<=n;i++)
        factorial = factorial * i;
   cout << endl << "Factorial de " << n << " -> " << factorial << endl;
}


//Problem 3. [5 puntos] Implemente un programa que solicite un n ́umero n e imprima todos
//los n ́umeros perfectos menores a n.






//Problem 5. [5 puntos] Los factores primos de 13195 son 5, 7, 13 y 29.
//¿Cu ́al es el mayor factor primo de 600851475143?
