//Dialog of the first example is given below.
//include
/*
Fahsai: Sawadee ka...Can you tell me your name?
?????: Luke Skywalker
Fahsai: Wow!!! Luke Skywalker is a really cool name.
Fahsai: I think you are an Engineering student. What is your student ID?
Luke Skywalker: 590610999
Fahsai: I think you may be GEAR 47. I have a free movie ticket for you.
Fahsai: Let's go to the cinema together!!!
Fahsai: What movie do you want to watch?
Luke Skywalker: Star Wars VII
Fahsai: So....which day are you free to go with me?
Luke Skywalker: Next Monday
Fahsai: Next Monday....that is OK!!! I'm looking forward to watching Star Wars VII with you.
Luke Skywalker: May the Force be with you krub
Fahsai: 555+ see you Next Monday. Bye Bye \(^ ^)/
*/
#include <iostream>
using namespace std;
#include <string>
int main(){
    string name,movie,date,quote;
    int id,gear;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?" <<endl;
    cout << "?????: ";
    getline(cin,name);
    cout << "Fahsai: Wow!!! " << name << " is a really cool name." <<endl;
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?" <<endl;
    cout << name << ": ";
    cin >> id;
    cin.ignore();
    id=id/10000000;
    gear = id-12;
    cout << "Fahsai: I think you may be GEAR "<<gear<<". I have a free movie ticket for you."<<endl;
    cout << "Fahsai: Let's go to the cinema together!!!"<<endl;
    cout << "Fahsai: What movie do you want to watch?"<<endl;
    cout << name << ": ";
    getline(cin,movie);
    cout << "Fahsai: So....which day are you free to go with me?"<<endl;
    cout << name << ": ";
    getline(cin,date);
    cout << "Fahsai: "<<date<<"....that is OK!!! I'm looking forward to watching "<<movie<<" with you."<<endl;
    cout << name << ": ";
    getline(cin,quote);
    cout << "Fahsai: 555+ see you "<<date<<". Bye Bye \(^ ^)/"<<endl;
}