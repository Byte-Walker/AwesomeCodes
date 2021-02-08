//By Md Shahidul Islam aka The ByteWalker

#include<iostream>
using namespace std;

class QuantumBirthday{
    string CodeName = "MountAstro";

public:
    void wish(){
        cout<<"***************************************************************************"<<endl;
        cout<<"|                                                                         |"<<endl;
        cout<<"| I hope your special day will bring you lots of happiness, love and fun. |"<<endl;
        cout<<"|                                                                         |"<<endl;
        cout<<"|                         You deserve them a lot.                         |"<<endl;
        cout<<"|                                                                         |"<<endl;
        cout<<"|               !!!!! "<<"Happy birthday the "<<CodeName<<" !!!!!                 |"<<endl;
        cout<<"|                                                                         |"<<endl;
        cout<<"***************************************************************************\n"<<endl;
    }

    void Legengary_Agreement(){
        string response;
    try_again:
        cout<<"Do you agree to give us your birthday treat? (yes or no) ";
        cin>>response;

        if(response == "Yes"|| response == "yes"){
            system("cls");
            wish();
            cout<<" That's cool man! We are so proud of you!"<<endl<<endl;
            cout<<" Now listen carefully. You have to do one more thing."<<endl<<endl;
            cout<<" I will take you to my boss's profile."<<endl<<endl;
            cout<<" All you have to do is just to tell him ";
            cout<<" when you are gonna give us the treat!"<<endl<<endl;
            cout<<" And don't forget to come back here after you are done."<<endl<<endl;
        try_again_message :
            cout<<" Are you ready to do the legendary thing?(Yes or no) ";

            cin>>response;

            if(response=="yes" || response=="Yes"){
                cout<<" Great! Let's go then..."<<endl<<endl;
            try_again_confirm : 
                system("start https://www.facebook.com/profile.php?id=100008215602384");
                cout<<" Have you done it? ";
                cin>>response;
                if(response=="yes" || response=="Yes"){
                    system("cls");
                    wish();
                    cout<<" Thank you very much! You are such an amazing person dude."<<endl<<endl;
                    cout<<" It's been a good time with you."<<endl<<endl;
                    cout<<" But Now it's time for me to leave. "<<endl<<endl;
                    cout<<" See you again in the next year."<<endl<<endl;
                    cout<<" But before I go.."<<endl;
                    cout<<" Will you gift me a happy moment by listening to a song with me? ";
                    cin>>response;
                    if(response=="yes"||response=="Yes"){
                        cout<<"Okay then. Let's hear the song.."<<endl;
                        system("start https://www.youtube.com/watch?v=RgKAFK5djSk");
                        cout<<"!!!Goodbye!!!";
                    }
                    else{
                        system("cls");
                        wish();
                        cout<<"You are so cruel! I hate you..."<<endl;
                        cout<<"Byeee";
                    }
                }
                else{
                    system("cls");
                    wish();
                    cout<<" Don't be fool man! Try again."<<endl<<endl;
                    goto try_again_confirm;
                }
            }
            else{
                system("cls");
                wish();
                cout<<" Don't be fool man! Try again."<<endl<<endl;
                goto try_again_message;
            }
        }
        else{
            system("cls");
            wish();
            cout<<" You cannot escape from your destiny! Try again."<<endl<<endl;
            goto try_again;
        }
    }
};

int main(){
    system("cls");
    QuantumBirthday Shakib;

    Shakib.wish();
    Shakib.Legengary_Agreement();
    return 0;
}
