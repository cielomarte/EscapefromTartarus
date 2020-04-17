
#include<iostream>
#include<string>
#include<vector>

using namespace std;
vector<int>drachmas(0);
void tartarus();
void weeping_ghouls();
//void styx();
//void cocytus();
//void phlegethon();

int main()
{
    int escape;
    
    cout<<"Wake up,Persephone! You have been taken by the God of the Underworld,Hades as you slept!"<<"\n"<<endl;
    cout<<"Every day that you are gone, your mother,Demeter, freezes the crops over and starves the humans!"<<"\n"<<endl;
    cout<<"You must make your way out of the underworld unnoticed. "<<"\n"<<endl;
    cout<<"Collect at least 500 golden drachmas on your way so that you may be able to wager your soul out"<<"\t"<<endl;
    cout<<"Be careful which doors you open as some will contain pomegranate seeds that will only take you back to the root of the labyrinth,Tartarus."<<"\n"<<endl;
    cout<<"There are also wandering ghouls that will steal your drachmas so that they,too, can wager their exit.  "<<"\t"<<endl;
    cout<<"This is your only chance to escape the Underworld before Hades returns. Go,now! "<<"\n"<<endl;
    cout<<"ESCAPE OR WAIT?Press 1 to Escape or 0 to wait"<<"\t"<<endl;
    do{
    cin>> escape;
    switch(escape)
    {
        case 1:
            cout<<"Fortune favors the bold. May Zeus favor your journey!"<<"\t"<<endl;
            tartarus();
            break;
            
        case 0:
            cout<< "You have chosen to wait. Hades will return soon and the people will die under the hands of Demeter."<<"\t"<<endl;
            cout<<"You are trapped in the Underworld forever."<<"\t"<<endl; 
            break;
        default:
            cout<<"I do not understand.Try again"<<"\t"<<endl;
    }
    } while (escape!=0);
    
}

void tartarus()
{
    cout<<"Welcome to Tartarus. There are 3 doors."<<"\t"<<endl;
    cout<<"Choose 1 , 2, or 3"<<"\t"<<endl;
    int tar_choice;
    cin>> tar_choice;
    switch(tar_choice)
    {
        case 1:
            cout<<"You have found 10 drachmas!"<<endl;
            drachmas.push_back(10);
            cout<<"You now have "<<drachmas.size()<<" drachmas."<<"\t"<<endl; ///
            cout<<"Make your way out to the Hallway of the Weeping Ghouls"<<endl;
            cout<<"\t"<<endl;
            weeping_ghouls();
            break;
            
        case 2:
            weeping_ghouls();
            break;
            
        default:
            cout<<"You have gained 5 drachmas!"<<endl;
            drachmas.push_back(5);
            cout<<"You now have "<<drachmas.size()<<" drachmas."<<"\t"<<endl;
            cout<<"phlegethon();"<<endl;       
            break;

    }
}

void weeping_ghouls()
{
    cout<<"Welcome to the Hallway of the Weeping Ghouls"<<"\t"<<endl;
    cout<<"This is the hall where old souls repent before they meet Tartarus."<<"\t"<<endl;
    cout<<"You have found 200 drachmas"<<endl;
    drachmas.push_back(200);
    cout<<"You now have "<<drachmas.size()<<" drachmas."<<"\t"<<endl;
    cout<<"Which river would you like to travel by? You can venture through the River Styx or River Cocytus. "<<endl;
    cout<<"Type in 1 or 2 for Styx or Cocytus,respectively "<<endl; 
    int river;
    cin>>river;
    if(river==1)
    {
        cout<<"Welcome to the River Styx"<<"\t"<<endl;
        cout<<"You have been granted 50 drachmas"<<endl;
        drachmas.push_back(50);
        cout<<"You now have "<<drachmas.size()<<" drachmas."<<"\t"<<endl;
        cout<<"You can venture to the Asphodel Meadows by giving me 300 drachmas or to River Acheron. It does not cost to get there but I cannot guarantee there won't be any ghouls waiting for you"<<endl;
        cout<<"Type in 1 if you wanted to buy your way to Asphodel Meadows and 2 if you wanted to risk the road to River Acheron. "<<endl;
        int styx_choice;
        cin>>styx_choice;
        if(styx_choice==1)
        {
           cout<<"Your gamble has paid off. You have gained 400 drachmas."<<'\t'<<endl;
            drachmas.push_back(400);
            cout<<"You now have "<<drachmas.size()<<" drachmas."<<"\t"<<endl;
            cout<<"You made it out with " << drachmas.size()<< " drachmas!"<<endl;
            
        }
        else
        {
            cout<<"Congratulations!"<<endl;
            cout<<"You made it out!"<<endl;
            
        }
    }
        


    else
    {
        cout<<"Welcome to the River Cocytus"<<"\t"<<endl;
        //cout<<"This is the hall where old souls repent before they meet Tartarus."<<"\t"<<endl;
        cout<<"You have been granted 50 drachmas"<<endl;
        drachmas.push_back(50);
        cout<<"You now have "<<drachmas.size()<<" drachmas."<<"\t"<<endl;
        cout<<"There are three doors to unmarked caverns. ------ to which door you choose"<<endl;
        int cocytus_choice;
        cin>>cocytus_choice;
        if(cocytus_choice==1)
        {
        cout<<"A ghoul has taken all your drachmas and has condemened you to Tartarus"<<endl;
        tartarus();
        }
        else
        {
        cout<<"You are lost. Try again."<<endl;
        //styx();
        }       
    }
        
}

