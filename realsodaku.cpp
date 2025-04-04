class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& arr) {
        
        unordered_set<string> seen;
        
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                char num = arr[i][j];
                
                if (num != '.') {
                    string rowCheck = "row" + to_string(i) + num;
                    string colCheck = "col" + to_string(j) + num;
                    string boxCheck = "box" + to_string(i / 3) + to_string(j / 3) + num;

                    
                    if (seen.find(rowCheck) != seen.end() ||
                        seen.find(colCheck) != seen.end() ||
                        seen.find(boxCheck) != seen.end()) {
                        return false;
                    }

                    
                    seen.insert(rowCheck);
                    seen.insert(colCheck);
                    seen.insert(boxCheck);
                }
            }
        }
        
        return true;
    }
};
