void insertmiddle(){
    node *w;
    char target;
    if(head==NULL){
        printf("The list is empty.");
        
    }
    printf("Enter the data after which you want to enter the value:");
    scanf("%s",&target);
    w=(node*)malloc(sizeof(node));
    printf("\nEnter the data:");
    scanf("%s",w->data);
    
    while(head->data!=target){
        head=head->ptr;
    }
    head->ptr=w;
    w->ptr=head->ptr; 
}