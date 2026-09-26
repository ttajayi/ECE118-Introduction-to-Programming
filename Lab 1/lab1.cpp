﻿// Part 1: Greetings




#include "library.h"


void main()
{  
	print("Greetings, Human!"); 
    new_line(); 
    print("2 plus 3 is "); 
    print(2+3); 
   new_line();  
}






// Part 2: Pentagon






#include "library.h"


void main ()
{       make_window(400, 400); 
        set_pen_color(color::dark_green); 
        set_pen_width(5); 
        move_to(150, 250); 
        draw_distance(100); 
        turn_right_by_degrees(72); 
        draw_distance(100); 
        turn_right_by_degrees(72); 
        draw_distance(100); 
        turn_right_by_degrees(72); 
        draw_distance(100); 
        turn_right_by_degrees(72); 
        draw_distance(100); 
        set_pen_color(color::orange); 
        set_font_size(24); 
        write_string("Pentagon"); 
}








// A. how long is a year?




#include "library.h"


void main()
{
        make_window(400,400);
        int seconds_per_minute = 60;
        int minutes_per_hour = 60;
        int hours_per_day = 24; 
        int days_per_year = 365;


        int seconds_in_year = seconds_per_minute * minutes_per_hour * hours_per_day * days_per_year;


        cout <<"A year is " <<seconds_in_year << " seconds long" << endl;
        write_string("Number of seconds in a year");
}
















// B. Black Magic, Stars




#include "library.h"


void main()
{
        make_window(400,400);
        set_pen_color(color::dark_green);
        set_pen_width(5);
        move_to(200,200);
        draw_distance(200);
        turn_right_by_degrees(144);
        new_line();
        draw_distance(200);
        turn_right_by_degrees(144);
        new_line();
        draw_distance(200);
        turn_right_by_degrees(144);
        new_line();
        draw_distance(200);
        turn_right_by_degrees(144);
        new_line();
        draw_distance(200);
        turn_right_by_degrees(144);
        set_pen_color(color::orange); 
        set_font_size(24); 
        write_string("star"); 
}










// C. Stick men, round heads


#include "library.h"


void main()
{
        make_window(400,400);
        set_pen_color(color::purple);
        set_pen_width(5);
        move_to(180, 100);
        draw_distance(40);
        turn_right_by_degrees(90);
        draw_distance(40);
        turn_right_by_degrees(90);
        draw_distance(40);
        turn_right_by_degrees(90);
        draw_distance(40);
        turn_right_by_degrees(90);
        move_to(200,200);
        new_line();
        draw_distance(100);
        move_to(200,130);
        new_line();
        turn_right_by_degrees(120);
        draw_distance(50);
        move_to(185,140);
        new_line();
        turn_left_by_degrees(60);
        draw_distance(20);
        move_to(185,140);
        new_line();
        turn_left_by_degrees(100);
        draw_distance(30);
        move_to(200,200);
        new_line();
        turn_left_by_degrees(100);
        draw_distance(50);
        move_to(245,225);
        new_line();
        turn_right_by_degrees(80);
        draw_distance(50);
        set_pen_color(color::green);
        set_font_size(24);
        move_to(100,300);
        write_string("stick man with left arm raised");        
}