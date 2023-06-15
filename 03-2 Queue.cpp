
queue<int> q; //initiate int-type queue

void queue_print(queue<int> q){
    vector<int> v;
    while(!q.empty()){
        int a;
        a = q.front();
        v.push_back(a);
        q.pop();
    }
    vector<int> ::iterator it;
    for(it=v.begin(); it!=v.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}

int main{
  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
    
  cout << "First element in queue: " << q.front() << endl; //print element at front of queue
  cout << "Last Element in queue: " << q.back() << endl;   //print element at end of queue
  cout << "Queue Amount Elements: " << q.size() << endl;
  cout << "No Objects in Queue? " << boolalpha << q.empty() << endl;
  cout << "Elements in Queue: "; queue_print(q);
  
  return 0; 
}
