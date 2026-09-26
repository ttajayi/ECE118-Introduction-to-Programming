// 1. Read the Data

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Person
{
    string ssn;
    int day;
    int month;
    int year;
    string first;
    string last;
    double balance;
};

int main()
{
    Person people[1000];
    int count = 0;

    ifstream fin;

    fin.open("/home/118/peoplefile1.txt");

    if (fin.fail() == true)
    {
        cout << "File can't open :(" << endl;
    }

    while (fin >> people[count].ssn
    >> people[count].day
    >> people[count].month
    >> people[count].year
    >> people[count].first
    >> people[count].last
    >> people[count].balance)
    {
        count = count + 1;
    }

    fin.close();

    cout << "Number of people read: " << count << endl;
    cout << "First 10 records:";

    int n = 0;
    while (n < 10 && n < count)
    {
        cout << people[n].ssn << " " << people[n].day << " " << people[n].month << " " << people[n].year << " " << people[n].first << " " << people[n].last << " " << people[n].balance << endl;

        n = n + 1;
    }

}

// 2. Basic search

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Person
{
    string ssn;
    int day;
    int month;
    int year;
    string first;
    string last;
    double balance;
};

void search(Person people[], int count)
{
    string name;
    cout << "Enter name: ";
    cin >> name;

    int n = 0;
    int results = 0;

    while (n < count)
    {
        if (people[n].first == name || people[n].last == name)
        {
            cout << people[n].ssn << " " << people[n].day << " " << people[n].month << " " << people[n].year << " " << people[n].first << " " << people[n].last << " " << people[n].balance << endl;
            results = results + 1;
        }

        n = n + 1;
    }

    if (results == 0)
    {
        cout << "No matches found for " << name << endl;
    }
}

int main()
{
    Person people[1000];
    int count = 0;

    ifstream fin;

    fin.open("/home/118/peoplefile1.txt");

    if (fin.fail() == true)
    {
        cout << "Can't open file :(" << endl;
    }

    while (fin >> people[count].ssn
    >> people[count].day
    >> people[count].month
    >> people[count].year
    >> people[count].first
    >> people[count].last
    >> people[count].balance)
    {
        count = count + 1;
    }

    fin.close();

    search(people,count);
}

// 3. Find the oldest

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Person
{
    string ssn;
    int day;
    int month;
    int year;
    string first;
    string last;
    double balance;
};

void oldest_person(Person people[], int count)
{
    int oldest = 0;
    int n = 1;

    while (n < count)
    {
        if (people[n].year < people[oldest].year)
        {
            oldest = n;
        }
        else if (people[n].year == people[oldest].year && people[n].month < people[oldest].month)
        {
            oldest = n;
        }
        else if (people[n].year == people[oldest].year && people[n].month == people[oldest].month && people[n].day < people[oldest].day)
        {
            oldest = n;
        }

        n = n + 1;
    }

    cout << "Oldest person: " << endl;
    cout << people[oldest].ssn << " " << people[oldest].day << " " << people[oldest].month << " " << people[oldest].year << " " << people[oldest].first << " " << people[oldest].last << " "<< people[n].balance << endl;

}

int main()
{
    Person people[1000];
    int count = 0;

    ifstream fin;

    fin.open("/home/118/peoplefile1.txt");

    if (fin.fail() == true)
    {
        cout << "Can't open file :(" << endl;
    }

    while (fin >> people[count].ssn
    >> people[count].day
    >> people[count].month
    >> people[count].year
    >> people[count].first
    >> people[count].last
    >> people[count].balance)
    {
        count = count + 1;
    }

    fin.close();

    oldest_person(people,count);
}

// 4. Promote the youngest

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Person
{
    string ssn;
    int day;
    int month;
    int year;
    string first;
    string last;
    double balance;
};

