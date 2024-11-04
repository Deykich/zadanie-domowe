#include <iostream>
#include <string> // Do użycia typu string
 
// Klasa Student - przechowuje dane ucznia, takie jak imię i wiek
class Student {
private:
// Prywatne pola - dostępne tylko wewnątrz klasy
std::string name; // Imię ucznia
int age; // Wiek ucznia
 
public:
// Konstruktor - służy do tworzenia obiektu klasy Student
Student(std::string studentName, int studentAge) {
name = studentName; // Ustawiamy imię
age = studentAge; // Ustawiamy wiek
}
 
// Getter dla pola name - zwraca imię ucznia
std::string getName() const {
return name; // Zwraca imię
}
 
// Setter dla pola name - ustawia nowe imię ucznia
void setName(const std::string& newName) {
name = newName; // Ustawia nowe imię
}
 
// Getter dla pola age - zwraca wiek ucznia
int getAge() const {
return age; // Zwraca wiek
}
 
// Setter dla pola age - zmienia wiek ucznia
void setAge(int newAge) {
// Sprawdzamy, czy podany wiek jest większy od zera
if (newAge > 0) {
age = newAge; // Ustawia nowy wiek, jeśli jest poprawny
} else {
std::cout << "Wiek musi być większy od zera!" << std::endl; // Komunikat o błędzie
}
}
};
 
int main() {
// Tworzymy obiekt klasy Student
Student student1("Jan Kowalski", 18);
 
// Wyświetlamy dane ucznia
std::cout << "Imię: " << student1.getName() << std::endl;
std::cout << "Wiek: " << student1.getAge() << std::endl;
 
// Zmieniamy dane ucznia
student1.setName("Anna Nowak");
student1.setAge(20);
 
// Wyświetlamy zaktualizowane dane ucznia
std::cout << "Nowe imię: " << student1.getName() << std::endl;
std::cout << "Nowy wiek: " << student1.getAge() << std::endl;
 
return 0;
}