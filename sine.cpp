#include <iostream>
#include <math.h>
#include <chrono>
#include <thread>
using namespace std;

int main()
{
    // Prints a vertical sine wave
    for (float t = 0; t < 40; t += 0.25)
    {
        // PLay with the numbers here to change the amplitude
        int indentations = 26 + sin(t) * 25;
        string text = "SINE";
        text.insert(0, indentations, ' ');
        cout << text << endl;
        this_thread::sleep_for(chrono::milliseconds(100));
    }

    return 0;
}