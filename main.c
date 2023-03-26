#include <kipr/wombat.h>
#include <stdlib.h>

void drive(int distance, int speed)
{
    cmpc(0);
    while(abs(gmpc(0)) < distance){
         mav(0,speed);
         mav(3,speed);
    }
    mav(0,0);
    mav(3,0);
    msleep(20);
    
    
}    
    //Move claw up
   enable_servos();
    set_servo_position(1,1300);
    msleep(500);
    //move robot backwards towards cylinder
   
    }
    
    
    //move claw down
    set_servo_position(1,600);
    msleep(500);
    disable_servos();
    
    
    //Drag cylinder forwards
    
    
    
    printf("Hello World\n");
    return 0;
}
