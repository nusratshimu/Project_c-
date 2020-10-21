#include <bits/stdc++.h>

using namespace std;

class Stadium1
{
protected:

    char m_Stadium1Name[12][50];
    char m_Stadium1Location[12][50];
    int m_Stadium1Capacity[12];

public:#include <bits/stdc++.h>

using namespace std;

class PrizeInfo
{
public:

    void showPrize();
};

void PrizeInfo::showPrize()
{
    cout<<"\n\t\tFor Champion - 3.80 USD"<<endl;
    cout<<"\t\tFor Runner-Up - 2.80 USD"<<endl;
    cout<<"\t\tFor 3rd Team - 2.40 USD"<<endl;
    cout<<"\t\tFor 4th Team - 2.20 USD"<<endl;
    cout<<"\t\tFor 5th - 8th - 1.60 USD"<<endl;
    cout<<"\t\tFor 9th - 16th - 1.20 USD"<<endl;
    cout<<"\t\tFor Each Participating Team - 0.80 USD"<<endl;
}



    Stadium1();
    void ShowStadium1();
};

Stadium1::Stadium1()
{
    ifstream file;
    file.open("Stadium1Name.txt");

    if(!file.is_open()){
        cout<<"\t\tStadium1 Name File Opening Failure!"<<endl;
    }
    else{
        int i = 0;

        char name[50];

        while(file.good()){
            ///getline(file, name);
            file>>name;
            strcpy(m_Stadium1Name[i], name);
            i ++;
        }
    }

    file.close();

    file.open("Stadium1Location.txt");

    if(!file.is_open()){
        cout<<"\t\tStadium1 Location File Opening Failure!"<<endl;
    }
    else{
        int i = 0;

        char name[50];

        while(file.good()){
            ///getline(file, name);
            file>>name;
            strcpy(m_Stadium1Location[i], name);
            i ++;
        }
    }

    file.close();

    file.open("Stadium1Capacity.txt");

    if(!file.is_open()){
        cout<<"\t\tStadium1 Capacity File Opening Failure!"<<endl;
    }
    else{
        int i = 0;

        int name;

        while(file.good()){
            ///getline(file, name);
            file>>name;
            m_Stadium1Capacity[i] = name;
            i ++;
        }
    }

    file.close();
}

void Stadium1::ShowStadium1()
{
    cout<<"\t\tStadium1 Details!"<<endl;
    cout<<"\t\t----------------"<<endl<<endl;

    for(int i=0;i<12;i++){
        cout<<"\t\tStadium1 Number "<<i+1<<" : "<<m_Stadium1Name[i]<<"(Capacity : ";
        cout<<m_Stadium1Capacity[i]<<") , ";
        cout<<m_Stadium1Location[i]<<endl;
    }
}


