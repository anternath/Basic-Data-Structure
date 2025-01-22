Node * tem=head;
    if(val==0){
       Node* delelenode=head;
       head=tem->next;
       delete delelenode;
    }
    else if(val==count_size(head)){
        for(int i=1; i<val; i++){
            tem=tem->next;
        }
        Node* deletenode= tem->next;
        tail=tem;
        delete deletenode;
    }
    else{
        for(int i=1; i<val; i++){
        tem=tem->next;
        if(tem==NULL){
            return;
        }
    }
    Node* deletenode= tem->next;
    tem->next=tem->next->next;
    delete deletenode;
    }