#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    
    while (digital(0) && digital(1) == 0) {
        
     if (analog(4) > 3400) {   
        
        mav(1,100);
    	mav(2,10);
     }
        
     else {
         
         mav(1,10);
         mav(2,100);
     }
    
    }
    
    cmpc(1);
    
    while (gmpc(1) < 500)
    {
    	mav(1,500);
    }
    
    while (digital(0) && digital(1) == 0)
    {
    	mav(1,100);
        mav(2,100);
    }
    return 0;
}
