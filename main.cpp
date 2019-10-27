#include <iostream>
#include <vector>
#include "utils/getString.cpp"
#include "BitString.h"


using namespace std;

bool isValidIndex(int a, vector<BitString> storage) {
    return a < storage.size();
}

int main() {

    std::vector<BitString> storage;

    while(true) {
        cout << "1: Create new class" << endl;
        cout << "2: And" << endl;
        cout << "3: Or" << endl;
        cout << "4: Xor" << endl;
        cout << "5: Not" << endl;
        cout << "6: Get objects count" << endl;
        cout << "7: Show class list" << endl;
        cout << "8: +" << endl;
        cout << "9: -" << endl;
        cout << "0: Exit" << endl;
        int key;
        cout << "Your command: ";
        cin >> key;
        switch(key) {
            case 1: {
                cout << "Enter bit string: ";
                BitString str(getString());
                storage.push_back(str);
                break;
            }
            case 2: {
                cout << "Select numbers ";
                int a, b;
                cin >> a;
                cin >> b;

                if(!isValidIndex(a, storage) || !isValidIndex(b, storage)) {
                    break;
                }

                cout << "Your string is:" << endl;
                cout << (char*)(storage[a] & storage[b]) << endl;
                break;
            }
            case 3: {
                cout << "Select numbers ";
                int a, b;
                cin >> a;
                cin >> b;

                if(!isValidIndex(a, storage) || !isValidIndex(b, storage)) {
                    break;
                }

                cout << "Your string is:" << endl;
                cout << (char*)(storage[a] | storage[b]) << endl;
                break;
            }
            case 4: {
                cout << "Select numbers ";
                int a, b;
                cin >> a;
                cin >> b;

                if(!isValidIndex(a, storage) || !isValidIndex(b, storage)) {
                    break;
                }

                cout << "Your string is:" << endl;
                cout << (char*)(storage[a] ^ storage[b]) << endl;
                break;
            }
            case 5: {
                cout << "Select number ";
                int a;
                cin >> a;

                if(!isValidIndex(a, storage)){
                    break;
                }

                cout << "Your string is:" << endl;
                cout << (char*)~storage[a] << endl;
                break;
            }
            case 6: {
                cout << BitString::getCallCount() << endl;
                break;
            }
            case 7: {
                for(int i = 0; i < storage.size(); i++) {
                    cout << "String #" << i << ": " << storage[i].print()  << endl;
                }
                break;
            }
            case 8: {
                cout << "Select numbers ";
                int a, b;
                cin >> a;
                cin >> b;

                if(!isValidIndex(a, storage) || !isValidIndex(b, storage)) {
                    break;
                }

                cout << "Your string is:" << endl;
                cout << (char*)(storage[a] + storage[b]) << endl;
                break;
            }
            case 9: {
                cout << "Select numbers ";
                int a, b;
                cin >> a;
                cin >> b;

                if(!isValidIndex(a, storage) || !isValidIndex(b, storage)) {
                    break;
                }

                cout << "Your string is:" << endl;
                cout << (char*)(storage[a] - storage[b]) << endl;
                break;
            }
            case 0: {
                return 0;
            }
            default: {
                cout << "Wrong command" << endl;
            }
        }
    };
}