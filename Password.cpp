#include "Password.h"
#include <string>

using std::string;

/*
  The function receives a string counts how many times the same character 
  occurs at the beginning of the string, before any other characters (or the
  end of the string). The function is case-sensitive so 'Z' is different than
  'z' and any ASCII characters are allowed.
*/
int Password::count_leading_characters(string phrase){
  int repetition = 1;
  int index = 0;
  while( index < phrase.length()-1 && phrase[index] == phrase[index+1] ){
    repetition++;
    index++;
  }
  return repetition;
}

bool Password::has_mixed_case(string pass){

	bool pass_up = 0;
	bool pass_low = 0;

	if(pass == "")
		return false;

	for(int i=0; i<sizeof(pass); i++) {
		if(islower(pass[i]))
			pass_up = islower(pass[i]);
		if(isupper(pass[i]))
			pass_low = isupper(pass[i]);
		if(pass_up && pass_low)
			return true;
	}

	return false;
}
