#include <iostream>
#include <ctime>

using namespace std;

int main () {
    // struct tm dt;
    time_t t;
    time(&t);

    time_t t2 = time(NULL);

    time_t t3 = time(&t3);
    struct tm dt = *localtime(&t3);

    char output[50];

    // dt.tm_year = 0 - 1900;
    // dt.tm_mon = 12 - 10;
    // dt.tm_mday = 32;
    // dt.tm_hour = 12;
    // dt.tm_min = 30;
    // dt.tm_sec = 0;
    // dt.tm_isdst = -1;

    // t2 = mktime(&dt);

    string weekdays[] = {"Sunday", "Monday", "Tuesday", "wednesday", "Thrusday", "Friday", "Saturday"};

    // cout << ctime(&t);
    // cout << ctime(&t2);
    // cout << ctime(&t2);

    cout << dt.tm_hour << endl;
    cout << asctime(&dt);

    cout << "=====" << endl;

    strftime(output, 50, "%B %e, %Y", &dt);
    cout << output << "\n";

    strftime(output, 50, "%I:%M:%S %p", &dt);
    cout << output << "\n";

    strftime(output, 50, "%m/%d/%y", &dt);
    cout << output << "\n";

    strftime(output, 50, "%a %b %e %H:%M:%S %Y", &dt);
    cout << output << "\n";

    time_t now;
    time_t nextyear;
    struct tm dt1;

    now = time(NULL);
    dt1 = *localtime(&now);
    dt1.tm_year = dt1.tm_year + 1;
    dt1.tm_mon = 0;
    dt1.tm_mday = 1;
    dt1.tm_hour = 0;
    dt1.tm_min = 0;
    dt1.tm_sec = 0;
    dt1.tm_isdst = -1;
    nextyear = mktime(&dt1);

    int diff = difftime(nextyear, now);

    clock_t before = clock();
    int k = 0;
    for (int i = 0; i < 1000000000; i++)
    {
        k += i;
    }

    clock_t duration = clock() - before;
    cout << "Duration: " << (float)duration / CLOCKS_PER_SEC << " seconds" << endl;

    cout << diff << " seconds until next year" << endl;
    // cout << "The date is on a " << weekdays[dt.tm_wday] << endl;
    return 0;
}