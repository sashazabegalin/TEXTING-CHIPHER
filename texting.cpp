// TODO (1): includes / namespace declaration
#include <iostream>
#include <string>
using namespace std;



const string BFF = "BFF";
const string IDK = "IDK";
const string JK = "JK";
const string TMI = "TMI";
const string TTYL = "TTYL";

const string BFF_LONG = "best friend forever";
const string IDK_LONG = "I don't know";
const string JK_LONG = "just kidding";
const string TMI_LONG = "too much information";
const string TTYL_LONG = " talk to you later";

int main()
{
    //TODO (2):  declare a string to hold the sentence
    string text;
    
    int i;
    int j;
    
    //TODO (3):  prompt the user input "Enter text:"
    cout << "Enter text:" << "\n";
    cout << endl;
    getline(cin,text);
    
    
    //TODO (4):  declare a variable to hold a search index
    
    
    
    
    //TODO (5):  implement a find and replace while loop for each abbreviation (5 total)
    while(text.find(BFF) != string::npos) {
        i = text.find(BFF);
        text.replace(i,BFF.size(), BFF_LONG);
    }
    
    while(text.find(IDK) != string::npos)
    {
        i = text.find(IDK);
        text.replace(i, IDK.size(), IDK_LONG);
    }
    while(text.find(JK) != string::npos)
    {
        i = text.find(JK);
        text.replace(i,JK.size(), JK_LONG);
    }
    
    while(text.find(TMI) != string::npos)
    {
        i = text.find(TMI);
        text.replace(i, TMI.size(), TMI_LONG);
    }
    
    
    while(text.find(TTYL) != string::npos)
    {
        i = text.find(TTYL);
        text.replace(i, TTYL.size(), TTYL_LONG);
    }
    
    while(text.find(".") != string::npos)
    {
        i = text.find(".");
        text.replace(i, 1, "!");
    }
    //TODO (6):  use a for loop to iterate through each character of the string and replace any '.' with '!'
    
    //TODO (6):  output the modified string
    cout << text << endl;
    return 0;
}


