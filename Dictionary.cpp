#include<iostream>
#include<algorithm>
#include<map>
#include <stdlib.h>
#include<cstring>
#include<string>
#include<fstream>
using namespace std;

map<string,string> dict;

void readData()
{
  ifstream ifile;
    ifile.open("data.txt");
    string key,meaning;
    string str;
    while(getline(ifile, str))
    {
        int length=str.length();
        int i=0;
        while(str[i]!=',' && i<length)
        {
            i++;
        }
        key=str.substr(0,i);
        meaning=str.substr(i+1,length-i);
        dict.insert({key,meaning});
    }
}

void modifyFile()
{
    ofstream ofile;
    ofile.open("data.txt");
    for(auto it=dict.begin();it!=dict.end();it++)
    {
        ofile<<it->first<<","<<it->second<<endl;
    }
}

void Insert()
{
    ofstream ofile;
    ofile.open("data.txt",ios::app);
    string key;
    string meaning;
    cout<<"Enter word : "<<endl;
    cin>>key;
    transform(key.begin(), key.end(), key.begin(), ::tolower);
    if(dict.find(key)!=dict.end())
    {
        cout<<key<<" is already present"<<endl;
        cout<<"Do you want to view (Y or N) : "<<endl;
        char ch;
        cin>>ch;
        if(ch=='Y' or ch=='y')
        {
           auto i=dict.find(key);
           cout<<i->first<<" : "<<i->second<<endl;
        }
    }
    else
    {
        cout<<"Enter meaning : "<<endl;
        cin.ignore();
        getline(cin,meaning);
        dict.insert({key,meaning});
        ofile<<key<<","<<meaning<<endl;
    }
    ofile.close();
}

void display()
{
    int count=0;
    cout<<"All elements of dictionary are : "<<endl;
    for(auto it=dict.begin();it!=dict.end();it++)
    {
        count++;
        cout<<it->first<<"\t\t: "<<it->second<<endl;
    }
    cout<<count<<" words are present"<<endl;
}

void displayReverse()
{
    int count=0;
    cout<<"All elements of dictionary are : "<<endl;
    for(auto it=dict.rbegin();it!=dict.rend();it++)
    {
        count++;
        cout<<it->first<<"\t\t: "<<it->second<<endl;
    }
    cout<<count<<" words are present"<<endl;
}

void Search()
{
    string key;
    cout<<"Enter the word you want to search : ";
    cin>>key;
    transform(key.begin(), key.end(), key.begin(), ::tolower);
    auto i=dict.find(key);
    if(i==dict.end())
    {
        cout<<key<<" is not present"<<endl;
        char ch;
        cout<<"Do you want to add this word to dictionary (Y/N): ";
        cin>>ch;
        if(ch=='Y' ||ch=='y')
        {
            string meaning;
            cout<<"Enter meaning : "<<endl;
            cin.ignore();
            getline(cin,meaning);
            dict.insert({key,meaning});
            ofstream ofile;
            ofile.open("data.txt",ios::app);
            ofile<<key<<","<<meaning<<endl;
            ofile.close();
        }
    }
    else
    {
        cout<<i->first<<" : "<<i->second<<endl;
    }
}

void Erase()
{
    string key;
    cout<<"Enter element you want to delete : "<<endl;
    cin>>key;
    transform(key.begin(), key.end(), key.begin(), ::tolower);
    if(dict.find(key)==dict.end())
    {
        cout<<key<<" is not present"<<endl;
    }
    else
    {
        dict.erase(key);
        modifyFile();
    }
}

void modify()
{
    string key;
    cout<<"Enter word you want to modify : "<<endl;
    cin>>key;
    transform(key.begin(), key.end(), key.begin(), ::tolower);
    if(dict.find(key)==dict.end())
    {
        cout<<key<<" is not present"<<endl;
    }
    else
    {
        dict.erase(key);
        string meaning;
        cout<<"Enter meaning of the word : "<<endl;
        cin.ignore();
        getline(cin,meaning);
        dict.insert({key,meaning});
        modifyFile();
    }
}

int main()
{
    system("Color B0");
    readData();
    int choice;
    while(1)
    {
        system("pause");
        system("CLS");
        cout<<1<<" Search "<<endl;
        cout<<2<<" Insert "<<endl;
        cout<<3<<" View in alphabetical order "<<endl;
        cout<<4<<" View in reverse alphabetical order "<<endl;
        cout<<5<<" Delete "<<endl;
        cout<<6<<" Modify "<<endl;
        cout<<7<<" Exit "<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            Search();
            break;
        case 2:
            Insert();
            break;
        case 3:
            display();
            break;
        case 4:
            displayReverse();
            break;
        case 5:
            Erase();
            break;
        case 6:
            modify();
            break;
        case 7:
            exit(0);
        default:
            cout<<"Wrong input"<<endl;
        }
    }
    return 0;
}
