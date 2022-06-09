bool isValidParenthesis(string str)
{
    stack<char> s;
    int n=str.size();
    int i=0;
    while(i<n){
        if(str[i]=='{' || str[i]=='[' || str[i]=='('){
            s.push(str[i]);
        }
        else{
             if(str[i]=='}'){
                 if(s.size()==0 || s.top()!='{'){
                     return false;
                 }
                 else{
                     s.pop();
                 }
             }
             else if(str[i]==']'){
                 if(s.size()==0|| s.top()!='['){
                     return false;
                 }
                 else{
                     s.pop();
                 }
             }
             else if(str[i]==')'){
             
                 if(s.size()==0 || s.top()!='('){
                     return false;
                 }
                 else{
                     s.pop();
                 }
             }
        }
        i++;
    }
    if(s.size()!=0){
        return false;
    }
    return true;
}
