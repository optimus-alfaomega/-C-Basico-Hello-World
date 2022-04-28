/*
Autor: Miguel Dussán
*/

//Biblioteca de entrada/salida para imprimir en pantalla
#include <iostream> 

using namespace std; //Espacio de nombres de plantilla estándar

//Esto es un comentario de una línea, empieza por dos slash

/*
Un comentario de múltiples líneas abre con un slash y un asterisco, 
y cierra con un asterisco y un slash. Los comentarios no son 
tomados en cuenta al momento de compilar.
*/

/*
main es la función principal. De allí es que arrancan los programas.
int indica que esta función devuelve un número entero.
Los paréntesis indican que esta función principal no recibe 
argumentos.

Las llaves {} indican el cuerpo de la función. La llave 
izquierda { indica que abre la función y la llave derecha } indica 
que cierra.
*/

int main(){
	/*
	La línea a continuación imprime en pantalla la cadena que se 
	encuentra dentro de las comillas dobles, utilizando el comando 
	cout (c out, salida de c) y el operador <<. Las líneas van con un 
	caracter de terminación que es el punto y coma (;).
	*/
	cout << "Hola Mundo!";
	
	/*
		El siguiente comando hace que el programa quede a la espera para que
	el usuario oprima una tecla y terminar con la ejecución del mismo.
	Si no se coloca es posible que se abra e inmediatamente se cierre una ventana
	de consola y nunca muestre la ejecución del programa.
	Aunque en algunas implementaciones esto no es necesario,  es importante
	colocarlo para que no haya problemas. 
	Si en su IDE esto aún no hace que la ventana del programa quede a la espera,
	reemplace la línea por (debe probarlo):
	getchar();
	*/
	cin.get();
	
	//Devuelve un número indicando que el programa terminó correctamente.
	return 0; 
}
