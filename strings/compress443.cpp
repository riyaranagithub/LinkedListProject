#include <iostream>
#include <vector>
#include <string>

using namespace std;

int compress(vector<char> &chars)
{
    int index = 0; // Position to write compressed char
    int count = 1;

    for (int i = 0; i < chars.size(); i++)
    {
        // Check if next char is same
        if (i + 1 < chars.size() && chars[i] == chars[i + 1])
        {
            count++;
        }
        else
        {
            chars[index++] = chars[i]; // Write character

            if (count > 1)
            {
                string countStr = to_string(count);
                for (char digit : countStr)
                {
                    chars[index++] = digit;
                }
            }

            count = 1; // Reset count
        }
    }

    // Resize the vector to the new length (optional but safer)
    chars.resize(index);

    return index;
}

int main()
{
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c'};
    int newLength = compress(chars);
    
    cout << "Compressed length: " << newLength << endl;
    cout << "Compressed chars: ";
    for (int i = 0; i < newLength; ++i)
    {
        cout << chars[i] << " ";
    }
    cout << endl;

    return 0;
}
