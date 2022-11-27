#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;

int main() {
	RenderWindow window(VideoMode(1200, 900), "ALEX");
	Texture God;
	God.loadFromFile("god-of-war-ragnarok.jpg");
	Sprite god1;
	god1.setTexture(God);

	Texture fin;
	fin.loadFromFile("final.png");
	Sprite final;
	final.setTexture(fin);


	Texture paz;
	paz.loadFromFile("paz.jpg");
	Sprite paz1;
	paz1.setTexture(paz);
	
	Texture enemy;
	enemy.loadFromFile("erlik.jpg");
	Sprite erlik;
	erlik.setTexture(enemy);

	Texture razon;
	razon.loadFromFile("razon.jpg");
	Sprite razonar;
	razonar.setTexture(razon);

	Music music;
	music.openFromFile("Beargow.ogg");
	music.setVolume(50);
	music.play();
	
	bool correr = false;

	while (!correr) {

		int n;
		system("cls");
		window.clear();
		window.draw(god1);
		window.display();
		cout << " BIENVENIDO " << endl;
		cout << " EMPEZAR HISTORIA? [1] " << endl;
		cout << " SALIR [2]" << endl;
		cin >> n;

		switch (n) {

			int m;

		case 1:

			cout << " ------ LA HISTORIA DESPUES DE GOD OF WAR 3 ------ " << endl;
			cout << " Despues de haber tenido que morir a causa de la espada del olimpo que el mismo empuno," << endl;
			cout << " kratos desperto para volver a decirle no a la muerte y en ese momento entendio que siempre vivira con " << endl;
			cout << " cada maldicion que le han dado en su odisea. Asi que decidio irse de su tierra natal" << endl;
			cout << " ya que Grecia quedo completamente devastada ante lo sucedido en hace unas horas atras." << endl;
			cout << " Asi que solo decidio seguir su camino a ver a donde lo llevaba su camino " << endl;
			cout << " y tambien salio de sus tierra para buscar " << endl;
			cout << "\n";
			cout << " Salio a buscar paz [1]" << endl;
			cout << " Salio a buscar mas dioses para matarlos [2]" << endl;
			window.clear();
			window.draw(final);
			window.display();
			cin >> m;

			switch (m) {

				int x;

			case 1:

				

				cout << " Buscar paz [1]" << endl;
				cout << " Pero para eso tuvo que dejar atras todo su pasado y empezar de nuevo como cualquier persona " << endl;
				cout << " y olvidar que alguna vez fue el temido fantasma de esparta o lo que nunca quizo ser el DIOS DE LA GUERRA. " << endl;
				cout << "\n\n";
				cout << " Pero el destino le tenia una jugada en donde kratos tendra que seguir siendo el fantasma de esparta un rato mas, " << endl;
				cout << " ya que en las tierras donde se encontraba tambien existia el oraculo que lo pudo identificar y le advirtio " << endl;
				cout << " acerca de lo que se aproximaba, pero el estaba harto de todo lo que el destino le jugaba en su contra para" << endl;
				cout << " poder tener esa paz que tanto ansiaba. Pero realmente" << endl;
				cout << " \n";
				cout << " Acepto su destino [1] " << endl;
				cout << " Irse en la completa soledad [2] " << endl;
				window.clear();
				window.draw(paz1);
				window.display();
				cin >> x;



				switch (x) {

					int a;

				case 1:

					

					cout << " Acepta su destino " << endl;
					cout << " Finalmente llega el dia pero kratos no sabia cuando iba a llegar ese suceso, hasta que empezo a escucha " << endl;
					cout << " gritos de desesperacion asi que fue corriendo a ver que ocurria y a lo lejos vio un hombre que destruia " << endl;
					cout << " todo a su paso, y en eso momento aparecio el oraculo a advertirle que eso hombre en realidad era un dios " << endl;
					cout << " llamado principalmente por los mongoles como ERLIK Dios del inframundo." << endl;
					cout << "\n";
					cout << " Antes de que empezara alguna pelea entre kratos y erlik decidio " << endl;
					cout << " \n Razonar y ver motivaciones del dios (1)" << endl;
					cout << " Matar a Erlik sin que se diera cuanta de que kratos se aproximara (2) " << endl;
					window.clear();
					window.draw(erlik);
					window.display();
					cin >> a;

					switch (a) {

					case 1:


						cout << " Decide razon pero Erlik pero a este no le gusta hablar solo hace lo que se le plasca y golpea a kratos. " << endl;
						cout << " La pelea empieza y fue demasiado violenta, pero casi por concluir la pelea y kratos estaba a punto de perder  " << endl;
						cout << " una misteriosa mujer se aparece de entre las sombras a ayudarlo. En ese momento siguieron peleando hasta juntos  " << endl;
						cout << " hasta finalmente terminar la pelea." << "\n";
						cout << " Pero el fantasma de esparta en los ultimos momentos de la pelea sintio una tranquilidad junto a esa misteriosa " << "\n";
						cout << " que decio acompanarla, pero lo que kratos no sabe es que ella guarda un secreto que que lo llevara a un reino de " << "\n";
						cout << " dioses completamente distinto a los que el a visto y ese reino es el NORDICO y de hay es de donde esa mujer proviene. " << "\n ";
						window.clear();
						window.draw(razonar);
						window.display();
						system("pause");

						break;

					case 2:

						RenderWindow window(VideoMode(1000, 800), "ALEX");
						Texture Ira;
						Ira.loadFromFile("Ira.jpg");
						Sprite ira1;
						ira1.setTexture(Ira);

						cout << " Mientras katros asesinaba a este nuevo dios aparece una mujer misteriosa para controlar su ira y " << endl;
						cout << " despues de todo eso se va a rondar por el mundo"  << endl;
						system("pause");
					}
					break;
				case 2:

					cout << " Se aparto de todos " << endl;
					system("pause");

					break;
				default:
					cout << " Opcion no valida" << endl;
					cout << " Prueba de nuevo" << endl;
					system("pause");
				}
				break;



			case 2:

				do {


					int n;
					cout << " SEGUIR MATANDO DIOSES [2]" << endl;
					cout << " Nunca se arrepintio de lo que alguna vez hizo y siempre quizo ver el fin de todo sin mirar " << endl;
					cout << " atras y su humanidad " << endl;
					cout << "\n";
					cout << " reiniciar (1)" << endl;
					cout << " salir (2)" << endl;
					cin >> n;
					if (n == 1) {
						system("cls");
						cout << "reiniciar [1]" << endl;
					}
					else {
						cout << "salir [2]" << endl;
						exit(EXIT_SUCCESS);
					}


				} while (n != 1);


				break;
			default:
				cout << " Opcion no valida" << endl;
				cout << " Prueba de nuevo" << endl;

			}
			break;

		case 2:
			cout << " CONTINUARA EN LAS TIERRAS NORDICAS " << endl;
			exit(EXIT_SUCCESS);
			break;

		default:
			cout << " OPCION NO EXISTENTE " << endl;


		}

	}



}