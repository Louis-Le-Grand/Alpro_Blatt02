// Zur Blatt 02 Aufgabe 03

#include <cmath>
#include <iostream>
#include <string>
#include <vector>

// Druckt einen Text aus
void drucke_text(const std::string& text);

// Druckt eine Ganzzahl aus
void drucke_ganzzahl(int ganzzahl);

// Druckt eine Kommazahl aus
void drucke_kommazahl(double gleitkommazahl);

// Liest ein Wort von der Konsole ein
std::string lies_wort();

// Liest eine Ganzzahl von der Konsole ein
int lies_ganzzahl();

// Liest eine Gleitkommazahl von der Konsole ein
double lies_gleitkommazahl();


void ablauf_diagram_1(){
    std::cout << "Ablauf Diagram 1 (Quadrieren)" << std::endl;
    std::cout << "Bitte geben Sie eine Zahl(double) ein: " << std::endl;
    double x = lies_gleitkommazahl();
    x = x * x;
    drucke_kommazahl(x);
}

void ablauf_diagram_2(){
  std::cout << "Ablauf Diagram 2 (Parität)" << std::endl;
  std::cout << "Bitte geben Sie eine Zahl(int) ein: " << std::endl;
  int x = lies_ganzzahl();
  if (x < 0){
      std::range_error("negative Zahl");
  }
    while (1){
        if (x < 1 or x == 1){
            drucke_ganzzahl(x);
            break;
        }
        x = x - 2;
    }
}

void programm_1() {
    std::cout << "Programm 1 (+17, *3, mod 2)" << std::endl;
    std::cout << "Bitte geben Sie eine Zahl(int) ein: " << std::endl;
    int x = lies_ganzzahl();
    int y = x;
    y = y + 17;
    y = y * 3;
    y = y % 2;
    drucke_ganzzahl(y);
}


void programm_2() {
  std::string text = "Das Modul Algorithmen und Programmierung ist so konzipert, dass die Konzepte und Methodiken\
der objektorientierten Programmierung im Vordergrund stehen. Die hier vorgestellte\
Programmiersprache C++ nimmt die Rolle einer Beispielprogrammiersprache ein, in der die\
diskutierten Konzepte (meist mehr, selten weniger) nachvollziehbar und effizient umgesetzt\
sind. Das Modul soll so verstanden werden, dass es den Teilnehmer:innen im Anschluss an\
dieses Modul leicht fällt andere, objektorientierte Programmiersprachen zu erlernen. Hier soll\
man sich nur noch die Frage stellen: Wie setzten andere Programmiersprachen die wesentlichen\
Konzepte um und was gibt es bei der Sprachsyntax zu beachten?";
  std::cout << "Programm 2 (zählt '.!?')" << std::endl;
  int i = 0;
  int s = 0;
    while (i < text.length()){
        if (text[i] == '.' or text[i] == '!' or text[i] == '?'){
            s = s + 1;
        }
        i = i + 1;
    }
    drucke_ganzzahl(s);
}


void programm_3() {
    std::cout << "Programm 3 (Summe)" << std::endl;
    std::vector<int> zahlen = {42, 69, 420, 99, -444, 9014};
    int i = 0;
    int s = 0;
    while (i < zahlen.size()){
        s = s + zahlen[i];
        i = i + 1;
    }
    drucke_ganzzahl(s);
}


void programm_4() {
    std::cout << "Programm 4(^218 Overflow machine)" << std::endl;
    std::cout << "Bitte geben Sie eine Zahl ein: " << std::endl;
    int x = lies_ganzzahl();
    long double t = x;
    t = t*t;
    t = x*t;
    t = t*t;
    t = t*t;
    t = x*t;
    t = t*t;
    t = x*t;
    t = t*t;
    t = t*t;
    t = x*t;
    t = t*t;
    drucke_kommazahl(t);
}


int main() {
  /*ablauf_diagram_1();
  ablauf_diagram_2();
  programm_1();
  programm_2();
  programm_3();*/
  programm_4();
}


/************************************/
/*                                  */
/*   MAGIE   MAGIE   MAGIE  MAGIE   */
/*                                  */
/************************************/

void drucke_text(const std::string& text) {
  std::cout << text << std::endl;
}

void drucke_ganzzahl(int ganzzahl) {
  std::cout << std::to_string(ganzzahl) << std::endl;
}

void drucke_kommazahl(double gleitkommazahl) {
  std::cout << std::to_string(gleitkommazahl) << std::endl;
}

std::string lies_wort() {
  std::string wort;
  std::cin >> wort;
  return wort;
}

int lies_ganzzahl() {
  std::string wort;
  std::cin >> wort;
  int ganzzahl = 0;
  try {
    ganzzahl = std::stoi(wort);
  } catch (const std::invalid_argument& e) {
    ganzzahl = -1000;
  }
  return ganzzahl;
}

double lies_gleitkommazahl() {
  std::string wort;
  std::cin >> wort;
  double lies_gleitkommazahl = 0.0;
  try {
    lies_gleitkommazahl = std::stod(wort);
  } catch (const std::invalid_argument& e) {
    lies_gleitkommazahl = NAN; // See https://en.cppreference.com/w/cpp/numeric/math/NAN
  }
  return lies_gleitkommazahl;
}
