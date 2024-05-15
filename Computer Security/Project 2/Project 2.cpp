#include <iostream>
#include <string>
#include <iomanip>
#include <chrono>
#include <windows.h>
#include <stdlib.h>

using namespace std;

class ACM{
public:
    string rol;

    bool manu; // check if manuscript is sent
    int state = 0; //  defines state 

    bool owner;
    bool read;
    bool write;
    bool submit;
    bool send;
    bool accept;
    bool review;
    bool checkReviews;

    //prototypes
    void generateACM(int pState); 
    void setPermissions(int pState);
    void newACM(int pState);

};

void ACM::setPermissions(int pState){
   switch(pState){ //all potential permissions
    case 0: //base case
        if(rol == "author"){
        owner = true;
        read = true;
        write = true;
        submit = true;
        }
        if(rol == "editor"){
        read = true;
        send = true;
        review  = true;
        checkReviews = true;
        }
        if(rol == "administrator"){
            owner = true;
            read = true;
            write = true;
            submit = true;
            send = true;
            accept = true;
            review = true;
            checkReviews = true;  
        }
    break;
    case 1://case where editor sends manuscript to associates
        if(rol == "author"){
        owner = true;
        read = true;
        write = true;
        submit = true;
        }
        if(rol == "editor"){
        read = true;
        send = true;
        review  = true;
        checkReviews = true;
        }
        if(rol == "associate editor"){
        accept = true;
        }
        if(rol == "administrator"){
            owner = true;
            read = true;
            write = true;
            submit = true;
            send = true;
            accept = true;
            review = true;
            checkReviews = true;  
        }
    break;
    case 2:// after associate accepts invite
        if(rol == "author"){
        owner = true;
        read = true;
        write = true;
        submit = true;
        }
        if(rol == "editor"){
        read = true;
        send = true;
        review  = true;
        checkReviews = true;
        }
        if(rol == "associate editor"){
        read = true;
        send = true;
        review  = true;
        checkReviews = true;
        }
        if(rol == "administrator"){
            owner = true;
            read = true;
            write = true;
            submit = true;
            send = true;
            accept = true;
            review = true;
            checkReviews = true;  
        }
    break;
    case 3:// if associate sends to reviewers to for more review 
        if(rol == "author"){
        owner = true;
        read = true;
        write = true;
        submit = true;
        }
        if(rol == "editor"){
        read = true;
        send = true;
        review  = true;
        checkReviews = true;
        }
        if(rol == "associate editor"){
        read = true;
        send = true;
        review  = true;
        checkReviews = true;
        }
        if(rol == "reviewer"){
        accept = true;

        }
        if(rol == "administrator"){
            owner = true;
            read = true;
            write = true;
            submit = true;
            send = true;
            accept = true;
            review = true;
            checkReviews = true;  
        }
    break;
    case 4:// after reviewer accepts invite 
        if(rol == "author"){
        owner = true;
        read = true;
        write = true;
        submit = true;
        }
        if(rol == "editor"){
        read = true;
        send = true;
        review  = true;
        checkReviews = true;
        }
        if(rol == "associate editor"){
        read = true;
        send = true;
        review  = true;
        checkReviews = true;
        }
        if(rol == "reviewer"){
        read = true;
        send = true;
        review = true;

        }
        if(rol == "administrator"){
            owner = true;
            read = true;
            write = true;
            submit = true;
            send = true;
            accept = true;
            review = true;
            checkReviews = true;  
        }
    break;
   }
}

