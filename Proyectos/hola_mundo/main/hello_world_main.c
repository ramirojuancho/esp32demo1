/* Hello World Example

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>


void app_main(void)
{
    while(true)
    {
         printf("Hola Equipo! Somos los mejores\n");
         sleep(5);
    }
}
