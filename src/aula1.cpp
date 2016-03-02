#include <iostream>
#include <iomanip>
//Namespaces
using namespace std;
namespace x{
	string e = "Hello", f = "World", g = "!";
}

int main() {
	//Declaração de variáveis
	string a = "Hello", b = "World", c = "!";

	//Cast de variáveis
		//static_cast<char>(c);/*Conversão simples de tipos primários*/
		//dynamic_cast<char>(c);/*Conversão de tipos de objetos*/
		//reinterpret_cast<int*>(d);/*Realiza o cast mantendo o valor binario interno da variavel.*/
		//const_cast<char>(c);/*Usado para tornar uma constante em variavel*/

	cout <<  a << " " << x::f << c << c << endl;

	int d;

	cin >> d;
	cout << "left:"			<< left 	<< setw(3) 	<< d 	<< endl;
	cout << "right:"		<< right 	<< setw(3) 	<< d 	<< endl;
	cout << "decimal:"		<< dec 		<< d 		<< endl;
	cout << "octal:"		<< oct 		<< d 		<< endl;
	cout << "hexadecimal:"	<< hex 		<< d 		<< endl;

	return 0;
}