void ACM::generateACM(int pState){//visual display for permissions
    const char sep    = ' ';
    const int nameWidth     = 20;
    switch (pState)
    {
    case 0: // base case
        cout << left << setw(nameWidth) << setfill(sep) << "";
        cout << left << setw(nameWidth) << setfill(sep) << "Manuscript 1" << endl;
        cout << left << setw(nameWidth) << setfill(sep) << "Author  " ;
        cout << left << setw(nameWidth) << setfill(sep) << "Owner/Read/Write/Submit" << endl;
        cout << left << setw(nameWidth) << setfill(sep) << "Editor  " ;
        cout << left << setw(nameWidth) << setfill(sep) << "Read/Send/Review/Check Reviews" << endl;
        cout << left << setw(nameWidth) << setfill(sep) << "Associate Editor  " ;
        cout << left << setw(nameWidth) << setfill(sep) << "" << endl;
        cout << left << setw(nameWidth) << setfill(sep) << "Reviewer  " ;
        cout << left << setw(nameWidth) << setfill(sep) << "" << endl;
        cout << left << setw(nameWidth) << setfill(sep) << "Administrator  " ;
        cout << left << setw(nameWidth) << setfill(sep) << "Owner/Read/Write/Submit/Send/Accept/Review/Check Reviews" << endl;
        cout << endl;
        break;
    case 1: //case where editor sends manuscript to associates
        cout << left << setw(nameWidth) << setfill(sep) << "";
        cout << left << setw(nameWidth) << setfill(sep) << "Manuscript 1" << endl;
        cout << left << setw(nameWidth) << setfill(sep) << "Author  " ;
        cout << left << setw(nameWidth) << setfill(sep) << "Owner/Read/Write/Submit" << endl;
        cout << left << setw(nameWidth) << setfill(sep) << "Editor  " ;
        cout << left << setw(nameWidth) << setfill(sep) << "Read/Send/Review/Check Reviews" << endl;
        cout << left << setw(nameWidth) << setfill(sep) << "Associate Editor  " ;
        cout << left << setw(nameWidth) << setfill(sep) << "Accept" << endl;
        cout << left << setw(nameWidth) << setfill(sep) << "Reviewer  " ;
        cout << left << setw(nameWidth) << setfill(sep) << "" << endl;
        cout << left << setw(nameWidth) << setfill(sep) << "Administrator  " ;
        cout << left << setw(nameWidth) << setfill(sep) << "Owner/Read/Write/Submit/Send/Accept/Review/Check Reviews" << endl;
        cout << endl;
        break;
    case 2: // after associate accepts invite
        cout << left << setw(nameWidth) << setfill(sep) << "";
        cout << left << setw(nameWidth) << setfill(sep) << "Manuscript 1" << endl;
        cout << left << setw(nameWidth) << setfill(sep) << "Author  " ;
        cout << left << setw(nameWidth) << setfill(sep) << "Owner/Read/Write/Submit" << endl;
        cout << left << setw(nameWidth) << setfill(sep) << "Editor  " ;
        cout << left << setw(nameWidth) << setfill(sep) << "Read/Send/Review/Check Reviews" << endl;
        cout << left << setw(nameWidth) << setfill(sep) << "Associate Editor  " ;
        cout << left << setw(nameWidth) << setfill(sep) << "Read/Send/Review/Check Reviews" << endl;
        cout << left << setw(nameWidth) << setfill(sep) << "Reviewer  " ;
        cout << left << setw(nameWidth) << setfill(sep) << "" << endl;
        cout << left << setw(nameWidth) << setfill(sep) << "Administrator  " ;
        cout << left << setw(nameWidth) << setfill(sep) << "Owner/Read/Write/Submit/Send/Accept/Review/Check Reviews" << endl;
        cout << endl;
        break;
    case 3: // if associate sends to reviewers to for more review 
        cout << left << setw(nameWidth) << setfill(sep) << "";
        cout << left << setw(nameWidth) << setfill(sep) << "Manuscript 1" << endl;
        cout << left << setw(nameWidth) << setfill(sep) << "Author  " ;
        cout << left << setw(nameWidth) << setfill(sep) << "Owner/Read/Write/Submit" << endl;
        cout << left << setw(nameWidth) << setfill(sep) << "Editor  " ;
        cout << left << setw(nameWidth) << setfill(sep) << "Read/Send/Accept/Review/Check Reviews" << endl;
        cout << left << setw(nameWidth) << setfill(sep) << "Associate Editor  " ;
        cout << left << setw(nameWidth) << setfill(sep) << "Read/Send/Review/Check Reviews" << endl;
        cout << left << setw(nameWidth) << setfill(sep) << "Reviewer  " ;
        cout << left << setw(nameWidth) << setfill(sep) << "Accept" << endl;
        cout << left << setw(nameWidth) << setfill(sep) << "Administrator  " ;
        cout << left << setw(nameWidth) << setfill(sep) << "Owner/Read/Write/Submit/Send/Accept/Review/Check Reviews" << endl;
        cout << endl;
        break;
        case 4: // after reviewer accept invite 
        cout << left << setw(nameWidth) << setfill(sep) << "";
        cout << left << setw(nameWidth) << setfill(sep) << "Manuscript 1" << endl;
        cout << left << setw(nameWidth) << setfill(sep) << "Author  " ;
        cout << left << setw(nameWidth) << setfill(sep) << "Owner/Read/Write/Submit" << endl;
        cout << left << setw(nameWidth) << setfill(sep) << "Editor  " ;
        cout << left << setw(nameWidth) << setfill(sep) << "Read/Send/Accept/Review/Check Reviews" << endl;
        cout << left << setw(nameWidth) << setfill(sep) << "Associate Editor  " ;
        cout << left << setw(nameWidth) << setfill(sep) << "Read/Send/Review/Check Reviews" << endl;
        cout << left << setw(nameWidth) << setfill(sep) << "Reviewer  " ;
        cout << left << setw(nameWidth) << setfill(sep) << "Read/Send/Review" << endl;
        cout << left << setw(nameWidth) << setfill(sep) << "Administrator  " ;
        cout << left << setw(nameWidth) << setfill(sep) << "Owner/Read/Write/Submit/Send/Accept/Review/Check Reviews" << endl;
        cout << endl;
        break;
    
    }

}

