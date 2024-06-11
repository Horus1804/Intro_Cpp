# include <iostream>
# define NOMINAX
# include <Windows.h> 

using namespace std;

// Demandez � l'utilisateur ses infos personelles (Nom, Pr�nom, Classe)
void GetUserInfos(string& ln, string& fn, string& cn) {
	cout << "Entrez votre nom : ";
	cin >> ln;
	cout << "Entrez votre prenom : ";
	cin >> fn;
	cout << "Entrez votre classe : ";
	cin >> cn;
}

// Demandez � l'utilisateur d'entrer les diff�rentes notes
float GetNotes(int Nbr_Notes, float* notes) {

	cout << "Entrez vos " << Nbr_Notes << " notes  :" << endl<<endl;
	for (int i = 0; i < Nbr_Notes; i++)
	{
		cout << "Entrez note " << (i + 1) << " : "<< endl;
		cin >> notes[i];
	}

	// Calculez la moyenne des notes
	float somme = 0;
	for (int i = 0; i < Nbr_Notes; i++)
	{
		somme += notes[i];
	}
	return somme / Nbr_Notes;

	}

int main()
{
	//Permet d'afficher les accents
	SetConsoleOutputCP(1252);

	//Initialise les variables UserInfos et lance la fonction de r�cup�ration
	string fn, ln, cn;
	GetUserInfos(ln, fn, cn);
	system("cls");

	// Demandez � l'utilisateur le nombre de notes qu'il poss�de 
	int Nbr_Notes;
	cout << "Combien de notes avez vous ?" << endl;
	cin >> Nbr_Notes;
	float* notes = new float[Nbr_Notes];
	system("cls");
	
	// Afficher la moyenne de l'�l�ve en r�cup�rant les notes
	cout << " La moyenne de l'�l�ve "<< ln << " " << fn <<  " de la classe " << cn << " est de " << GetNotes(Nbr_Notes, notes) << endl;
	return 0;
}