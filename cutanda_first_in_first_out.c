//Angel Kristie O. Cutanda
//BSCpE 4B
//Novenber 2, 2022

int TASK[6] = {8,9,10,11,12,13}; //declaring the variable task and its corresponding pin


int taskTime[6]={15,10,5,1,8,3}; //declaring the time of each pin


  void setup()
{
   for(int i = 0; i <6; i++){
     pinMode(TASK[i], OUTPUT);
   }
}
void fifo(){
  for(int i = 0; i <6; i++){
  	digitalWrite(TASK[i], HIGH);
  delay(taskTime[i]*1000); // Wait for 1000 millisecond(s)
  digitalWrite(TASK[i], LOW);
  }
}

void loop()
{
  fifo();
  exit(0);
}
