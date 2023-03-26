#include <kipr/wombat.h>

int main()
{
    create_connect();
    
  int white=2400;
    
    while((get_create_lcliff_amt() > white) || (get_create_rcliff_amt() > white)) //squaring up code (face foward)
    {
        if((get_create_rcliff_amt() > white) && (get_create_lcliff_amt() < white))
        {
            create_drive_direct(0,100);
        }
        else if((get_create_rcliff_amt() < white) && (get_create_lcliff_amt() > white))
        {
            create_drive_direct(100,0);
        }
        else
        {
            create_drive_direct(100,100);
        }
    }
    create_drive_direct(100,100); //foward
    msleep(4250);
    set_create_total_angle(0);
    while (get_create_total_angle() > -90) //turn right
    {
       create_drive_direct(100,-100);
    }
    create_drive_direct(100,100);
    msleep(4400);
    
    set_create_total_angle(0);
    
    while (get_create_total_angle() < 100) //turn left
    {
        create_drive_direct(-100,100);
    }
    create_drive_direct(100,100);
    msleep(50);
   
    //start of picking up first block
   
    set_servo_position(0,1500);
    msleep(500);
   
    //insert lifting the claw code
    
    set_servo_position(0,0);
    msleep(500);
    
    //drop block in area i can stack other block on
   
    //end of picking up first block
    
    create_drive_direct(-100,-100);
    msleep(1000);
    
    set_create_total_angle(0);
    
    while (get_create_total_angle() < 90) //turn left
    {
        create_drive_direct(-100,100);
    }
    create_drive_direct(100,100);
    msleep(3800);
    
    set_create_total_angle(0);
   
    while (get_create_total_angle() > -105) //turn right
    {
       create_drive_direct(100,-100);
    }
    create_drive_direct(100,100);
    msleep(1500);
    
    //insert claw code
    
    create_drive_direct(-100,-100);
    msleep(1500);
     
    set_create_total_angle(0);
   
    while (get_create_total_angle() > -105) //turn right
    {
       create_drive_direct(100,-100);
    }
    
   create_drive_direct(100,100);
   msleep(5000);
   
   set_create_total_angle(0);
    
   while (get_create_total_angle() < 90) //turn left
   {
       create_drive_direct(-100,100);
   } 
   create_drive_direct(100,100);
   msleep(1500);
   
   //insert grab bot girl with claw code
    
   create_drive_direct(-100,-100);
   msleep(1000);
    
   set_create_total_angle(0);
   
   while (get_create_total_angle() > -105) //turn right
   {
      create_drive_direct(100,-100);
   }
   create_drive_direct(100,100);
   msleep(1500);
   
   set_create_total_angle(0);
    
   while (get_create_total_angle() < 90) //turn left
   {
       create_drive_direct(-100,100);
   } 
   create_drive_direct(100,100);
   msleep(1000);
   
    //insert grab block with claw code
    
   create_drive_direct(-100,-100);
   msleep(1000);
    
   set_create_total_angle(0);
   
   while (get_create_total_angle() > -105) //turn right
   {
      create_drive_direct(100,-100);
   }
   create_drive_direct(100,100);
   msleep(2000);
    
   set_create_total_angle(0);
    
   while (get_create_total_angle() < 90) //turn left
   {
       create_drive_direct(-100,100);
   }
   create_drive_direct(100,100);
   msleep(1000);
   create_drive_direct(-100,-100);
   msleep(2000);
     
   set_create_total_angle(0);
   
   while (get_create_total_angle() > -105) //turn right
   {
      create_drive_direct(100,-100);
   }
   create_drive_direct(100,100);
   msleep(1000);
  
    //use claw to flip switch
   
   
    
    
    ;return 0;
}
