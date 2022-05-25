#include<iostream>

using namespace std;
void board(){
    char space[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    cout <<"    |    |   \n";
    cout <<"  "<<space[0][0]<<" | "<< space[0][1]<< "  | " << space[0][2]<< "\n";
    cout <<"____|____|____\n";
    cout <<"    |    |   \n";
    cout <<"  "<<space[1][0]<<" | "<< space[1][1]<< "  | " << space[1][2]<< "\n";
    cout <<"____|____|____\n";
    cout <<"    |    |\n";
    cout <<"  "<<space[2][0]<<" | "<< space[2][1]<< "  | " << space[2][2]<< "\n";
    cout <<"    |    |\n";
void liveboard(){
    char space[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    cout <<"    |    |   \n";
    cout <<"  "<<liveboard[0][0]<<" | "<< liveboard[0][1]<< "  | " << liveboard[0][2]<< "\n";
    cout <<"____|____|____\n";
    cout <<"    |    |   \n";
    cout <<"  "<<liveboard[1][0]<<" | "<< liveboard[1][1]<< "  | " << liveboard[1][2]<< "\n";
    cout <<"____|____|____\n";
    cout <<"    |    |\n";
    cout <<"  "<<liveboard[2][0]<<" | "<< liveboard[2][1]<< "  | " << liveboard[2][2]<< "\n";
    cout <<"    |    |\n";
void firstmove(){
  int turn = 1
  whereareugoing()
  turn++
}   
void whereareugoing(){
  board()
  cout << "Where would You Like to go?"
}
void movewrite(string turn, string cord){
  
}
}


int main(){
  board();
}