void ACM::newACM(int pState){ //reusable prompt for displaying ACM
    cout << "Want to view ACM? " << endl;
    cout << "1. Yes " << endl;
    cout << "2. No " << endl;
        int chc;
        cin >> chc;
        if (chc == 1)
            generateACM(pState);
        else
            cout << ""<< endl;

}

int main(){

bool stop; //defines when to stop loop
 
ACM usr;
while (stop == false)
{
cout << "whats your role (lowercase)" << endl;
string rol ="guest";
getline(cin, rol);

if( rol == "author" || rol == "editor" || rol == "associate editor" || rol == "reviewer" || rol == "administrator"){ //all roles

    usr.rol = rol;
    int chx;
    usr.setPermissions(usr.state);
    cout << "Choose a Task Number as "<< rol <<":" << endl;
    

        if(rol == "author"){
            cout << "1. Submit manuscript to Editors." << endl;
            if(usr.manu){
            cout << "2. Generate ACM" << endl;
            }
            cin >> chx;
            switch (chx){
                case 1:
                    cout << "Sending manuscript" << endl;
                    usr.manu = true;
                    Sleep(1000);
                    cout << "Manuscript sent" << endl;
                    usr.newACM(usr.state);
                    break;
                case 2:
                    if(usr.manu){
                    usr.generateACM(usr.state);
                    }
                    break;
                default:
                    cout << "No Access" << endl;
                    break;  
            }
        }
    
        if(rol == "editor"){
            if(usr.manu){
            cout << "1. Generate ACM." << endl;
            cout << "2. Send manuscript to Associate Editors." << endl;
            cin >> chx;
             switch (chx){
                case 1:
                    usr.generateACM(usr.state);
                    break;
                case 2:
                    usr.state = 1;
                    usr.setPermissions(usr.state);
                    cout << "Manuscript Sent" << endl;
                    usr.newACM(usr.state);
                    break;
                default:
                    cout << "No Access" << endl;
                    break;  
            }
            }
            else{
               cout << "Nothing to do today" << endl;
            }
            
           
        }

        if(rol == "associate editor"){
            if(usr.manu){
            cout << "1. Generate ACM." << endl;
            if(usr.state == 1)
                cout << "2. Accept Manuscript." << endl;
            if(usr.state == 2)
                cout << "3. Send Manuscript to Reviewers." << endl;
            if(usr.state == 4){
            cout << "4. Accept manuscript as is." << endl;
            cout << "5. Accept the manuscript with minor changes." << endl;
            cout << "6. Accept the manuscript with major changes." << endl;
            cout << "7. Reject the manuscript. " << endl;
            cout << "8. Report copyright issues with the manuscript.  " << endl;
            }

            cin >> chx;
            switch (chx){
                case 1:
                    
                    usr.generateACM(usr.state);
                    break;
                
                case 2:
                if(usr.state == 1){
                    usr.state = 2;
                    usr.setPermissions(usr.state);
                    cout << "Manuscript Accepted" << endl;
                    usr.newACM(usr.state);
                    break;
                }
                case 3:
                if(usr.state == 2){
                    usr.state = 3;
                    usr.setPermissions(usr.state);
                    cout << "Manuscript Sent to Reviewers" << endl;
                    usr.newACM(usr.state);
                    break;
                }
                case 4:
                if(usr.state == 4){
                    usr.state = 0;
                    usr.manu = false;
                    stop = true;
                    cout << "Task complete" << endl;
                    Sleep(1000);
                    break;
                }
                default:
                    cout << "No Access" << endl;
                    break;  
            }
            }
            else{
                cout << "Nothing to do today" << endl;
            }
        }

        if(rol == "reviewer"){
            if(usr.manu){
            cout << "1. Generate ACM." << endl;
            if(usr.state == 3){
            cout << "2. Accept invation from Associate Editors." << endl;
            }
            if(usr.state == 4){
            cout << "3. Send scores back to Associate Editors." << endl;
            }
            cin >> chx;
            switch (chx){
                case 1:
                    
                    usr.generateACM(usr.state);
                    break;
                case 2:
                    if(usr.state == 3){
                        usr.state = 4;
                    cout << "Invite Accepted" << endl;
                    }
                    else
                        cout << "No Access" << endl;
                    usr.newACM(usr.state);
                    break;
                case 3:
                    if(usr.state == 4){

                    cout << "Scores sent" << endl;
                    }
                    else
                        cout << "No Access" << endl;
                    usr.newACM(usr.state);
                    break;
                default:
                    cout << "No Access" << endl;
                    break;  
            }
            }
            else{
                cout << "Nothing to do today" << endl;
            }
        }

        if(rol == "administrator"){
            
            cout << "1. Do something" << endl;
            if(usr.manu)
                cout << "2. Generate ACM." << endl;
            

            cin >> chx;
            switch (chx){
                case 1:
                    cout << "You did whatever you wanted cause your an admin" << endl;
                    break;
                case 2:
                    if(usr.manu){
                    usr.generateACM(usr.state);
                    }
                    break;
                
            }
        }

}


}


}
