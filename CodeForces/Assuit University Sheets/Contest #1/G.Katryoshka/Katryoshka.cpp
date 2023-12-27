#include <iostream>

using namespace std;

// First solution to the problem
void solution1()
{
    // Variables to store the count of eyes, mouth, body, and the result
    long long eye, mouth, body, num;
    cin >> eye >> mouth >> body;
    num = 0;

    // Check if there are non-zero eyes and body
    if (eye != 0 && body != 0)
    {
        // Check which part (eyes or body) dominates the mouth
        if (mouth >= eye && mouth >= body && eye != 0 && body != 0)
        {
            // If mouth is dominant, select the smaller of eyes and body
            if (eye >= body)
            {
                num = body;
            }
            else if (body >= eye)
            {
                num = eye;
            }
        }
        else if (eye <= mouth && eye <= body)
        {
            // If eyes are the smallest, select eyes
            num = eye;
        }
        else if (body <= mouth && body <= eye)
        {
            // If body is the smallest, select body
            num = body;
        }
        else if (mouth <= body && mouth <= eye)
        {
            // If mouth is the smallest, distribute it among eyes and body
            num += mouth;
            eye -= mouth;
            body -= mouth;

            // Check how many eyes can be paired with body
            if (eye / 2 <= body)
            {
                // If the number of eyes is even, distribute evenly
                if (eye % 2 == 0)
                {
                    eye = eye / 2;
                    num += eye;
                }
                // If the number of eyes is odd, distribute one less eye to maintain even pairs
                else
                {
                    eye -= 1;
                    eye = eye / 2;
                    num += eye;
                }
            }
            // If there are more eyes than body, distribute all remaining body parts
            else
            {
                num += body;
            }
        }
    }
    // Print the result
    cout << num;
}

// Second solution to the problem
void solution2()
{
    // Variables to store the count of eyes, mouth, body, and the result
    long long eyes, mouth, body;
    cin >> eyes >> mouth >> body;
    long long counter = 0;

    // Check if there are no eyes or body
    if (eyes == 0 || body == 0)
    {
        cout << 0;
        return;
    }

    // If there are eyes and mouth, distribute the mouth parts evenly among eyes and body
    if (mouth > 0)
    {
        long long min_ = min(eyes, min(body, mouth));

        counter += min_;
        eyes -= min_;
        mouth -= min_;
        body -= min_;
    }

    // If there are eyes and body, pair them and count the result
    if (eyes > 0 && body > 0)
    {
        eyes /= 2;
        long long min_ = min(eyes, body);
        counter += min_;
    }

    // Print the result
    cout << counter;
}

// Main function
int main()
{
    // Call the first solution
    solution1();

    // Alternatively, call the second solution
    // solution2();

    return 0;
}
