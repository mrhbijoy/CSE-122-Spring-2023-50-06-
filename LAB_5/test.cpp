#include <iostream>
using namespace std;
class RationalNumber {
 private:
  int numerator, denominator;

 public:
  RationalNumber(int numerator = 0, int denominator = 1)
      : numerator(numerator), denominator(denominator) {}

  friend RationalNumber operator+(const RationalNumber& a,
     const RationalNumber& b) {
    return RationalNumber(a.numerator * b.denominator + b.numerator * a.denominator,
 a.denominator * b.denominator);
  }

  friend ostream& operator<<(ostream& stream,
                                  const RationalNumber& r) {
    stream << r.numerator << "/" << r.denominator;
    return stream;
  }

  friend istream& operator>>(istream& stream,
                                  RationalNumber& r) {
    stream >> r.numerator >> r.denominator;
    return stream;
  }
};

int main() {
  RationalNumber a, b;

    cout << "Enter two rational numbers (a/b): ";
    cin >> a >> b;

  RationalNumber result = a + b;
   cout << a << " + " << b << " = " << result << endl;

  return 0;
}

/*
Soulution approach:
First I have to create a class named RationalNumber. Then I have to create a private data member named numerator and denominator. Then I have to create a constructor named RationalNumber. Then I have to create a friend function named operator+ to add two rational numbers. Then I have to create a friend function named operator<< to print the result. Then I have to create a friend function named operator>> to take input from the user. Then I have to create a main function. Then I have to create two objects named a and b. Then I have to print the message on the screen. Then I have to take input from the user. Then I have to create an object named result to add two rational numbers. Then I have to print the result. Then I have to return 0.
*/