#include<iostream>
using namespace std;
main()
{
  
    cout<<"enter the character in :";
    char character;
    cin>>character;
    if (character=='a' || character=='e' || character=='i' || character=='o' || character=='u'){
        cout<<"character is vowel";
    }
    else if(character > 0 || character < 0){
        cout<<"character is integr";
    }
      else {
        cout<<"it is consonent";
    }
}

