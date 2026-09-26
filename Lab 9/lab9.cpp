// 1. Make sure you can read the file

#include "library.h"

void read_file(ifstream & fin)
{
    int year, month, day;
    double min_temp, avg_temp, max_temp, snow, rain, wind;

    fin >> year >> month >> day >> min_temp >> avg_temp >> max_temp >> snow >> rain >> wind;

    if (fin.fail())
    return;

    cout << "The average temperature was " << avg_temp << " F" << endl;

    read_file(fin);
}

void main()
{
    ifstream fin("MIAMI-FL.txt");

    if (fin.fail())
    {
        cout << "The file didn't open!\n";
    }

    read_file(fin);
    fin.close();
}

// 2. Turn the numbers into a graph

#include "library.h"

void points(ifstream & fin)
{
    int year, month, day;
    double min_temp, avg_temp, max_temp, snow, rain, wind;

    fin >> year >> month >> day >> min_temp >> avg_temp >> max_temp >> snow >> rain >> wind;

    if (fin.fail())
    return;

    double x = (month * 31 + day) * 1.8;
    double y = 220 - avg_temp * 4;
    set_pen_width(3);
    set_pen_color(color::dark_green);
    draw_point(x,y);

    points(fin);
}

void graph()
{
    make_window(800,600);
    move_to(0,100);
    set_pen_color(color::orange);
    turn_right_by_degrees(90);
    draw_distance(900);
    note_position();
    move_to(0,185);
    draw_distance(900);
}

void main()
{
    graph();
    ifstream fin("MIAMI-FL.txt");

    if (fin.fail())
    {
        cout << "The file didn't open!\n";
    }

    points(fin);
    fin.close();
}

// 3. Get the X coordinates right

#include "library.h"

int length_of_a_month(const int month)
{
    if (month == 1)
    return 31;
    if (month == 2)
    return 28;
    if (month == 3)
    return 31;
    if (month == 4)
    return 30;
    if (month == 5)
    return 31;
    if (month == 6)
    return 30;
    if (month == 7)
    return 31;
    if (month == 8)
    return 31;
    if (month == 9)
    return 30;
    if (month == 10)
    return 31;
    if (month == 11)
    return 30;
    if (month == 31)
    return 31;
}

int day_of_the_year(const int month, const int day)
{
    if (month == 1) return day;
    return length_of_a_month(month - 1) + day_of_the_year(month - 1, day);
}

void points(ifstream & fin)
{
    int year, month, day;
    double min_temp, avg_temp, max_temp, snow, rain, wind;

    fin >> year >> month >> day >> min_temp >> avg_temp >> max_temp >> snow >> rain >> wind;

    if (fin.fail())
    return;

    double x = ((day_of_the_year(month,day)) * 1.8) + 50;
    double y = 220 - avg_temp * 4;
    set_pen_width(3);
    set_pen_color(color::dark_green);
    draw_point(x,y);

    points(fin);
}

void graph()
{
    make_window(800,600);
    move_to(0,100);
    set_pen_color(color::orange);
    turn_right_by_degrees(90);
    draw_distance(900);
    note_position();
    move_to(0,185);
    draw_distance(900);
}

void main()
{
    graph();
    ifstream fin("MIAMI-FL.txt");

    if (fin.fail())
    {
        cout << "The file didn't open!\n";
    }

    points(fin);
    fin.close();
}

// 4. Less dottiness

#include "library.h"

int length_of_a_month(const int month)
{
    if (month == 1)
    return 31;
    if (month == 2)
    return 28;
    if (month == 3)
    return 31;
    if (month == 4)
    return 30;
    if (month == 5)
    return 31;
    if (month == 6)
    return 30;
    if (month == 7)
    return 31;
    if (month == 8)
    return 31;
    if (month == 9)
    return 30;
    if (month == 10)
    return 31;
    if (month == 11)
    return 30;
    if (month == 31)
    return 31;

    return 0;
}

int day_of_the_year(const int month, const int day)
{
    if (month == 1) return day;
    return length_of_a_month(month - 1) + day_of_the_year(month - 1, day);
}

