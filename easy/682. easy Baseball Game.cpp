class Solution {
public:
    int stringtoint(string a){
        int res = 0;
        for(int i = 0; i < a.size(); ++i){
            if(a[i] != '-'){
                res *= 10;
                res += (int)a[i]-48;
            }
        }

        return a[0] == '-' ? res*-1 : res;
    }

    int calPoints(vector<string>& operations) {
        stack<int> a;
        for(string op : operations){
            if(op == "C"){
                a.pop();
            }
            else if(op == "D"){
                a.push(a.top()*2);
            }
            else if(op == "+"){
                int temp = a.top();
                a.pop();
                int temp1 = a.top();
                a.push(temp);
                a.push(temp+temp1);
            }
            else{
                a.push(stringtoint(op));
            }
        }
        int s = 0;
        int size = a.size();
        for(int i = 0; i < size; ++i){
            s += a.top();
            a.pop();
        }
        return s;
    }
}; // 15min, 0ms