int youngest_person(Person people[], int count)
{
    int youngest = 0;
    int n = 1;

    while (n < count)
    {
        if (people[n].year > people[youngest].year)
        {
            youngest = n;
        }
        else if (people[n].year == people[youngest].year && people[n].month > people[youngest].month)
        {
            youngest = n;
        }
        else if (people[n].year == people[youngest].year && people[n].month == people[youngest].month && people[n].day > people[youngest].day)
        {
            youngest = n;
        }

        n = n + 1;
    }

    cout << "The youngest person has moved to first position (index 0): " << endl;
    cout << people[youngest].ssn << " " << people[youngest].day << " " << people[youngest].month << " " << people[youngest].year << " " << people[youngest].first << " " << people[youngest].last << " " << people[youngest].balance << endl;

}

void swapping(Person &a, Person &b)
{
    Person temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    Person people[1000];
    int count = 0;

    ifstream fin;

    fin.open("/home/118/peoplefile1.txt");

    if (fin.fail() == true)
    {
        cout << "Can't open file :(" << endl;
    }

    while (fin >> people[count].ssn
    >> people[count].day
    >> people[count].month
    >> people[count].year
    >> people[count].first
    >> people[count].last
    >> people[count].balance)
    {
        count = count + 1;
    }

    fin.close();

    int youngest_index = youngest_person(people, count);
    swapping(people[0], people[youngest_index]);
    youngest_person(people,count);

    cout << people[0].ssn << " " << endl
    << people[0].day << " "
    << people[0].month << " "
    << people[0].year << " "
    << people[0].first << " "
    << people[0].last << " "
    << people[0].balance << endl;
}

// 5. Now promote the second youngest

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Person
{
    string ssn;
    int day;
    int month;
    int year;
    string first;
    string last;
    double balance;
};

int age_range(Person people[], int start, int end)
{
    int youngest = start;
    int n = start + 1;

    while (n <= end)
    {
        if (people[n].year > people[youngest].year)
        {
            youngest = n;
        }
        else if (people[n].year == people[youngest].year && people[n].month > people[youngest].month)
        {
            youngest = n;
        }
        else if (people[n].year == people[youngest].year && people[n].month == people[youngest].month && people[n].day > people[youngest].day)
        {
            youngest = n;
        }

        n = n + 1;
    }

    return youngest;
}

void swapping(Person &a, Person &b)
{
    Person temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    Person people[1000];
    int count = 0;

    ifstream fin;

    fin.open("/home/118/peoplefile1.txt");

    if (fin.fail() == true)
    {
        cout << "Can't open file :(" << endl;
    }

    while (fin >> people[count].ssn
    >> people[count].day
    >> people[count].month
    >> people[count].year
    >> people[count].first
    >> people[count].last
    >> people[count].balance)
    {
        count = count + 1;
    }

    fin.close();

    int first_youngest = age_range(people, 0, count - 1);
    swapping(people[0], people[first_youngest]);

    int second_youngest = age_range(people, 1, count - 1);
    swapping(people[1], people[second_youngest]);

    cout << "The youngest person has been moved to 1st position (index 0): " << endl;
    cout << people[0].ssn << " " << people[0].day << " " << people[0].month << " " << people[0].year << " " << people[0].first << " " << people[0].last << " " << people[0].balance << endl;
    cout << "The second youngest has been moved to 2nd position (index 1): " << endl;
    cout << people[1].ssn << " " << people[1].day << " " << people[1].month << " " << people[1].year << " " << people[1].first << " " << people[1].last << " " << people[1].balance << endl;

}

// 6. More of the same

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Person
{
    string ssn;
    int day;
    int month;
    int year;
    string first;
    string last;
    double balance;
};

int age_range(Person people[], int start, int end)
{
    int youngest = start;
    int n = start + 1;

    while (n <= end)
    {
        if (people[n].year > people[youngest].year)
        {
            youngest = n;
        }
        else if (people[n].year == people[youngest].year && people[n].month > people[youngest].month)
        {
            youngest = n;
        }
        else if (people[n].year == people[youngest].year && people[n].month == people[youngest].month && people[n].day > people[youngest].day)
        {
            youngest = n;
        }

        n = n + 1;
    }

    return youngest;
}