void line(ifstream & fin)
{
    int year, month, day;
    double min_temp, avg_temp, max_temp, snow, rain, wind;

    fin >> year >> month >> day >> min_temp >> avg_temp >> max_temp >> snow >> rain >> wind;

    if (fin.fail())
    return;

    double x = ((day_of_the_year(month,day)) * 1.8) + 50;
    double y = 220 - avg_temp * 4;
    set_pen_width(3);
    set_pen_color(color::dark_green);
    draw_to(x,y);

    line(fin);
}

void graph()
{
    make_window(800,600);
    move_to(0,100);
    set_pen_color(color::orange);
    turn_right_by_degrees(90);
    draw_distance(900);
    note_position();
    move_to(0,185);
    draw_distance(900);
}

void main()
{
    graph();
    ifstream fin("MIAMI-FL.txt");

    if (fin.fail())
    {
        cout << "The file didn't open!\n";
    }

    int year, month, day;
    double min_temp, avg_temp, max_temp, snow, rain, wind;

    fin >> year >> month >> day >> min_temp >> avg_temp >> max_temp >> snow >> rain >> wind;

    double first_x = (day_of_the_year(month, day) * 1.8) + 50;
    double first_y = 220 - avg_temp * 4;

    move_to(first_x, first_y);

    line(fin);
    fin.close();
}

// 5. More information

#include "library.h"

int length_of_a_month(const int month)
{
    if (month == 1)
    return 31;
    if (month == 2)
    return 28;
    if (month == 3)
    return 31;
    if (month == 4)
    return 30;
    if (month == 5)
    return 31;
    if (month == 6)
    return 30;
    if (month == 7)
    return 31;
    if (month == 8)
    return 31;
    if (month == 9)
    return 30;
    if (month == 10)
    return 31;
    if (month == 11)
    return 30;
    if (month == 31)
    return 31;

    return 0;
}

int day_of_the_year(const int month, const int day)
{
    if (month == 1) return day;
    return length_of_a_month(month - 1) + day_of_the_year(month - 1, day);
}

void Temps(ifstream & fin, double Xmax, double Ymax, double Xmin, double Ymin)
{
    int year, month, day;
    double min_temp, avg_temp, max_temp, snow, rain, wind;

    fin >> year >> month >> day >> min_temp >> avg_temp >> max_temp >> snow >> rain >> wind;

    if (fin.fail())
    return;

    double x = ((day_of_the_year(month,day)) * 1.8) + 50;
    double y_max = 240 - max_temp * 4;
    double y_min = 240 - min_temp * 4;

    set_pen_width(3);

    set_pen_color(color::red);
    move_to(Xmax, Ymax);
    draw_to(x, y_max);

    set_pen_color(color::blue);
    move_to(Xmin, Ymin);
    draw_to(x, y_min);

    Temps(fin, x, y_max, x, y_min);
}

void graph()
{
    make_window(800,600);
    move_to(0,100);
    set_pen_color(color::orange);
    turn_right_by_degrees(90);
    draw_distance(900);
    note_position();
    move_to(0,235);
    draw_distance(900);
}

void main()
{
    graph();

    ifstream fin("MIAMI-FL.txt");

    if (fin.fail())
    {
        cout << "The file didn't open!\n";
    }

    int year, month, day;
    double min_temp, avg_temp, max_temp, snow, rain, wind;
    fin >> year >> month >> day >> min_temp >> avg_temp >> max_temp >> snow >> rain >> wind;

    double x1 = (day_of_the_year(month, day) * 1.8) + 50;
    double y1 = 240 - max_temp * 4;
    double y2 = 240 - min_temp * 4;

    Temps(fin, x1, y1, x1, y2);

    fin.close();
}

// 6. Kites

#include "library.h"

int length_of_a_month(const int month)
{
    if (month == 1)
    return 31;
    if (month == 2)
    return 28;
    if (month == 3)
    return 31;
    if (month == 4)
    return 30;
    if (month == 5)
    return 31;
    if (month == 6)
    return 30;
    if (month == 7)
    return 31;
    if (month == 8)
    return 31;
    if (month == 9)
    return 30;
    if (month == 10)
    return 31;
    if (month == 11)
    return 30;
    if (month == 31)
    return 31;

    return 0;
}

int day_of_the_year(const int month, const int day)
{
    if (month == 1) return day;
    return length_of_a_month(month - 1) + day_of_the_year(month - 1, day);
}

