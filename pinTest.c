#include "project.h"

int main(void)
{
   
    for(int i = 0;i <=10;i++)
    {
        Ph1_High_Write(1); //Turn on Blue LED
        CyDelay(500); //Wait half of a second
        Ph1_High_Write(0); //Turn off Blue LED
        CyDelay(500); //Wait half of a second

        Ph2_High_Write(1); //Turn on Red LED
        CyDelay(500); //Wait half of a second
        Ph2_High_Write(0); //Turn off Red LED
        CyDelay(500); //Wait half of a second

        Ph3_High_Write(1); //Turn on Green LED
        CyDelay(500); //Wait half of a second
        Ph3_High_Write(0); //Turn off Green LED
        CyDelay(500); //Wait half of a second

        Ph1_Low_Write(1); //Turn on Blue LED
        CyDelay(500); //Wait half of a second
        Ph1_Low_Write(0); //Turn off Blue LED
        CyDelay(500); //Wait half of a second

        Ph2_Low_Write(1); //Turn on Red LED
        CyDelay(500); //Wait half of a second
        Ph2_Low_Write(0); //Turn off Red LED
        CyDelay(500); //Wait half of a second

        Ph3_Low_Write(1); //Turn on Green LED
        CyDelay(500); //Wait half of a second
        Ph3_Low_Write(0); //Turn off Green LED
        CyDelay(500); //Wait half of a second
    }
}
