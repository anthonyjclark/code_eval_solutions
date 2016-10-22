
//
// This header file is only used for unit testing
//

#ifndef _TEST_LONGEST_LINES_H_
#define _TEST_LONGEST_LINES_H_

#include <string>
using std::string;

#include <vector>
using std::vector;

vector<string> getLines(string &fileName, long &numLines);
void sortLines(vector<string> &inputs);
void trimLines(vector<string> &inputs);
void displayLines(vector<string> &inputs, long &numLines);


#endif