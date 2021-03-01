#include<iostream>
#include<string>
#include<cstdlib>
#include<time.h>
using namespace std;

    const int MaxGuess = 7;
    const string Word_list[ ] = {"angle", "ant", "apple", "arch", "arm", "army",
        "baby", "bag", "ball", "band", "basin", "basket", "bath", "bed", "bee", "bell", "berry",
        "bird", "blade", "board", "boat", "bone", "book", "boot", "bottle", "box", "boy",
        "brain", "brake", "branch", "brick", "bridge", "brush", "bucket", "bulb", "button",
        "cake", "camera", "card",  "cart", "carriage", "cat", "chain", "cheese", "chest",
        "chin", "church", "circle", "clock", "cloud", "coat", "collar", "comb", "cord",
        "cow", "cup", "curtain", "cushion",
        "dog", "door", "drain", "drawer", "dress", "drop", "ear", "egg", "engine", "eye",
        "face", "farm", "feather", "finger", "fish", "flag", "floor", "fly",
        "foot", "fork", "fowl", "frame", "garden", "girl", "glove", "goat", "gun",
        "hair", "hammer", "hand", "hat", "head", "heart", "hook", "horn", "horse",
        "hospital", "house", "island", "jewel",  "kettle", "key", "knee", "knife", "knot",
        "leaf", "leg", "library", "line", "lip", "lock",
        "map", "match", "monkey", "moon", "mouth", "muscle",
        "nail", "neck", "needle", "nerve", "net", "nose", "nut",
        "office", "orange", "oven", "parcel", "pen", "pencil", "picture", "pig", "pin",
        "pipe", "plane", "plate", "plow", "pocket", "pot", "potato", "prison", "pump",
        "rail", "rat", "receipt", "ring", "rod", "roof", "root",
        "sail", "school", "scissors", "screw", "seed", "sheep", "shelf", "ship", "shirt",
        "shoe", "skin", "skirt", "snake", "sock", "spade", "sponge", "spoon", "spring",
        "square", "stamp", "star", "station", "stem", "stick", "stocking", "stomach",
        "store", "street", "sun", "table", "tail", "thread", "throat", "thumb", "ticket",
        "toe", "tongue", "tooth", "town", "train", "tray", "tree", "trousers", "umbrella",
        "wall", "watch", "wheel", "whip", "whistle", "window", "wire", "wing", "worm",
};
    const int Word_Count = sizeof(Word_list) / sizeof(string);
    const string Figure[] = {
         "   -------------    \n"
         "   |                \n"
         "   |                \n"
         "   |                \n"
         "   |                \n"
         "   |     \n"
         " -----   \n",
         "   -------------    \n"
         "   |           |    \n"
         "   |                \n"
         "   |                \n"
         "   |                \n"
         "   |     \n"
         " -----   \n",

         "   -------------    \n"
         "   |           |    \n"
         "   |           O    \n"
         "   |                \n"
         "   |                \n"
         "   |     \n"
         " -----   \n",

           "   -------------    \n"
         "   |           |    \n"
         "   |           O    \n"
         "   |           |    \n"
         "   |                \n"
         "   |     \n"
         " -----   \n",

         "   -------------    \n"
         "   |           |    \n"
         "   |           O    \n"
         "   |          /|    \n"
         "   |                \n"
         "   |     \n"
         " -----   \n",

         "   -------------    \n"
         "   |           |    \n"
         "   |           O    \n"
         "   |          /|\\ \n"
         "   |                \n"
         "   |     \n"
         " -----   \n",

          "   -------------    \n"
         "   |           |    \n"
         "   |           O    \n"
         "   |          /|\\  \n"
         "   |          /     \n"
         "   |     \n"
         " -----   \n",

         "   -------------    \n"
         "   |           |    \n"
         "   |           O    \n"
         "   |          /|\\  \n"
         "   |          / \\ \n"
         "   |     \n"
         " -----   \n",

         };
    string chooseWord(){
        int randomIndex = rand() %Word_Count;
    return Word_list[randomIndex];
}

    void renderGame(string guessedWord, int badGuessCount){
        cout << Figure[badGuessCount];
        cout << guessedWord << endl;
        cout << "Bad Guess Count :" << badGuessCount << endl;
    }

    char readAGuess() {
    char ch;
    cout << "Enter your Guess : ";
    cin >> ch;
    return ch;
    }

    string update(string guessedWord, char guess, string secretWord){
        for(int i =0; i< guessedWord.length();i++){
            if(secretWord[i] == guess){
                guessedWord[i] = guess;
            }
        }
        return guessedWord;
    }

    bool contain(string word, char c){
        return word.find_first_of(c) != string::npos;
    }

    void displayResult(int badGuessCount, string secretWord){
    if(badGuessCount == MaxGuess){
        cout << Figure[badGuessCount];
        cout << "   GAME OVER!!!     " << endl;
        cout << "The correct word is : " <<secretWord;}
    else cout << "      CONGRATULATION!!!" << endl << "         YOU WIN!!!" << endl;
    }


int main(){
    srand(time(0));
    string  secretWord = chooseWord();
    string guessedWord = string(secretWord.length(), '-');
    int badGuessCount = 0;

    do{
        renderGame(guessedWord, badGuessCount);
        char guess = readAGuess();

        if(contain(secretWord, guess)){
            guessedWord = update(guessedWord, guess, secretWord);
        } else badGuessCount++;

    } while(badGuessCount <MaxGuess && secretWord != guessedWord);

    displayResult(badGuessCount, secretWord);
}
