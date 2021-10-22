
#include <iostream>
#include <complex>
using namespace std;

//calculator with 3 function complex number conversion, complex calculating and normal calculator

complex <double> KomplexeUmwandlung();
complex <double> komplexerRechner();
double Taschenrechner();

int main()
{
   	
	int option, loop = 0;
   
	cout << "Bei diesem Programm kann man zwsichen drei Funktionen waehlen. Dem rechnen mit komplexen Zahlen, dem umwandeln von komplexen Zahlen und dem rechnen mit normalen Zahlen. \n \n";

	// loop to continue calculating
	while (loop == 0)
	{
		int auswahl;
		cout << "Bitte waehlen Sie zwischen Folgenden Anwendungen aus:\n1 = Komplexe Umwandlung\n2 = Rechnen mit komplexen Zahlen\n3 = normaler Taschenrechner\nIhre Auswahl:";
		cin >> auswahl;
		cout << endl;

		switch (auswahl)
		{
		case 1: KomplexeUmwandlung();
			break;
		case 2: komplexerRechner();
			break;
		case 3: Taschenrechner();
			break;
		default: cout << "Diese Eingabe ist nicht bekannt";
		}

		cout << "\n\nZum weiter Rechnen 1 eingeben, zum Schliessen des Taschenrechners beliebige Zahl eingeben: ";
		cin >> option;
		cout << endl;

		//termination condition
		if (option != 1) 
		{
			loop++;
		}

	}
    
    
}

//function for complex conversion

complex <double> KomplexeUmwandlung()
{
	double e, f;
	int winkel = 0;
	complex <double> ergebniskomplex;
	cout << "Umwandlung der komplexen Zahl. Gewuenschte komplexe Zahl eingeben.\n";
	cout << "Zahl 1 Realteil: ";
	cin >> e;
	cout << "Imaginaerteil: ";
	cin >> f;
	cout << endl;

	complex <double> complexnumber1(e, f); // create complex number
	cout << "Es gibt die folgenden Optionen:\n 1 = Gibt den Winkel in Polarkoordinaten zurueck \n 2 = Gibt den Betrag der Wurzel zurueck  \n 3 = Gibt das Quadrat des Betrages zurueck \n 4 = Gibt den konjugierten Wert zurueck\nGeben Sie ihre Option ein:";
	cin >> winkel;

	//switch case for different applications
	switch (winkel)
	{
	case 1: cout << "Das Ergebnis ist: " << arg(complexnumber1);
		break;
	case 2:  cout << "Das Ergebnis ist: " << abs(complexnumber1);
		break;
	case 3:  cout << "Das Ergebnis ist: " << norm(complexnumber1);
		break;
	case 4:  cout << "Das Ergebnis ist: " << conj(complexnumber1);
		break;

		return 0;

	}
}

// function for complex calculator
complex <double> komplexerRechner()
{
	double a, b, c, d;
	char rechenoperator;
	complex <double> result;
	cout << "Im Folgenden die zwei gewuenschten Zahlen und den Rechenoperator eingeben. \n";
	// input complex number
	cout << "Zahl 1 Realteil: ";
	cin >> a;
	cout << "Imaginaerteil: ";
	cin >> b;
	cout << "Rechenoperator: ";
	cin >> rechenoperator;
	cout << "Zahl 2 Realteil: ";
	cin >> c;
	cout << "Imaginaerteil: ";
	cin >> d;

	//create complex number
	complex <double> complexnumber(a, b);
	complex <double> complexnumber2(c, d);

	// arithmetic instruciton determination
	switch (rechenoperator)
	{
	case '+':  result = complexnumber + complexnumber2;
		break;
	case '-': result = complexnumber - complexnumber2;
		break;
	case '/': result = complexnumber / complexnumber2;
		break;
	case '*': result = complexnumber * complexnumber2;
		break;
	default: std::cout << "Das  Rechenzeichen ist unbekannt! ";
	}
	std::cout << "Ihr Ergebniss ist: " << result;

	return 0;
}



//function for simple calculator

double Taschenrechner()
{
	double number1, number2, ergebniss = 0; //initialization
	char symbol;
	cout << "Die Rechnung besteht aus zwei Zahlen und einem Rechenoperator. Eingeben wie folgt : Zahl1 Rechenoperator Zahl2\n \n";
	cout << "Ihre Rechnung: ";
	cin >> number1 >> symbol >> number2;

	// arithmetic instruciton determination
	switch (symbol)
	{
	case '+':  ergebniss = number1 + number2;
		break;
	case '-': ergebniss = number1 - number2;
		break;
	case '/': ergebniss = number1 / number2;
		break;
	case '*': ergebniss = number1 * number2;
		break;
	default: cout << "Das  Rechenzeichen ist unbekannt! Das Ergebnis ist daher: ";
	}

	cout << "Ihr Ergebniss ist: " << ergebniss;
	return 0;
}


