#include <iostream>

using namespace std;

float fahrenheit_to_celsius(float temp) {
  return ((temp - 32.0) * 5.0) / 9.0;
}

void test_the_function(float temp) {
  cout << "Fahrenheit " << temp << " corresponds to " <<
    fahrenheit_to_celsius(temp) << " Centigrade" << endl;
}

int main(void) {
  test_the_function(32.0);
  test_the_function(212.0);
  test_the_function(451.0);
  return 0;
}