void Temps(ifstream & fin, double Xmax, double Ymax, double Xmin, double Ymin, double Xwind, double Ywind)
{
    int year, month, day;
    double min_temp, avg_temp, max_temp, snow, rain, wind;

    fin >> year >> month >> day >> min_temp >> avg_temp >> max_temp >> snow >> rain >> wind;

    if (fin.fail())
    return;

    double x = ((day_of_the_year(month,day)) * 1.8) + 50;
    double y_max = 240 - max_temp * 4;
    double y_min = 240 - min_temp * 4;
    double y_wind = 400 - wind * 4;

    set_pen_width(3);

    set_pen_color(color::red);
    move_to(Xmax, Ymax);
    draw_to(x, y_max);

    set_pen_color(color::blue);
    move_to(Xmin, Ymin);
    draw_to(x, y_min);

    set_pen_color(color::light_blue);
    move_to(Xwind, Ywind);
    draw_to(x, y_wind);

    Temps(fin, x, y_max, x, y_min, x, y_wind);
}

void graph()
{
    make_window(800,600);
    move_to(0,100);
    set_pen_color(color::orange);
    turn_right_by_degrees(90);
    draw_distance(900);
    note_position();
    move_to(0,235);
    draw_distance(900);
}

void main()
{
    graph();

    ifstream fin("MIAMI-FL.txt");

    if (fin.fail())
    {
        cout << "The file didn't open!\n";
    }

    int year, month, day;
    double min_temp, avg_temp, max_temp, snow, rain, wind;
    fin >> year >> month >> day >> min_temp >> avg_temp >> max_temp >> snow >> rain >> wind;

    double x1 = (day_of_the_year(month, day) * 1.8) + 50;
    double y1 = 240 - max_temp * 4;
    double y2 = 240 - min_temp * 4;
    double y3 = 240 - wind * 4;

    Temps(fin, x1, y1, x1, y2, x1, y3);

    fin.close();
}

// 7. Make it useful

#include "library.h"

int length_of_a_month(const int month)
{
    if (month == 1)
    return 31;
    if (month == 2)
    return 28;
    if (month == 3)
    return 31;
    if (month == 4)
    return 30;
    if (month == 5)
    return 31;
    if (month == 6)
    return 30;
    if (month == 7)
    return 31;
    if (month == 8)
    return 31;
    if (month == 9)
    return 30;
    if (month == 10)
    return 31;
    if (month == 11)
    return 30;
    if (month == 31)
    return 31;

    return 0;
}

int day_of_the_year(const int month, const int day)
{
    if (month == 1) return day;
    return length_of_a_month(month - 1) + day_of_the_year(month - 1, day);
}

void Temps(ifstream & fin, double Xmax, double Ymax, double Xmin, double Ymin, double Xwind, double Ywind, double & highest_temp, double & lowest_temp)
{
    int year, month, day;
    double min_temp, avg_temp, max_temp, snow, rain, wind;

    fin >> year >> month >> day >> min_temp >> avg_temp >> max_temp >> snow >> rain >> wind;

    if (fin.fail())
    return;

    if (max_temp > highest_temp)
    highest_temp = max_temp;
    if (min_temp < lowest_temp)
    lowest_temp = min_temp;

    double x = ((day_of_the_year(month,day)) * 1.8) + 50;
    double y_max = 240 - max_temp * 4;
    double y_min = 240 - min_temp * 4;
    double y_wind = 400 - wind * 4;

    set_pen_width(3);

    set_pen_color(color::red);
    move_to(Xmax, Ymax);
    draw_to(x, y_max);

    set_pen_color(color::blue);
    move_to(Xmin, Ymin);
    draw_to(x, y_min);

    set_pen_color(color::light_blue);
    move_to(Xwind, Ywind);
    draw_to(x, y_wind);

    Temps(fin, x, y_max, x, y_min, x, y_wind, highest_temp, lowest_temp);
}

