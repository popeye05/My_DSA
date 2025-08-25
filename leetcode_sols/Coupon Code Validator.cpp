//Very Big Code: My Code.

/*
#include <cctype>
#include <unordered_set>
#include <map>
class Solution {
private:
    struct Coupon {
        string code;
        string businessLine;
    };

    bool isAlphanumericString(string s) {
        s.erase(s.begin(), find_if(s.begin(), s.end(), [](unsigned char ch) {
            return !isspace(ch);
        }));

        s.erase(find_if(s.rbegin(), s.rend(), [](unsigned char ch) {
            return !isspace(ch);
        }).base(), s.end());

        if (s.empty()) {
            return false;
        }

        return all_of(s.begin(), s.end(), [](unsigned char c) {
            return isalnum(c) || c == ' ' || c == '_';
        });
    }

    bool checkBusinessLine(const string& val) {
        static const unordered_set<string> validLines = {
            "restaurant", "grocery", "pharmacy", "electronics"
        };
        
        string lowerVal = val;
        transform(lowerVal.begin(), lowerVal.end(), lowerVal.begin(),
            [](unsigned char c){ return tolower(c); });
            
        return validLines.count(lowerVal) > 0;
    }

public:
    vector<string> validateCoupons(const vector<string>& code, const vector<string>& businessLine, const vector<bool>& isActive) {
        vector<Coupon> validCoupons;

        for (size_t i = 0; i < code.size(); ++i) {
            if (isActive[i] && isAlphanumericString(code[i]) && checkBusinessLine(businessLine[i])) {
                string lowerBusinessLine = businessLine[i];
                transform(lowerBusinessLine.begin(), lowerBusinessLine.end(), lowerBusinessLine.begin(),
                    [](unsigned char c){ return tolower(c); });
                validCoupons.push_back({code[i], lowerBusinessLine});
            }
        }
        
        static const map<string, int> businessLineOrder = {
            {"electronics", 0}, {"grocery", 1}, {"pharmacy", 2}, {"restaurant", 3}
        };

        sort(validCoupons.begin(), validCoupons.end(), [&](const Coupon& a, const Coupon& b) {
            int orderA = businessLineOrder.at(a.businessLine);
            int orderB = businessLineOrder.at(b.businessLine);

            if (orderA != orderB) {
                return orderA < orderB;
            }

            return a.code < b.code;
        });
        
        vector<string> result;
        for (const auto& coupon : validCoupons) {
            result.push_back(coupon.code);
        }
        
        return result;
    }
};
*/
//Optimal Solution
class Solution {
public:
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        int n = code.size();
        vector<int> resInd;
        for(int i=0; i<n; ++i){
            if(isActive[i]){
                if(businessLine[i] == "electronics" ||  businessLine[i] == "grocery" || businessLine[i] == "pharmacy" ||businessLine[i] == "restaurant"){
                          bool check = !code[i].empty();
                    for(auto c : code[i]){
                        if(c == '_' || (c >= 'A' && c <='Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
                        check = true;
                        else {
                          check = false;
                          break;
                        }
                    }
                    if(check)
                        resInd.push_back(i);
                }
            }
        }
        sort(resInd.begin(), resInd.end(), [&](int a, int b){
           return  (businessLine[a] < businessLine[b]) || 
                    (businessLine[a] == businessLine[b] && code[a] < code[b]);
        });
        vector<string> res;
        for(auto ind : resInd){
            res.push_back(code[ind]);
        }
        return res;
    }
};
