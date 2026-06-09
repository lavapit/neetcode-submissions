class Solution {
   public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int n = operations.size();
        for (int i = 0; i < n; i++) {
            if (operations[i] != "+" &&
    operations[i] != "D" &&
    operations[i] != "C") {
                st.push(stoi(operations[i]));
            } else if (operations[i] == "+") {
               int l=0;
               l+=st.top();
               int y=st.top();
               st.pop();
               l+=st.top();
               st.push(y);
               st.push(l);
                l=0;
              
            } else if (operations[i] == "D") {
             int x=2*st.top();
             st.push(x);
              x=0;


            } else if (operations[i] == "C") {
                st.pop();
            }
        }
        int sum = 0;

        while (!st.empty()) {
            sum += st.top();
            st.pop();
        }

        return sum;
    }
};