// Zubringerbus.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
// https://www.programmieraufgaben.ch/aufgabe/zubringerbus/uzibjyek

#include <iostream>

using namespace std;

int main()
{
    short uhrzeit = 00;
    short mins = 00;
    short stunden = 00; 
    cout << "Wie viel ist es? (Format hhmm) ";
    cin >> uhrzeit;

    mins = uhrzeit % 100;
    stunden = (uhrzeit - mins) / 100;
    cout << "Uhrzeit jetzt [Stunde: " << stunden << " Minuten: " << mins << "]" << endl;

    mins = mins + (30 - mins % 30);
 
    stunden = stunden + mins / 60;
    stunden = stunden % 24;
    mins = mins % 60;
    cout << "Uhrzeit next Bus [Stunde: " << stunden << " Minuten: " << mins << "]" << endl;

    uhrzeit = stunden * 100 + mins;

    cout << "naechster Bus: " << uhrzeit << endl;

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