/*




void phlegethon()
{
    cout<<"Welcome to the River of Fire. You have gained 50 drachmas."<<"\t"<<endl;
    drachmas.push_back(50);
    cout<<"You now haved "<<drachmas<<" drachmas."<<'\t'<<endl;
    cout<<"There are two dark tunnels. Type in 1 or 2 to choose"<<endl;
    int tunnel;
    cin>>tunnel;
    if(tunnel==1)
    {
        //cout<<'lethe'<<endl;//lethe()
    }
    else if(tunnel==2)
    {
        //cout<<'styx'<<endl;
        //styx();
    }
    else
    {
        //cout<<'cocytus'<<endl;
        //cocytus();
    }
    
}


void asphodel_meadows()
{
    cout<<"Welcome to the Asphodel Meadows"<<"\t"<<endl;
    cout<<"As you travel through, a ghoul has taken some of your drachma!"<<"\t"<<endl;
    //cout<<"You have been granted 50 drachmas"<<endl;
    drachmas.pop_back(1000);
    cout<<"You now have "<<drachmas.size()<<" drachmas."<<"\t"<<endl;
    cout<<"There are two cups that you can drink from. Each concoction will take your soul to another portion of the Underworld. "<<endl;
    cout<<"Type in 'black' or 'red' for whichever drink you choose."
    string am_choice.toupper();
    cin>>am_choice;
    if(am_choice=='black')
    {
       tartarus();
    }
    else
    {
        exit();
    }       
}



*/

/*
int main()
{
    int escape;
    
    cout<<"Wake up,Persephone! You have been taken by the God of the Underworld,Hades as you slept!"<<"\n"<<endl;
    cout<<"Every day that you are gone, your mother,Demeter, freezes the crops over and starves the humans!"<<"\n"<<endl;
    cout<<"You must make your way out of the underworld unnoticed. "<<"\n"<<endl;
    cout<<"Collect at least 500 golden drachmas on your way so that you may be able to wager your soul out"<<"\t"<<endl;
    cout<<"Be careful which doors you open as some will contain pomegranate seeds that will only take you back to the root of the labyrinth,Tartarus."<<"\n"<<endl;
    cout<<"There are also wandering ghouls that will steal your drachmas so that they,too, can wager their exit.  "<<"\t"<<endl;
    cout<<"This is your only chance to escape the Underworld before Hades returns. Go,now! "<<"\n"<<endl;
    cout<<"ESCAPE OR WAIT?Press 1 to Escape or 0 to wait"<<"\t"<<endl;
    do{
    cin>> escape;
    switch(escape)
    {
        case 1:
            cout<<"Fortune favors the bold. May Zeus favor your journey!"<<"\t"<<endl;
            tartarus();
            break;
        case 0:
            cout<< "You have chosen to wait. Hades will return soon and the people will die under the hands of Demeter."<<"\t"<<endl;
            cout<<"You are trapped in the Underworld forever."<<"\t"<<endl; 
            break;
        default:
            cout<<"I do not understand.Try again"<<"\t"<<endl;
    }
    } while (escape!=0);
    
}*/

