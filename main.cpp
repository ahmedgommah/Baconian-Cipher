#include <iostream>
using namespace std;
string  cipher(string message ,string z);
string  decipher(string message,string z);
int main()
{
    string message,z;
    int number;
    for(int i=0;i<5;i++){
                z="";
    cout<<"Ahllan ya uesr ya habiby"<<endl;
    cout<<"What do you want do today"<<endl;
    cout<<"1- is cipher"<<endl;
    cout<<"2- is decipher"<<endl;
    cout<<"3-end "<<endl;
    cout<<"please enter number"<<endl;
    cin>>number;
    if(number==3)
        break;
    cout<<"please enter your message:  \n";
    cin>>message;
    if (number==1){
    for (int i=0;i<message.length();i++){
        if  ((message[i]=='c')||(message[i]=='C'))
           z+="aaaab";
        else if (message[i]=='-')
            z+="*";
        else if ((message[i]=='b')||(message[i]=='B'))
           z=z+"aaabb";
        else if ((message[i]=='a')||(message[i]=='A'))
           z=z+"aaaaa";
        else if ((message[i]=='d')||(message[i]=='D'))
           z=z+"aaabb";
        else if ((message[i]=='e')||(message[i]=='E'))
           z=z+"aabaa";
        else if ((message[i]=='F')||(message[i]=='f'))
           z=z+"aabab";
        else if ((message[i]=='G')||(message[i]=='g'))
           z=z+"aabba";
        else if ((message[i]=='k')||(message[i]=='K'))
           z=z+"ababa";
        else if ((message[i]=='H')||(message[i]=='h'))
           z=z+"aabbb";
        else if ((message[i]=='l')||(message[i]=='L'))
           z=z+"ababb";
        else if ((message[i]=='M')||(message[i]=='m'))
           z=z+"abbaa";
        else if ((message[i]=='n')||(message[i]=='N'))
           z=z+"abbab";
        else if ((message[i]=='O')||(message[i]=='o'))
           z=z+"abbba";
        else if ((message[i]=='p')||(message[i]=='P'))
           z=z+"abbbb";
        else if ((message[i]=='Q')||(message[i]=='q'))
           z=z+"baaaa";
        else if ((message[i]=='R')||(message[i]=='r'))
           z=z+"baaab";
        else if ((message[i]=='s')||(message[i]=='S'))
           z=z+"baaba";
        else if ((message[i]=='t')||(message[i]=='T'))
           z=z+"baabb";
        else if ((message[i]=='V')||(message[i]=='v'))
           z=z+"baabb";
        else if ((message[i]=='X')||(message[i]=='x'))
           z=z+"babbb";
        else if ((message[i]=='w')||(message[i]=='W'))
           z=z+"babba";
        else if ((message[i]=='Z')||(message[i]=='z'))
           z=z+"bbaab";
        else if ((message[i]=='j')||(message[i]=='J'))
           z=z+"abaab";
        else if ((message[i]=='u')||(message[i]=='U'))
           z=z+"babaa";
        else if ((message[i]=='i')||(message[i]=='I'))
           z=z+"abaaa";
        else if ((message[i]=='y')||(message[i]=='Y'))
            z=z+"bbaaa";
            }
            cout<<z<<endl;
            break;
            }
    else if (number==2){
    for (int i=0;i<message.length();i+=5){
            if(((message[i]=='a'))&&((message[i+1]=='a'))&&((message[i+2]=='a'))&&((message[i+3]=='a'))&&((message[i+4]=='a')))
                   z+="A";
            else if(((message[i]=='a'))&&((message[i+1]=='a'))&&((message[i+2]=='a'))&&((message[i+3]=='a'))&&((message[i+4]=='b')))
                   z+="B";
            else if(((message[i]=='a'))&&((message[i+1]=='a'))&&((message[i+2]=='a'))&&((message[i+3]=='b'))&&((message[i+4]=='a')))
                   z+="C";
            else if(((message[i]=='a'))&&((message[i+1]=='a'))&&((message[i+2]=='a'))&&((message[i+3]=='b'))&&((message[i+4]=='b')))
                z+="D";
            else if(((message[i]=='a'))&&((message[i+1]=='a'))&&((message[i+2]=='b'))&&((message[i+3]=='a'))&&((message[i+4]=='a')))
                z+="E";
            else if(((message[i]=='a'))&&((message[i+1]=='a'))&&((message[i+2]=='b'))&&((message[i+3]=='a'))&&((message[i+4]=='b')))
                z+="F";
            else if(((message[i]=='a'))&&((message[i+1]=='b'))&&((message[i+2]=='a'))&&((message[i+3]=='b'))&&((message[i+4]=='a')))
                z+="G";
            else if(((message[i]=='a'))&&((message[i+1]=='a'))&&((message[i+2]=='b'))&&((message[i+3]=='b'))&&((message[i+4]=='b')))
                z+="H";
            else if(((message[i]=='a'))&&((message[i+1]=='b'))&&((message[i+2]=='a'))&&((message[i+3]=='a'))&&((message[i+4]=='a')))
                z+="I";
            else if(((message[i]=='a'))&&((message[i+1]=='b'))&&((message[i+2]=='a'))&&((message[i+3]=='a'))&&((message[i+4]=='b')))
                z+="J";
            else if(((message[i]=='a'))&&((message[i+1]=='b'))&&((message[i+2]=='a'))&&((message[i+3]=='b'))&&((message[i+4]=='a')))
                z+="K";
            else if(((message[i]=='a'))&&((message[i+1]=='b'))&&((message[i+2]=='b'))&&((message[i+3]=='a'))&&((message[i+4]=='b')))
                z+="L";
            else if(((message[i]=='a'))&&((message[i+1]=='b'))&&((message[i+2]=='b'))&&((message[i+3]=='a'))&&((message[i+4]=='a')))
                z+="M";
            else if(((message[i]=='a'))&&((message[i+1]=='b'))&&((message[i+2]=='b'))&&((message[i+3]=='a'))&&((message[i+4]=='a')))
                z+="N";
            else if(((message[i]=='a'))&&((message[i+1]=='b'))&&((message[i+2]=='b'))&&((message[i+3]=='b'))&&((message[i+4]=='a')))
                z+="O";
            else if(((message[i]=='a'))&&((message[i+1]=='b'))&&((message[i+2]=='b'))&&((message[i+3]=='b'))&&((message[i+4]=='b')))
                z+="P";
            else if(((message[i]=='b'))&&((message[i+1]=='a'))&&((message[i+2]=='a'))&&((message[i+3]=='a'))&&((message[i+4]=='a')))
                z+="Q";
            else if(((message[i]=='b'))&&((message[i+1]=='a'))&&((message[i+2]=='a'))&&((message[i+3]=='a'))&&((message[i+4]=='b')))
                z+="R";
            else if(((message[i]=='b'))&&((message[i+1]=='a'))&&((message[i+2]=='a'))&&((message[i+3]=='b'))&&((message[i+4]=='a')))
                z+="S";
            else if(((message[i]=='b'))&&((message[i+1]=='a'))&&((message[i+2]=='a'))&&((message[i+3]=='b'))&&((message[i+4]=='b')))
                z+="T";
            else if(((message[i]=='b'))&&((message[i+1]=='a'))&&((message[i+2]=='b'))&&((message[i+3]=='a'))&&((message[i+4]=='a')))
                z+="U";
            else if(((message[i]=='b'))&&((message[i+1]=='a'))&&((message[i+2]=='b'))&&((message[i+3]=='a'))&&((message[i+4]=='b')))
                z+="V";
            else if(((message[i]=='b'))&&((message[i+1]=='a'))&&((message[i+2]=='b'))&&((message[i+3]=='b'))&&((message[i+4]=='b')))
                z+="W";
            else if(((message[i]=='b'))&&((message[i+1]=='a'))&&((message[i+2]=='b'))&&((message[i+3]=='b'))&&((message[i+4]=='b')))
                z+="X";
            else if(((message[i]=='b'))&&((message[i+1]=='b'))&&((message[i+2]=='a'))&&((message[i+3]=='a'))&&((message[i+4]=='a')))
                z+="Y";
            else if(((message[i]=='b'))&&((message[i+1]=='b'))&&((message[i+2]=='a'))&&((message[i+3]=='a'))&&((message[i+4]=='b')))
                z+="Z";
    }
    cout<<z<<endl;
    break;
    }

    }

    }
