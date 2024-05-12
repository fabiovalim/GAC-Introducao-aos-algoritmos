#include <iostream>
#include <fstream>

using namespace std;

string correction(string word, char charDefect, char letter) {
    int cont = 0;
    string correctWord;

    for(int i=0; word[i]; i++){
        cont++;
    }

    for(int i=0; i<cont; i++){
        if(word[i]==charDefect){
            word[i]=letter;
        }
    }

    correctWord = word;

    return correctWord;
}

int main() {
    char letter, charDefect;
    int num;
    string word;
    ofstream arquivo("dados.txt");
    ifstream leitura("dados.txt");

    cin >> letter;
    cin >> charDefect;
    cin >> num;
  
    for(int i=0; i<num; i++){
        cin >> word;
        arquivo << word << endl;
    }

    for(int i=0; i<num; i++){
        leitura >> word;
        cout << correction(word, charDefect, letter) << endl;
    }

    return 0;
}