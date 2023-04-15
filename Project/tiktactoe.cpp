//This is my first project
#include<bits/stdc++.h>
using namespace std;
int row,column;
char a[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char turn='X';
bool draw=false;
void display(){
    system("cls");
    cout<<"\t\tTick Tac Toe Game\n";
    cout<<"Player1 [X]\nPlayer2 [O]\n\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<a[0][0]<<"  |  "<<a[0][1]<<"  |  "<<a[0][2]<<"  \n";
    cout<<"\t\t_____|_____|_____\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<a[1][0]<<"  |  "<<a[1][1]<<"  |  "<<a[1][2]<<"  \n";
    cout<<"\t\t_____|_____|_____\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<a[2][0]<<"  |  "<<a[2][1]<<"  |  "<<a[2][2]<<"  \n";
    cout<<"\t\t     |     |     \n";
}
void player_turn(){
    int choice;
    if(turn=='X')
    cout<<"\n\tPlayer1's[X] Turn: ";
    if(turn=='O')
    cout<<"\n\tPlayer1's[O] Turn: ";
    cin>>choice;
    switch(choice){
        case 1: row=0;column=0; break;
        case 2: row=0;column=1; break;
        case 3: row=0;column=2; break;
        case 4: row=1;column=0; break;
        case 5: row=1;column=1; break;
        case 6: row=1;column=2; break;
        case 7: row=2;column=0; break;
        case 8: row=2;column=1; break;
        case 9: row=2;column=2; break;
        default:
            cout<<"Invalid Choice";
            break;
    }
    if(turn=='X' && a[row][column]!='X' && a[row][column]!='O')
        {
            a[row][column]='X';
            turn='O';
        }
    else if(turn=='O' && a[row][column]!='X' && a[row][column]!='O')
        {
            a[row][column]='O';
            turn='X';
        } 
    else 
    {
        cout<<"Box already taken\n";
        player_turn();
    }
    display();
}
bool gameover(){
    //check win;
    for(int i=0;i<3;i++)
    if(a[i][0]==a[i][i] && a[i][0]==a[i][2] || a[0][i]==a[1][i]&&a[0][i]==a[2][i])
    return false;

    if(a[0][0]==a[1][1] && a[0][0]==a[2][2] || a[0][2]==a[1][1]&&a[0][0]==a[2][0])
    return false;
    for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
    if(a[i][j]!='X' && a[i][j]!='O')
    return true;

    draw=true;
    return false;
}
int main()
{
    while(gameover()){
    int choice;
    display();
    player_turn();
    };
    if(turn=='X' && draw==false)
    cout<<"Player2 [O] Wins!!! Congratulations\n";
    if(turn=='O' && draw==false)
    cout<<"Player1 [X] Wins!!! Congratulations\n";
    else
    cout<<"Game Drawn!";
}