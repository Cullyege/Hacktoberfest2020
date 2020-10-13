#include<iostream.h>;
#include<conio.h>;

int arr[10],i,front=-1,rear=-1,size;

void ins()
{ if((front==0&&rear==size-1)||(front==rear+1))
  { cout<<"\nQueue overflow";
    return;  }
  
  if(front==-1)
  { front=rear=0; }
  
  else
  { if(rear==size-1)
    rear=0;
    else
    rear=rear+1; }
    
    cout<<"\nEnter element:";
    cin>>arr[rear];
    cout<<arr[rear]<<" is inserted\n"; 
}

void del()
{  if(front==-1)
   { cout<<"\nQueue is empty";
     return; }
    
  cout<<arr[front]<<" is deleted";
  if(front==rear)
  { front=rear=-1; }
  else
  { if(front==size-1)
      front=0;
    else
      front++; }
}


void disp()
{ int ftemp=front,rtemp=rear;

    if(front==-1)
    { cout<<"\nQueue is empty";
      return; }
    
    cout<<"\nThe elements:";
    
    if(ftemp<=rtemp)
    while(ftemp<=rtemp)
    { cout<<arr[ftemp]<<" ";
       ftemp++; }
       
    else
    {   while(ftemp<=size-1)
        { cout<<arr[ftemp]<<" ";
          ftemp++; }
         ftemp=0;
         while(ftemp<=rtemp)
         { cout<<arr[ftemp]<<" ";
           ftemp++; }
    }
      
    cout<<endl; 
}

void main()
{ clrscr();
  char ch,ans;
  
  cout<<"\nEnter size:";
  cin>>size;
  
  do
  {   clrscr();
      cout<<"\n\tMENU\nA.Insert\nB.Delete\nC.Display";
      cout<<"\nEnter your choice(A/B/C):";
      cin>>ch;

      switch(ch)
      {   case 'A':
          case 'a':ins(); break;
          case 'B':
          case 'b':del(); break;
          case 'C':
          case 'c':disp(); break;
          default:cout,,"\nWrong choice";
      }
      cout<<"\nDo you wish to continue(Y/N):";
      cin>>ans;
   }  while(ans=='y'||ans=='Y');

  getch();
}
