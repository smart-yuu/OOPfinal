#include "parser.h"
#include < sstream >
void Parser::parseInput(tring cF,string iF, string oF){
   circuitFile = cF;
   inputFile = iF;
   outputFile = oF;
}

void Parser::parseCircuit(Circuit* cir){
   ifstream circuit_file (circuitFile.c_str());
   string module, moduleName;
   cin >> module >> moduleName;
   if(module != "module"){
      cout << "Error : This is not a module\n";
      exit(1);
  }

  string allInputOutput;
  cin >> allInputOutput;
}

vector<Pat> Parser::parseInputPattern(){
   ifstream input_pattern_file(inputFile.c_str());
   vector<Pat> inputs;
   string inputString, inputName;
   vector<string> AllInputName;
   size_t commaPos;

   getline(input_pattern_file,inputName);
   stringstream firstLine(inputName);
   firstLine >> inputString;

   while( firstLine >> inputName){
      commaPos = inputName.find(",")
      if(commaPos != string::npos){
         int size = inputName.size();
         AllInputName.push_back( inputName.substr(0,size - 1) );
      }
      else {
         AllInputName.push_back( inputName );
      }
   }//record input Gates

   int numberOfInputs = AllInputName.size();
   int inputPat;
   while(input_pattern_file >> inputPat){
      Pat onePattern;
      for(int i = 0; i < numberOfInputs ; ++i){
         onePattern.push_back(inputPat);
         if( (i+1) == numberOfInputs){
            break;
         }
         else{
            input_pattern_file >> inputPat;
         }
      }
      inputs.push_back(onePattern);
   }
   return inputs;
}

void Parser::output(vector<Pat>){
  
}