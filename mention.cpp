
# include <iostream>;


using namespace std;

int main()
{
	int moyenne;

	cout << "Saisir moyenne : ";

	cin >> moyenne;

	if (moyenne<=20 && moyenne>=16) {
		cout<<"Très bien"<<endl;
	}
	else if (moyenne<16 && moyenne>=14) {
		cout<<"bien"<<endl;
	}
	else if (moyenne<14 && moyenne>=12) {
		cout<<"Assez bien"<<endl;
	}
	else if (moyenne<12 && moyenne >=10){
		cout<<"Passable"<<endl;
	}
	else if (moyenne<10 && moyenne>=8){
		cout<<"Rattrapage"<<endl;
	}
	else if (moyenne <8 && moyenne>=0){
		cout<<"Recalé"<<endl;
	}
	else {
		cout<<"Moyenne entre O-20"<<endl;
	}
	return main();
}