void swapping(Person &a, Person &b)
{
    Person temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    Person people[1000];
    int count = 0;

    ifstream fin;

    fin.open("/home/118/peoplefile1.txt");

    if (fin.fail() == true)
    {
        cout << "Can't open file :(" << endl;
    }

    while (fin >> people[count].ssn
    >> people[count].day
    >> people[count].month
    >> people[count].year
    >> people[count].first
    >> people[count].last
    >> people[count].balance)
    {
        count = count + 1;
    }

    fin.close();

    int first_youngest = age_range(people, 0, count - 1);
    swapping(people[0], people[first_youngest]);

    int second_youngest = age_range(people, 1, count - 1);
    swapping(people[1], people[second_youngest]);

    int third_youngest = age_range(people, 2, count - 1);
    swapping(people[2], people[third_youngest]);

    cout << "The youngest person has been moved to 1st position (index 0): " << endl;
    cout << people[0].ssn << " " << people[0].day << " " << people[0].month << " " << people[0].year << " " << people[0].first << " " << people[0].last << " " << people[0].balance << endl;
    cout << "The second youngest person has been moved to 2nd position (index 1): " << endl;
    cout << people[1].ssn << " " << people[1].day << " " << people[1].month << " " << people[1].year << " " << people[1].first << " " << people[1].last << " " << people[1].balance << endl;
    cout << "The third youngest person has been moved to 3rd position (index 2): " << endl;
    cout << people[2].ssn << " " << people[2].day << " " << people[2].month << " " << people[2].year << " " << people[2].first << " " << people[2].last << " " << people[2].balance << endl;>

}

// 7. The ultimate demand

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Person
{
    string ssn;
    int day;
    int month;
    int year;
    string first;
    string last;
    double balance;
};

int age_range(Person people[], int start, int end)
{
    int youngest = start;
    int n = start + 1;

    while (n <= end)
    {
        if (people[n].year > people[youngest].year)
        {
            youngest = n;
        }
        else if (people[n].year == people[youngest].year && people[n].month > people[youngest].month)
        {
            youngest = n;
        }
        else if (people[n].year == people[youngest].year && people[n].month == people[youngest].month && people[n].day > people[youngest].day)
        {
            youngest = n;
        }

        n = n + 1;
    }

    return youngest;
}

void swapping(Person &a, Person &b)
{
    Person temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    Person people[1000];
    int count = 0;

    ifstream fin;

    fin.open("/home/118/peoplefile1.txt");

    if (fin.fail() == true)
    {
        cout << "Can't open file :(" << endl;
    }

    while (fin >> people[count].ssn
    >> people[count].day
    >> people[count].month
    >> people[count].year
    >> people[count].first
    >> people[count].last
    >> people[count].balance)
    {
        count = count + 1;
    }

    fin.close();

    int start = 0;
    while (start < count - 1)
    {
        int youngest = age_range(people, start, count - 1);
        swapping(people[start], people[youngest]);
        start = start + 1;
    }

    cout << "Everyone in order from youngest to oldest: " << endl;

    int n = 0;
    while (n < count)
    {
        cout << people[n].ssn << " " << people[n].day << " " << people[n].month << " " << people[n].year << " " << people[n].first << " " << people[n].last << " " << people[n].balance << e>
        n = n + 1;
    }
}

// 8. Sorting the file

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Person
{
    string ssn;
    int day;
    int month;
    int year;
    string first;
    string last;
    double balance;
};

int age_range(Person people[], int start, int end)
{
    int youngest = start;
    int n = start + 1;

    while (n <= end)
    {
        if (people[n].year > people[youngest].year)
        {
            youngest = n;
        }
        else if (people[n].year == people[youngest].year && people[n].month > people[youngest].month)
        {
            youngest = n;
        }
        else if (people[n].year == people[youngest].year && people[n].month == people[youngest].month && people[n].day > people[youngest].day)
        {
            youngest = n;
        }

        n = n + 1;
    }

    return youngest;
}