void x_axis_month(int month)
{
    if (month > 12)
    return;

    double x = (day_of_the_year(month, 1) * 1.8) + 50;

    set_pen_color(color::grey);
    move_to(x, 40.0);
    draw_to(x, 440.0);

    string initial;
    if (month == 1)
    initial = "J";
    if (month == 2)
    initial = "F";
    if (month == 3)
    initial = "M";
    if (month == 4)
    initial = "A";
    if (month == 5)
    initial = "M";
    if (month == 6)
    initial = "J";
    if (month == 7)
    initial = "J";
    if (month == 8)
    initial = "A";
    if (month == 9)
    initial = "S";
    if (month == 10)
    initial = "O";
    if (month == 11)
    initial = "N";
    if (month == 12)
    initial = "D";

    double next_x = (day_of_the_year(month + 1, 1) * 1.8) + 50;

    if (month == 12)
    next_x = (365 * 1.8) + 50;
    else
    next_x = (day_of_the_year(month + 1, 1) * 1.8) + 50;

    double letter = (x + next_x) / 2;

    set_pen_color(color::magenta);
    set_font_size(20);
    move_to(letter - 5, 460.0);

    write_string(initial);
    x_axis_month(month + 1);
}

void y_axis_temp(int temp)
{
    if (temp > 100)
    return;

    double y = 440 - temp * 4;

    set_pen_color(color::black);
    move_to(50.0, y);
    draw_to(709.0, y);

    set_pen_color(color::magenta);
    set_font_size(20);
    move_to(20.0, y);
    write_string(temp);

    y_axis_temp(temp + 10);
}

void max_and_min(double highest_temp, double lowest_temp)
{
    double y_high = 240 - highest_temp * 4;
    double y_low = 240 - lowest_temp * 4;

    set_pen_width(2);
    set_pen_color(color::orange);

    move_to(50.0, y_high);
    draw_to(709.0, y_high);
    move_to(50.0, y_low);
    draw_to(709.0, y_low);
}

void graph()
{
    make_window(800, 600);

    set_pen_color(color::black);
    move_to(50.0, 40.0);
    draw_to(50.0, 440.0);
    move_to(709.0, 40.0);
    draw_to(709.0, 440.0);

    x_axis_month(1);
    y_axis_temp(0);
}

void main()
{
    graph();

    ifstream fin("MIAMI-FL.txt");

    if (fin.fail())
    {
        cout << "The file didn't open!\n";
    }

    int year, month, day;
    double min_temp, avg_temp, max_temp, snow, rain, wind;

    fin >> year >> month >> day >> min_temp >> avg_temp >> max_temp >> snow >> rain >> wind;

    double x1 = (day_of_the_year(month, day) * 1.8) + 50;
    double y1 = 240 - max_temp * 4;
    double y2 = 240 - min_temp * 4;
    double y3 = 240 - wind * 4;
    double highest_temp = max_temp;
    double lowest_temp = min_temp;

    Temps(fin, x1, y1, x1, y2, x1, y3, highest_temp, lowest_temp);

    fin.close();

    max_and_min(highest_temp, lowest_temp);
}

// 8. Last thing before you go

// Hopeless, Missouri:

#include "library.h"

int length_of_a_month(const int month)
{
    if (month == 1)
    return 31;
    if (month == 2)
    return 28;
    if (month == 3)
    return 31;
    if (month == 4)
    return 30;
    if (month == 5)
    return 31;
    if (month == 6)
    return 30;
    if (month == 7)
    return 31;
    if (month == 8)
    return 31;
    if (month == 9)
    return 30;
    if (month == 10)
    return 31;
    if (month == 11)
    return 30;
    if (month == 31)
    return 31;

    return 0;
}

int day_of_the_year(const int month, const int day)
{
    if (month == 1) return day;
    return length_of_a_month(month - 1) + day_of_the_year(month - 1, day);
}

void Temps(ifstream & fin, double Xmax, double Ymax, double Xmin, double Ymin, double Xwind, double Ywind, double & highest_temp, double & lowest_temp)
{
    int year, month, day;
    double min_temp, avg_temp, max_temp, snow, rain, wind;

    fin >> year >> month >> day >> min_temp >> avg_temp >> max_temp >> snow >> rain >> wind;

    if (fin.fail())
    return;

    if (max_temp > highest_temp)
    highest_temp = max_temp;
    if (min_temp < lowest_temp)
    lowest_temp = min_temp;

    double x = ((day_of_the_year(month,day)) * 1.8) + 50;
    double y_max = 240 - max_temp * 4;
    double y_min = 240 - min_temp * 4;
    double y_wind = 400 - wind * 4;

    set_pen_width(3);

    set_pen_color(color::red);
    move_to(Xmax, Ymax);
    draw_to(x, y_max);

    set_pen_color(color::blue);
    move_to(Xmin, Ymin);
    draw_to(x, y_min);

    set_pen_color(color::light_blue);
    move_to(Xwind, Ywind);
    draw_to(x, y_wind);

    Temps(fin, x, y_max, x, y_min, x, y_wind, highest_temp, lowest_temp);
}

