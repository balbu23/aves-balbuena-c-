// aves balbu

#include <iostream>
#include <vector>
using namespace std;
int main() {

	float i{};
	//7declara un vector de cadenas
	vector<string>aves = { "loro gris","paloma de diamante","coctel"};
	cout<<"los valores del vector antes de insertar:\n"<<endl;
		//itera sobre el vector
		for (int i=0; i < aves.size(); ++i);
		{
			cout << aves[i] << "";
		}
		cout <<"\n";
	//agrega tres valores
	aves.push_back("mayna");
	aves.push_back("periquitos");
	aves.push_back("cacatua");

	cout << "los valores del vector despues de insertar:\n";

	for (int i = 0; i < aves.size(); ++i);
	{
		cout << aves[i] << "";
	}

	cout << "\n";
			return 0;
}
