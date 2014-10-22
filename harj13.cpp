/******
*ohjelman nimi: harjoitus 13
*tekija Markus Malm
*Lyhyt kuvaus:
Tee ohjelma, joka kysyy etunimesi ja sukunimesi. Ohjelma
yhdist�� nimet yhdeksi merkkijonoksi ja tulostaa ne
lopuksi nayt�lle.


a) Kayta cstring-kirjastoa (C:n merkkitaulukot)
tehd�ksesi merkkijonojen yhdist�misen
b) Kayta string-kirjastoa (C++:n merkkijonot)
tehd�ksesi merkkijonojen yhdist�misen  TEE, JOS ON AIKAA

Esimerkki
Anna etunimi: Aku
Anna sukunimi: Ankka
Nimesi oli: Aku Ankka

*versio 1.0
*pvm: 22.10.2014
*/
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char etunimi[51];
	char sukunimi[51];
	char kokonimi[51];

	cout << "Anna etunimi\n";
	cin >> etunimi;
	cout << "Anna sukunimi\n";
	cin >> sukunimi;

	strcpy_s(kokonimi, etunimi);
	strcat_s(kokonimi, " ");
	strcat_s(kokonimi, sukunimi);
	cout <<"Nimesi oli: "<< kokonimi;

}