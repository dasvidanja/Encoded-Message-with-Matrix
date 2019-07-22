// Example program
#include <iostream>
#include <string>
#include <math.h>
#include <ctype.h>

using namespace std;


int main()
{
//Variables
  string word;
  int root;  
  int counter = 0; 
  
  
  //Get input
  cout<<"Enter word:  ";
  word ="eedARBtVrolsiesuAoReerles";
  cout<<word<<endl;
  //Find n (size of matrix)
  root = sqrt(word.length());
  
  //Create n x n matrix
  string myMatrix[root][root];
  
  //Insert User String inside of Matrix
  for(int i = 0; i< root; i++){
      for(int j = 0; j < root; j++){
            myMatrix[i][j] = word.at(counter);
            counter++;
            
      }
  }
  

  //Print Matrix (ensure that word is really in there)
  cout<<"Word in n x n matrix"<<endl;
  for(int i = 0; i< root; i++){
      for(int j = 0; j < root; j++){
            cout<< myMatrix[i][j]<<" ";
            
      }
    cout<<" "<<endl;
  }
  
  //Create a second matrix to hold the final answer
  string answerMatrix[root][root];
  
  //Loop Through each element of the myMatrix
//Each element of myMatrix in position (x, y) is equivalent to ( root-1,x)* reset root afte new raw
int secondCounter =root-1;
  for(int x = 0; x< root; x++){
      for(int y = 0; y < root; y++){
          
          answerMatrix[secondCounter][x]= myMatrix[x][y];
          secondCounter--;
      }
      secondCounter =root-1;
  }
  cout<<" "<<endl;
  //Print the final answer
  cout<<"Decoded word"<<endl;
  for(int x = 0; x< root; x++){
      for(int y = 0; y < root; y++){
          //Check if capital letter and put space
         if(x!=0){
             string c =answerMatrix[x][y];
           if (isupper(c.at(0))){
               cout<<" ";
           }
         }
          
           cout<<answerMatrix[x][y];
           
      }
     
  }
  
}