void x_axis_month(int month)
{
    if (month > 12)
    return;

    double x = (day_of_the_year(month, 1) * 1.8) + 50;

    set_pen_color(color::grey);
    move_to(x, 40.0);
    draw_to(x, 440.0);

    string initial;
    if (month == 1)
    initial = "J";
    if (month == 2)
    initial = "F";
    if (month == 3)
    initial = "M";
    if (month == 4)
    initial = "A";
    if (month == 5)
    initial = "M";
    if (month == 6)
    initial = "J";
    if (month == 7)
    initial = "J";
    if (month == 8)
    initial = "A";
    if (month == 9)
    initial = "S";
    if (month == 10)
    initial = "O";
    if (month == 11)
    initial = "N";
    if (month == 12)
    initial = "D";

    double next_x = (day_of_the_year(month + 1, 1) * 1.8) + 50;

    if (month == 12)
    next_x = (365 * 1.8) + 50;
    else
    next_x = (day_of_the_year(month + 1, 1) * 1.8) + 50;

    double letter = (x + next_x) / 2;

    set_pen_color(color::magenta);
    set_font_size(20);
    move_to(letter - 5, 460.0);

    write_string(initial);
    x_axis_month(month + 1);
}

void y_axis_temp(int temp)
{
    if (temp > 100)
    return;

    double y = 440 - temp * 4;

    set_pen_color(color::black);
    move_to(50.0, y);
    draw_to(709.0, y);

    set_pen_color(color::magenta);
    set_font_size(20);
    move_to(20.0, y);
    write_string(temp);

    y_axis_temp(temp + 10);
}

void max_and_min(double highest_temp, double lowest_temp)
{
    double y_high = 240 - highest_temp * 4;
    double y_low = 240 - lowest_temp * 4;

    set_pen_width(2);
    set_pen_color(color::orange);

    move_to(50.0, y_high);
    draw_to(709.0, y_high);
    move_to(50.0, y_low);
    draw_to(709.0, y_low);
}

void graph()
{
    make_window(800, 600);

    set_pen_color(color::black);
    move_to(50.0, 40.0);
    draw_to(50.0, 440.0);
    move_to(709.0, 40.0);
    draw_to(709.0, 440.0);

    x_axis_month(1);
    y_axis_temp(0);
}

void main()
{
    graph();

    ifstream fin("HOPELESS-MO.txt");

    if (fin.fail())
    {
        cout << "The file didn't open!\n";
    }

    int year, month, day;
    double min_temp, avg_temp, max_temp, snow, rain, wind;

    fin >> year >> month >> day >> min_temp >> avg_temp >> max_temp >> snow >> rain >> wind;

    double x1 = (day_of_the_year(month, day) * 1.8) + 50;
    double y1 = 240 - max_temp * 4;
    double y2 = 240 - min_temp * 4;
    double y3 = 240 - wind * 4;
    double highest_temp = max_temp;
    double lowest_temp = min_temp;

    Temps(fin, x1, y1, x1, y2, x1, y3, highest_temp, lowest_temp);

    fin.close();

    max_and_min(highest_temp, lowest_temp);
}

// Detroit, Michigan:

#include "library.h"

int length_of_a_month(const int month)
{
    if (month == 1)
    return 31;
    if (month == 2)
    return 28;
    if (month == 3)
    return 31;
    if (month == 4)
    return 30;
    if (month == 5)
    return 31;
    if (month == 6)
    return 30;
    if (month == 7)
    return 31;
    if (month == 8)
    return 31;
    if (month == 9)
    return 30;
    if (month == 10)
    return 31;
    if (month == 11)
    return 30;
    if (month == 31)
    return 31;

    return 0;
}

int day_of_the_year(const int month, const int day)
{
    if (month == 1) return day;
    return length_of_a_month(month - 1) + day_of_the_year(month - 1, day);
}

