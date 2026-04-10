#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    for (const auto& query : queries){
        string temp = "";
        for(int i = 0; i < query[0]; i++) temp += my_string[i];
        for(int i = query[1]; i >= query[0]; i--) temp += my_string[i];
        for(int i = query[1] + 1; i < my_string.size(); i++) temp += my_string[i];
        my_string = temp;
    }
    
    return my_string;
}