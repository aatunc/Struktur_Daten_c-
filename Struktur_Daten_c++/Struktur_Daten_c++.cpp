// Struktur_Daten_c++.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>

using namespace std;

typedef struct
{
	char name[30], vorname[30];
	int alter, schuhgroesse;
}
person;

person einlesen(void);



int main(void)
{
	person p1, p2;

	p1 = einlesen();
	cout << endl;
	p2 = einlesen();

	if (p1.alter > p2.alter)
		cout << p1.vorname << "  " << p1.name
		<< "ist der aeltere." << endl;
	else
		cout << p2.vorname << " " << p2.name
		<< "koennte der aeltere sein." << endl;
}
person einlesen(void)
{
	person p;
	cout << "Vorname: ";
	cin >> p.vorname;
	cout << "Name: ";
	cin >> p.name;
	cout << "Alter: ";
	cin >> p.alter;
	cout << "Schuhgroesse: ";
	cin >> p.schuhgroesse;
	return p;
}


// Programm ausführen: STRG+F5 oder Menüeintrag "Debuggen" > "Starten ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.
