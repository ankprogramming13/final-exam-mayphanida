#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    int cmd;
        ofstream writefile ("std.txt", ofstream::app);
        ofstream myfile ("std.txt");
        ifstream readfile ("std.txt");
        string line;
        string name;

        cin >> cmd;
        if (cmd== 1) {
            cin >> name;
            if (writefile.is_open()) {
                writefile << name << endl;
                writefile.close ();
            } else {
                cout << "Unable to open file";
                }
            } else if (cmd == 2) {
                if (readfile.is_open()) {
                    while (getline(readfile,line)) {
                        cout << line << '\n';
                    }
                    readfile.close();
                }

            } else if (cmd == 3) {

            } else if (cmd == 5) {
                 if (myfile.is_open()) {}

            }

        return 0;
}
