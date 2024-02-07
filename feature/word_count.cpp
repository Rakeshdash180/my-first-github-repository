#include<iostream>
#include<fstream>

using namespace std;

int total_word(char * filename){
    string word;
    int totalWords = 0;
    fstream file;
    file.open(filename, ios::in);

    if(file.is_open() == false){
        cout << "Unable to open the file " << endl;
    }

    else{
        while(file >> word){
           totalWords += 1;
        }

        file.close();

    }

  return totalWords;
}

int main(int argc, char ** argv){

    cout << total_word(argv[1]) << endl;



    return 0;
}