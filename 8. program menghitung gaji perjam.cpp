#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int jam,hasil;

  std::cout << "menghitung agji perjam" << '\n';
  std::cout << "masukan jumlah jam :";
  std::cin >> jam;
  hasil=jam*5000;
  std::cout << "jumlah upah :"<<hasil << '\n';
  return 0;
}
