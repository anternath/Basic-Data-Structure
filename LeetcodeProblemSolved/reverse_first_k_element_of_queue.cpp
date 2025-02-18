#include <bits/stdc++.h> 
queue<int> reverseElements(queue<int> q, int k)
{
    // Write your code here.
    stack<int>cp;
    queue<int>newq;
    for(int i=1; i<=k; i++){
        cp.push(q.front());
        q.pop();
    }
    while(!cp.empty()){
        newq.push(cp.top());
        cp.pop();
    }
    while(!q.empty()){
        newq.push(q.front());
        q.pop();
    }
    return newq;
}
