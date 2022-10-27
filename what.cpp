#include <iostream>
#include <time.h>
#include <chrono>
#include <thread>
using namespace std;

// Prints the word "WHAT" in random places at a quickening pace
// For when you are befuddled
int main()
{
    srand(time(NULL));
    int timeMs = 1000;
    for (float t = 0; t < 40; t += 0.25)
    {
        int indentations = rand() % 50;
        string text = "WHAT";
        text.insert(0, indentations, ' ');
        cout << text << endl;
        this_thread::sleep_for(chrono::milliseconds(timeMs));
        if (timeMs > 100)
        {
            timeMs -= 100;
        }
    }

    return 0;
}