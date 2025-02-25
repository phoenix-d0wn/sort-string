#include <iostream>
using namespace std;

void sortString(string &Str){
    int count = 0;

    while (count < Str.size()){     //continue loop until count hits the length of the string (all characters are successfully sorted in asc order) 
        for (int i = 1; i < Str.size(); i++){
            if (Str[i - 1] > Str[i]){
                swap(Str[i - 1], Str[i]);   //swap if current character is smaller than previous one
                count = 0;  //reset count
            } else{
                count++;    //increment count by 1 if current character is bigger than previous one
            }
        }
    }
}

int main(){
    string str = "bcaddefa";

    sortString(str);

    cout << str;

    return 0;
}