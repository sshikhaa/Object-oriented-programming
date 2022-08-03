//OS CODES

//binary semaphore

struct semaphore{
  int val;
  queue<int>q;
  semaphore(){
      val=1;
  }
};

void dowm(semaphore s)
{
    if(s.val==1)
    {
        s.val=0;//successful process
    }
    else{
        //put the process in the waiting queue
        s.q.push(process);
        sleep();
    }
}
void up(semaphore s)
{
    if(s.q.empty()==1)
    {
        s.val=1;return;
    }
    else{
        process p = s.q.front();s.q.pop();
        wake_up(p);
    }
    
}

//counting semaphore
struct semaphore{
  int val;
  queue<process>q;  
};

void dowm(semaphore s)
{
    s.val = s.val-1;
    
    if(s.val>=0)
    {
        //successful operation
        return;
    }
    else{
        //put process in the waiting queue
        s.q.push(p);
        sleep();
    }
}
void up(semaphore s)
{
    s.val = s.val+1;
    if(s.val<=0)
    {
        //put a process out of the queue
        //s==-4 indicates there are 4 process in the waiting queue
        process p = q.front();q.pop();
        wake_up(p);
    }
    else return;
}

//lock and set
int lock =0;

while(lock_and_Set(&lock));//2 process(checking and setting) are executed at the same time to avoid synchronisation issues
CS;
lock=0;

bool lock_and_Set(int*lock)
{
    int prev = *lock;
    *lock = 1;
    return prev;
}

//soln of producer-consumer problem (2 semaphores are used)
void producer(void)
{
    int item_p;
   
        down(s);
        dowm(empty); //as empty slots will decrease
       
        item_p = buffer[out];
        out = (out+1)%n;
        
        up(full); //filled slots will decrease
        up(s);
    
}
void consumer(int item_c)
{
    
        dowm(s);
       dowm(full);
       
        buffer[in] = item_c;
        in = (in+1)%n;
       
       up(empty);
        up(s);
    
}

//soln of reader writer problem(here also we use 2 semaphores-->db and mutex)

int rc=0;
void reader()
{
   dowm(s);
   rc++;
   
   if(rc==1)dowm(db);
   up(s);
   
   //CS-->asses db
   
   dowm(s);
   rc--;
   if(rc==0)up(db);
   up(s); 
}

void writer()
{
    dowm(db);
    //ACESS CS I.E. DATABASE
    up(db);
}
