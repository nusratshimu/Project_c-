
#include <bits/stdc++.h>

using namespace std;

class TeamsInfo
{
protected:

    char m_playersName[33][50];

public:

    TeamsInfo();
    TeamsInfo(string teamName);

    void Germany();
    void Brazil ();
    void Argentina();

    void showTeams();
};

TeamsInfo::TeamsInfo(string teamName)
{
    if(teamName == "Germany"){
        cout<<"\t\tGermany Team Details!"<<endl;
        cout<<"\t\t-------------------------"<<endl<<endl;
        Germany();
    }

    else if(teamName == "Brazil"){
        cout<<"\t\tBrazil Team Details!"<<endl;
        cout<<"\t\t-------------------------"<<endl<<endl;
        Brazil();
    }

    else if(teamName == "Argentina"){
        cout<<"\t\tArgentina Team Details!"<<endl;
        cout<<"\t\t-------------------------"<<endl<<endl;
        Argentina();
    }

    else
    {
        cout<<"Team Name Is Incorrect! Please, Type Correct Team Name!"<<endl<<endl;
    }

}

void TeamsInfo::Germany()
{
    ifstream file;
    file.open("Germany.txt");

    if(!file.is_open()){
        cout<<"\t\tTeamInfo Germany File Opening Failure!"<<endl;
    }
    else{
        int i = 0;

        char name[50];

        while(file.good()){
            ///getline(file, name);
            file>>name;
            strcpy(m_playersName[i], name);
            i ++;
        }
    }

    file.close();
}

void TeamsInfo::Brazil()
{
    ifstream file;
    file.open("Brazil.txt");

    if(!file.is_open()){
        cout<<"\t\tTeamInfo Brazil File Opening Failure!"<<endl;
    }
    else{
        int i = 0;

        char name[50];

        while(file.good()){
            ///getline(file, name);
            file>>name;
            strcpy(m_playersName[i], name);
            i ++;
        }
    }

    file.close();
}

void TeamsInfo::Argentina()
{
    ifstream file;
    file.open("Argentina.txt");

    if(!file.is_open()){
        cout<<"\t\tTeamInfo Argentina File Opening Failure!"<<endl;
    }
    else{
        int i = 0;

        char name[50];

        while(file.good()){
            ///getline(file, name);
            file>>name;
            strcpy(m_playersName[i], name);
            i ++;
        }
    }

    file.close();
}

void TeamsInfo::showTeams()
{
    for(int i=0;i<29;i++){
        cout<<"\t\t"<<m_playersName[i]<<endl;
    }

    cout<<"\t\tEnd This Team Details!"<<endl<<endl;
}