void swapping(Person &a, Person &b)
{
    Person temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    Person people[1000];
    int count = 0;

    ifstream fin;

    fin.open("/home/118/peoplefile1.txt");

    if (fin.fail() == true)
    {
        cout << "Can't open file :(" << endl;
    }

    while (fin >> people[count].ssn
    >> people[count].day
    >> people[count].month
    >> people[count].year
    >> people[count].first
    >> people[count].last
    >> people[count].balance)
    {
        count = count + 1;
    }

    fin.close();

    int start = 0;
    while (start < count - 1)
    {
        int youngest = age_range(people, start, count - 1);
        swapping(people[start], people[youngest]);
        start = start + 1;
    }

    ofstream fout;
    fout.open("sorted_peoplefile1.txt");

    int n = 0;
    while (n < count)
    {
        cout << people[n].ssn << " " << people[n].day << " " << people[n].month << " " << people[n].year << " " << people[n].first << " " << people[n].last << " " << people[n].balance << e>
        n = n + 1;
    }

    fout.close();

    cout << "Sorted data saved to sorted_peoplefile1.txt" << endl;
}

// 9. How fast is it?

// /home/118/peoplefile1.txt:

#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
#include <sys/resource.h>
using namespace std;

double get_cpu_time()
{ struct rusage ruse;
getrusage(RUSAGE_SELF, &ruse);
return ruse.ru_utime.tv_sec+ruse.ru_utime.tv_usec/1000000.0 +
ruse.ru_stime.tv_sec+ruse.ru_stime.tv_usec/1000000.0; }

struct Person
{
    string ssn;
    int day;
    int month;
    int year;
    string first;
    string last;
    double balance;
};

int age_range(Person people[], int start, int end)
{
    int youngest = start;
    int n = start + 1;

    while (n <= end)
    {
        if (people[n].year > people[youngest].year)
        {
            youngest = n;
        }
        else if (people[n].year == people[youngest].year && people[n].month > people[youngest].month)
        {
            youngest = n;
        }
        else if (people[n].year == people[youngest].year && people[n].month == people[youngest].month && people[n].day > people[youngest].day)
        {
            youngest = n;

        }

        n = n + 1;
    }

    return youngest;
}

void swapping(Person &a, Person &b)
{
    Person temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    Person people[1000000];
    int count = 0;

    ifstream fin;

    fin.open("/home/118/peoplefile1.txt");

    if (fin.fail() == true)
    {
        cout << "Can't open file :(" << endl;
    }

    while (fin >> people[count].ssn
    >> people[count].day
    >> people[count].month
    >> people[count].year
    >> people[count].first
    >> people[count].last
    >> people[count].balance)
    {
        count = count + 1;
    }

    fin.close();

    double starting_time = get_cpu_time();

    int start = 0;
    while (start < count - 1)
    {
        int youngest = age_range(people, start, count - 1);
        swapping(people[start], people[youngest]);
        start = start + 1;
    }

    double end_time = get_cpu_time();

    cout << "Sorting completed in " << (end_time - starting_time) << " seconds" << endl;
}

// /home/118/peoplefile2.txt:

#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
#include <sys/resource.h>
using namespace std;

double get_cpu_time()
{ struct rusage ruse;
getrusage(RUSAGE_SELF, &ruse);
return ruse.ru_utime.tv_sec+ruse.ru_utime.tv_usec/1000000.0 +
ruse.ru_stime.tv_sec+ruse.ru_stime.tv_usec/1000000.0; }

struct Person
{
    string ssn;
    int day;
    int month;
    int year;
    string first;
    string last;
    double balance;
};

int age_range(Person people[], int start, int end)
{
    int youngest = start;
    int n = start + 1;

    while (n <= end)
    {
        if (people[n].year > people[youngest].year)
        {
            youngest = n;
        }
        else if (people[n].year == people[youngest].year && people[n].month > people[youngest].month)
        {
            youngest = n;
        }
        else if (people[n].year == people[youngest].year && people[n].month == people[youngest].month && people[n].day > people[youngest].day)
        {
            youngest = n;

        }

        n = n + 1;
    }

    return youngest;
}

void swapping(Person &a, Person &b)
{
    Person temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    Person people[1000000];
    int count = 0;

    ifstream fin;

    fin.open("/home/118/peoplefile2.txt");

    if (fin.fail() == true)
    {
        cout << "Can't open file :(" << endl;
    }

    while (fin >> people[count].ssn
    >> people[count].day
    >> people[count].month
    >> people[count].year
    >> people[count].first
    >> people[count].last
    >> people[count].balance)
    {
        count = count + 1;
    }

    fin.close();

    double starting_time = get_cpu_time();

    int start = 0;
    while (start < count - 1)
    {
        int youngest = age_range(people, start, count - 1);
        swapping(people[start], people[youngest]);
        start = start + 1;
    }

    double end_time = get_cpu_time();

    cout << "Sorting completed in " << (end_time - starting_time) << " seconds" << endl;
}

