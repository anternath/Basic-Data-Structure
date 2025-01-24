Node* deletenode=tem->next;
    tem->next=tem->next->next;
    tem->next->prev=tem;
    delete deletenode;