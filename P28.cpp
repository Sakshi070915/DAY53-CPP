#include <iostream>
#include <fstream> // For file handling
#include <string>

using namespace std;

int main() {
    string fileName;
    fstream file;

    // a) Create a text file and b) Naming
    cout << "Enter the name of the file (with .txt extension): ";
    cin >> fileName;

    // Open the file in write mode to create it
    file.open(fileName, ios::out);

    // c) Error Checking
    if (!file) {
        cerr << "Error creating the file!" << endl;
        return 1;
    }

    cout << "File created successfully!" << endl;
    file.close();

    // d) Writing to the file
    file.open(fileName, ios::out); // Open in write mode
    if (!file) {
        cerr << "Error opening the file for writing!" << endl;
        return 1;
    }

    cout << "Write some text to the file: ";
    cin.ignore(); // Clear the input buffer
    string content;
    getline(cin, content);
    file << content << endl; // Write to the file
    file.close();
    cout << "Text written to the file successfully!" << endl;

    // e) Read from the file
    file.open(fileName, ios::in); // Open in read mode
    if (!file) {
        cerr << "Error opening the file for reading!" << endl;
        return 1;
    }

    cout << "\nReading the contents of the file:" << endl;
    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();

    // f) Append to the file
    file.open(fileName, ios::app); // Open in append mode
    if (!file) {
        cerr << "Error opening the file for appending!" << endl;
        return 1;
    }

    cout << "\nWrite some text to append to the file: ";
    getline(cin, content);
    file << content << endl; // Append to the file
    file.close();
    cout << "Text appended to the file successfully!" << endl;

    // Display final content of the file
    file.open(fileName, ios::in);
    cout << "\nFinal content of the file:" << endl;
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();

    return 0;
}
