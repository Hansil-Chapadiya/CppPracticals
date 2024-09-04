#include<iostream>
using namespace std;
int occ[2][26];
class Frequency {
  private:
    char ct[350];
    int  i, j, temp;
  public:
      void get() {
      cout << "Enter Ciphertext in UPPER case: ";
      cin >> ct;
    }
  void fqcount() {
    for (i = 0; ct[i] != '\0'; i++) {
      if (ct[i] >= 'A' && ct[i] <= 'Z')
        occ[0][ct[i] - 'A']++;
    }
    for (i = 0; i < 26; i++)
      occ[1][i] = i + 65;

    for (i = 0; i < 25; i++) {
      for (j = i + 1; j < 26; j++) {
        if (occ[0][i] < occ[0][j]) {
          temp = occ[0][i];
          occ[0][i] = occ[0][j];
          occ[0][j] = temp;

          temp = occ[1][i];
          occ[1][i] = occ[1][j];
          occ[1][j] = temp;
        }
      }
    }
  }
  void put() {
    cout<<"\n************************Stastical Attack**********************************\n";
    cout << "\nFrequency Table In Descending order:"<<endl;
    for (i = 0; i < 26; i++) {
      char c = occ[1][i];
      cout <<"|"<< c << " : " << occ[0][i]<<" | "<<endl;
    }
  }
};
int main() {
  Frequency f1;
  f1.get();
  f1.fqcount();
  f1.put();
}
