class Solution {
public:
    int calPoints(vector<string>& operations) {
      stack<int> stack;
      int res=0;
      for(const auto& p:operations){
        if(p=="+"){
            int top=stack.top();
            stack.pop();
            int newtop=top+stack.top();
            stack.push(top);
            stack.push(newtop);
            res+=newtop;
        }else if(p=="D"){
            stack.push(2*stack.top());
            res+=stack.top();
        }else if(p=="C"){
            res-=stack.top();
            stack.pop();
        }else{
            stack.push(stoi(p));
            res+=stack.top();
        }
      }  
      return res;
        
    }
};