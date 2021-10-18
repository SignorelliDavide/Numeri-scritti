/*
Signorelli Davide
3IB
28/09/2021
Problema: scrivere a parole un numero compreso tra 0 e 999999 scelto dall'utente
Algoritmo: ciclo do while per il controllo dell'input
		   condizione per verificare se il nuemro è 0
		   condizioni switch-case per le sostituzioni regolari
		   condizioni if per le sostituzioni irregolari
*/
#include <iostream>
using namespace std;
int main()
{
	unsigned int n;
	do { //controllo dell'input
		cout << "inserisci il numero da 0 a 999999:"; //faccio inserire un numero
		cin >> n;
	} while (n < 0 || n>999999);
	short int cm = (n / 100000) % 10; //calcolo le centinaia di migliaia
	short int dm = (n / 10000) % 10; //calcolo le decine di migliaia
	short int m = (n / 1000) % 10; //calcolo le migliaia
	short int c = (n / 100) % 10; //calcolo le centinaia
	short int d = (n / 10) % 10; //calcolo le decine
	short int u = n % 10; //calcolo le unità
	if (n == 0) //essendo 0 irregolare se n=0 lo scrivo direttamente
	{
		cout << "zero";
	}
	else
	{
		switch (cm) //sostutuisco le centinaia di migliaia
		{
		case 0: {break; }
		case 1: {cout << "cento"; break; }
		case 2: {cout << "duecento"; break; }
		case 3: {cout << "trecento"; break; }
		case 4: {cout << "quattrocento"; break; }
		case 5: {cout << "cinquecento"; break; }
		case 6: {cout << "seicento"; break; }
		case 7: {cout << "settecento"; break; }
		case 8: {cout << "ottocento"; break; }
		case 9: {cout << "novecento"; break; }
		}
		if (m == 8)
		{
			switch (dm) //sostutuisco le decine di migliaia con le eccezzioni dell'otto
			{
			case 0: {break; }
			case 2: {cout << "vent'"; break; }
			case 3: {cout << "trent'"; break; }
			case 4: {cout << "quarant'"; break; }
			case 5: {cout << "cinquant'"; break; }
			case 6: {cout << "sesant'"; break; }
			case 7: {cout << "settant'"; break; }
			case 8: {cout << "ottant'"; break; }
			case 9: {cout << "novant'"; break; }
			}
		}
		if (m != 8)
		{
			switch (dm) //sostutuisco le decine di migliaia
			{
			case 0: {break; }
			case 2: {cout << "venti"; break; }
			case 3: {cout << "trenta"; break; }
			case 4: {cout << "quaranta"; break; }
			case 5: {cout << "cinquanta"; break; }
			case 6: {cout << "sesanta"; break; }
			case 7: {cout << "settanta"; break; }
			case 8: {cout << "ottanta"; break; }
			case 9: {cout << "novanta"; break; }
			}
			if (dm == 1) //decine di migliaia irregolari
			{
				if (dm == 1 && m == 0)
				{
					cout << "diecimila";
				}
				if (dm == 1 && m == 1)
				{
					cout << "undicimila";
				}
				if (dm == 1 && m == 2)
				{
					cout << "dodicimila";
				}
				if (dm == 1 && m == 3)
				{
					cout << "tredicimila";
				}
				if (dm == 1 && m == 4)
				{
					cout << "quattordicimila";
				}
				if (dm == 1 && m == 5)
				{
					cout << "quindicimila";
				}
				if (dm == 1 && m == 6)
				{
					cout << "sedicimila";
				}
				if (dm == 1 && m == 7)
				{
					cout << "diciassettemila";
				}
				if (dm == 1 && m == 9)
				{
					cout << "diciannovemila";
				}
			}
		}
		if (cm + dm + m > 0 && m == 0) 
		{
			switch (m)
			{
			case 0: {cout << "mila"; break; }
			}

		}
		else
		{
			switch (m) //sostutuisco le migliaia
			{
			case 1: {cout << "mille"; break; }
			case 2: {cout << "duemila"; break; }
			case 3: {cout << "tremila"; break; }
			case 4: {cout << "quattromila"; break; }
			case 5: {cout << "cinquemila"; break; }
			case 6: {cout << "seimila"; break; }
			case 7: {cout << "settemila"; break; }
			case 8: {cout << "ottomila"; break; }
			case 9: {cout << "novemila"; break; }
			}
		}

		switch (c) //sostutuisco le centinaia
		{
		case 0: {break; }
		case 1: {cout << "cento"; break; }
		case 2: {cout << "duecento"; break; }
		case 3: {cout << "trecento"; break; }
		case 4: {cout << "quattrocento"; break; }
		case 5: {cout << "cinquecento"; break; }
		case 6: {cout << "seicento"; break; }
		case 7: {cout << "settecento"; break; }
		case 8: {cout << "ottocento"; break; }
		case 9: {cout << "novecento"; break; }
		}
		if (u == 8)
		{
			switch (d) //sostutuisco le decine con le eccezzioni dell'otto
			{
			case 0: {break; }
			case 1: {cout << "dici"; break; }
			case 2: {cout << "vent'"; break; }
			case 3: {cout << "trent'"; break; }
			case 4: {cout << "quarant'"; break; }
			case 5: {cout << "cinquant'"; break; }
			case 6: {cout << "sessant'"; break; }
			case 7: {cout << "settant'"; break; }
			case 8: {cout << "ottant'"; break; }
			case 9: {cout << "novant'"; break; }
			}
		}
		if (u != 8)
		{
			switch (d) //sostutuisco le decine
			{
			case 0: {break; }
			case 2: {cout << "venti"; break; }
			case 3: {cout << "trenta"; break; }
			case 4: {cout << "quaranta"; break; }
			case 5: {cout << "cinquanta"; break; }
			case 6: {cout << "sessanta"; break; }
			case 7: {cout << "settanta"; break; }
			case 8: {cout << "ottanta"; break; }
			case 9: {cout << "novanta"; break; }
			}
			if (d == 1) //sostutuisco le decine irregolari
			{
				if (d == 1 && u == 0)
				{
					cout << "dieci";
				}
				if (d == 1 && u == 1)
				{
					cout << "undici";
				}
				if (d == 1 && u == 2)
				{
					cout << "dodici";
				}
				if (d == 1 && u == 3)
				{
					cout << "tredici";
				}
				if (d == 1 && u == 4)
				{
					cout << "quattordici";
				}
				if (d == 1 && u == 5)
				{
					cout << "quindici";
				}
				if (d == 1 && u == 6)
				{
					cout << "sedici";
				}
				if (d == 1 && u == 7)
				{
					cout << "diciassette";
				}
				if (d == 1 && u == 8)
				{
					cout << "diciotto";
				}
				if (d == 1 && u == 9)
				{
					cout << "diciannove";
				}
			}
		}
		switch (u) //sostutuisco le unità
		{
			case 0: {break; }
			case 1: {cout << "uno"; break; }
			case 2: {cout << "due"; break; }
			case 3: {cout << "tre"; break; }
			case 4: {cout << "quattro"; break; }
			case 5: {cout << "cinque"; break; }
			case 6: {cout << "sei"; break; }
			case 7: {cout << "sette"; break; }
			case 8: {cout << "otto"; break; }
			case 9: {cout << "nove"; break; }
		}
	}
}
	//casi di test:input errato;numeri pari, dispari; utilizzando centinaia di migliaia,decine di migliaia,migliaia,centinaia,decine,unità