void Temps(ifstream & fin, double Xmax, double Ymax, double Xmin, double Ymin, double Xwind, double Ywind, double & highest_temp, double & lowest_temp)
{
    int year, month, day;
    double min_temp, avg_temp, max_temp, snow, rain, wind;

    fin >> year >> month >> day >> min_temp >> avg_temp >> max_temp >> snow >> rain >> wind;

    if (fin.fail())
    return;

    if (max_temp > highest_temp)
    highest_temp = max_temp;
    if (min_temp < lowest_temp)
    lowest_temp = min_temp;

    double x = ((day_of_the_year(month,day)) * 1.8) + 50;
    double y_max = 240 - max_temp * 4;
    double y_min = 240 - min_temp * 4;
    double y_wind = 400 - wind * 4;

    set_pen_width(3);

    set_pen_color(color::red);
    move_to(Xmax, Ymax);
    draw_to(x, y_max);

    set_pen_color(color::blue);
    move_to(Xmin, Ymin);
    draw_to(x, y_min);

    set_pen_color(color::light_blue);
    move_to(Xwind, Ywind);
    draw_to(x, y_wind);

    Temps(fin, x, y_max, x, y_min, x, y_wind, highest_temp, lowest_temp);
}

void x_axis_month(int month)
{
    if (month > 12)
    return;

    double x = (day_of_the_year(month, 1) * 1.8) + 50;

    set_pen_color(color::grey);
    move_to(x, 40.0);
    draw_to(x, 440.0);

    string initial;
    if (month == 1)
    initial = "J";
    if (month == 2)
    initial = "F";
    if (month == 3)
    initial = "M";
    if (month == 4)
    initial = "A";
    if (month == 5)
    initial = "M";
    if (month == 6)
    initial = "J";
    if (month == 7)
    initial = "J";
    if (month == 8)
    initial = "A";
    if (month == 9)
    initial = "S";
    if (month == 10)
    initial = "O";
    if (month == 11)
    initial = "N";
    if (month == 12)
    initial = "D";

    double next_x = (day_of_the_year(month + 1, 1) * 1.8) + 50;

    if (month == 12)
    next_x = (365 * 1.8) + 50;
    else
    next_x = (day_of_the_year(month + 1, 1) * 1.8) + 50;

    double letter = (x + next_x) / 2;

    set_pen_color(color::magenta);
    set_font_size(20);
    move_to(letter - 5, 460.0);

    write_string(initial);
    x_axis_month(month + 1);
}

void y_axis_temp(int temp)
{
    if (temp > 100)
    return;

    double y = 440 - temp * 4;

    set_pen_color(color::black);
    move_to(50.0, y);
    draw_to(709.0, y);

    set_pen_color(color::magenta);
    set_font_size(20);
    move_to(20.0, y);
    write_string(temp);

    y_axis_temp(temp + 10);
}

void max_and_min(double highest_temp, double lowest_temp)
{
    double y_high = 240 - highest_temp * 4;
    double y_low = 240 - lowest_temp * 4;

    set_pen_width(2);
    set_pen_color(color::orange);

    move_to(50.0, y_high);
    draw_to(709.0, y_high);
    move_to(50.0, y_low);
    draw_to(709.0, y_low);
}

void graph()
{
    make_window(800, 600);

    set_pen_color(color::black);
    move_to(50.0, 40.0);
    draw_to(50.0, 440.0);
    move_to(709.0, 40.0);
    draw_to(709.0, 440.0);

    x_axis_month(1);
    y_axis_temp(0);
}

void main()
{
    graph();

    ifstream fin("DETROIT-MI.txt");

    if (fin.fail())
    {
        cout << "The file didn't open!\n";
    }

    int year, month, day;
    double min_temp, avg_temp, max_temp, snow, rain, wind;

    fin >> year >> month >> day >> min_temp >> avg_temp >> max_temp >> snow >> rain >> wind;

    double x1 = (day_of_the_year(month, day) * 1.8) + 50;
    double y1 = 240 - max_temp * 4;
    double y2 = 240 - min_temp * 4;
    double y3 = 240 - wind * 4;
    double highest_temp = max_temp;
    double lowest_temp = min_temp;

    Temps(fin, x1, y1, x1, y2, x1, y3, highest_temp, lowest_temp);

    fin.close();

    max_and_min(highest_temp, lowest_temp);
}
