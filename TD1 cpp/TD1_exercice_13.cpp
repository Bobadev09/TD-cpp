#include <iostream>
#include <cstdlib>
#include <random>
#include <ctime>

using namespace std;

int trowdice() {
    int nombre_aleatoire = rand() % 6 + 1;
    return nombre_aleatoire;
}

int playerTurn() {
    int nombre_dee = 0;
    bool not_correct_answer = true;

    cout << "Veillez entre le nombre de dee que vous voullez lance (1 ou 2): ";
    cin >> nombre_dee;

    do {
        if (nombre_dee == 1 || nombre_dee == 2) {
            not_correct_answer = false;
            if (nombre_dee == 1) {
                int resultat = trowdice();
                cout << "Resultat du lance de dee : " << resultat << endl;
                return resultat;
            } else {
                int resultat_dee_1 = trowdice();
                int resultat_dee_2 = trowdice();
                cout << "Resultat du lance du premier dee : " << resultat_dee_1 << endl;
                cout << "Resultat du lance du deuxieme dee : " << resultat_dee_2 << endl;
                if (resultat_dee_1 == resultat_dee_2) {
                    return -resultat_dee_1 * 2;
                } else {
                    return resultat_dee_1 + resultat_dee_2;
                }
            }
        } else {
            cout << "vous aves entre une reponse invalide !" << endl;
            cout << "Veillez entre le nombre de dee que vous voullez lance (1 ou 2): ";
            cin >> nombre_dee;
        }
    } while (not_correct_answer);
}

void afficher_score(int score_user_1, int score_user_2) {
    cout << "SCORE " << endl;
    cout << "score du joueur 1 : " << score_user_1 << endl;
    cout << "score du joueur 2 : " << score_user_2 << endl;
}

int main() {
    srand(time(nullptr));
    int score_user_1 = 0;
    int score_user_2 = 0;
    bool user_1_turn = true;
    bool game_running = true;

    while (game_running) {
        if (user_1_turn) {
            cout << "Tour du joueur 1 " << endl;
            score_user_1 += playerTurn();
            afficher_score(score_user_1, score_user_2);
            user_1_turn = false;
        } else {
            cout << "Tour du joueur 2 " << endl;
            score_user_2 += playerTurn();
            afficher_score(score_user_1, score_user_2);
            user_1_turn = true;
        }

        if ((score_user_1 >= 30 || score_user_2 >= 30) && user_1_turn) {
            break;
        }
    }

    cout << "GAME OVER " << endl;

    if (score_user_1 > score_user_2 && score_user_2 < 30) {
        cout << "VICTOIRE du joueur 1 " << endl;
        afficher_score(score_user_1, score_user_2);
    } else if (score_user_1 < score_user_2 && score_user_1 < 30) {
        cout << "VICTOIRE du joueur 2 " << endl;
        afficher_score(score_user_1, score_user_2);
    } else {
        cout << "MATCH NULL" << endl;
        afficher_score(score_user_1, score_user_2);
    }

    return 0;
}
