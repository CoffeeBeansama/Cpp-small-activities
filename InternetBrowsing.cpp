#include<iostream>
#include<string>
#include<map>
using namespace std;


int main()
{
    string userName;
    string password;

    map<string,string>InternetSites = {
        {"Youtube", "Watching videos"},
        {"Twitter", "Uploading selfies"},
        {"Amazon"," Purchasing items"},
        {"Spotify","Listening music"},
        {"Facebook","Chatting friends"}

    };

    bool running = true;

    while(running == true){
        
    
        bool userConfirmed = false;
    
        string confirmation;

        while(!userConfirmed){
            cout << "Enter username: " , cin >> userName;
            cout << "Enter password: " , cin >> password;

            bool Filled = !userName.empty() && !password.empty();

            if(Filled){
                cout << "<=========================>" << endl;
                cout << "Username used: " << userName << endl;
                cout << "Password used: " << password << endl;
                cout << "All data correct? (Y/N) " , cin >> confirmation;

                if(confirmation == "Y" || confirmation == "y"){
                    userConfirmed = true;
                };
                
            };

        };

        cout << "Welcome to the Internet: " << userName << endl;
        
       

        

        running = false;
    };
    
    cout << "program terminated!" << endl;
    

    return 0;
}