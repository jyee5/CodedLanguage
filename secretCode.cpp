#include <iostream>
#include <string>

using namespace std;

int main(){
    string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ ";
    string key = "XZLNWEBGJHQDYVTKFUOMPCIASRxzlnwebgjhqdyvtkfuompciasr ";
    string decryptedPhrase;
    string encryptedPhrase;
    int placeHolder;
    cout<< "Please enter what you want to say: ";
    getline(cin,decryptedPhrase);

    for(int i = 0;i<decryptedPhrase.size();i++)
    {   
        placeHolder = alphabet.find(decryptedPhrase[i]);
        if(placeHolder != string::npos)   
            encryptedPhrase.push_back(key.at(placeHolder));
        else 
            encryptedPhrase.push_back(decryptedPhrase[i]);
            
    }
    cout<<"Encrypting Code ...."<<endl<<endl;
    cout<<"Encrypted Message: "<<encryptedPhrase<<endl<<endl;
    cout<<"Decrypting Code ...."<<endl<<endl;
    cout<<"Decrypted Message: "<<decryptedPhrase<<endl<<endl;
   
    return 0;
}