// /home/118/peoplefile50.txt:

#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
#include <sys/resource.h>
using namespace std;

double get_cpu_time()
{ struct rusage ruse;
getrusage(RUSAGE_SELF, &ruse);
return ruse.ru_utime.tv_sec+ruse.ru_utime.tv_usec/1000000.0 +
ruse.ru_stime.tv_sec+ruse.ru_stime.tv_usec/1000000.0; }

struct Person
{
    string ssn;
    int day;
    int month;
    int year;
    string first;
    string last;
    double balance;
};

int age_range(Person people[], int start, int end)
{
    int youngest = start;
    int n = start + 1;

    while (n <= end)
    {
        if (people[n].year > people[youngest].year)
        {
            youngest = n;
        }
        else if (people[n].year == people[youngest].year && people[n].month > people[youngest].month)
        {
            youngest = n;
        }
        else if (people[n].year == people[youngest].year && people[n].month == people[youngest].month && people[n].day > people[youngest].day)
        {
            youngest = n;

        }

        n = n + 1;
    }

    return youngest;
}

void swapping(Person &a, Person &b)
{
    Person temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    Person people[1000000];
    int count = 0;

    ifstream fin;

    fin.open("/home/118/peoplefile50.txt");

    if (fin.fail() == true)
    {
        cout << "Can't open file :(" << endl;
    }

    while (fin >> people[count].ssn
    >> people[count].day
    >> people[count].month
    >> people[count].year
    >> people[count].first
    >> people[count].last
    >> people[count].balance)
    {
        count = count + 1;
    }

    fin.close();

    double starting_time = get_cpu_time();

    int start = 0;
    while (start < count - 1)
    {
        int youngest = age_range(people, start, count - 1);
        swapping(people[start], people[youngest]);
        start = start + 1;
    }

    double end_time = get_cpu_time();

    cout << "Sorting completed in " << (end_time - starting_time) << " seconds" << endl;
}

// /home/118/peoplefile100.txt:

#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
#include <sys/resource.h>
using namespace std;

double get_cpu_time()
{ struct rusage ruse;
getrusage(RUSAGE_SELF, &ruse);
return ruse.ru_utime.tv_sec+ruse.ru_utime.tv_usec/1000000.0 +
ruse.ru_stime.tv_sec+ruse.ru_stime.tv_usec/1000000.0; }

struct Person
{
    string ssn;
    int day;
    int month;
    int year;
    string first;
    string last;
    double balance;
};

int age_range(Person people[], int start, int end)
{
    int youngest = start;
    int n = start + 1;

    while (n <= end)
    {
        if (people[n].year > people[youngest].year)
        {
            youngest = n;
        }
        else if (people[n].year == people[youngest].year && people[n].month > people[youngest].month)
        {
            youngest = n;
        }
        else if (people[n].year == people[youngest].year && people[n].month == people[youngest].month && people[n].day > people[youngest].day)
        {
            youngest = n;

        }

        n = n + 1;
    }

    return youngest;
}

void swapping(Person &a, Person &b)
{
    Person temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    Person people[1000000];
    int count = 0;

    ifstream fin;

    fin.open("/home/118/peoplefile100.txt");

    if (fin.fail() == true)
    {
        cout << "Can't open file :(" << endl;
    }

    while (fin >> people[count].ssn
    >> people[count].day
    >> people[count].month
    >> people[count].year
    >> people[count].first
    >> people[count].last
    >> people[count].balance)
    {
        count = count + 1;
    }

    fin.close();

    double starting_time = get_cpu_time();

    int start = 0;
    while (start < count - 1)
    {
        int youngest = age_range(people, start, count - 1);
        swapping(people[start], people[youngest]);
        start = start + 1;
    }

    double end_time = get_cpu_time();

    cout << "Sorting completed in " << (end_time - starting_time) << " seconds" << endl;
}
