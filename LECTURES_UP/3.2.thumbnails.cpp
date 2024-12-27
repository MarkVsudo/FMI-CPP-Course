#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int width, height;
    cout << "Enter image dimensions in pixels: ";
    cin >> width >> height;

    if (width > 0 && height > 0)
    {
        const int THUMB_SIZE = 100;
        int thumbWidth, thumbHeight;

        if (width <= THUMB_SIZE && height <= THUMB_SIZE) // много малка снимка - вмества се без проблеми и без преоразмеряване
            thumbWidth = width;
            thumbHeight = height;
        }
        else if (width > height) // Landscape
        {
            thumbWidth = THUMB_SIZE;
            thumbHeight = THUMB_SIZE * height / width; // важен е редът - ако първо направим
                                                        // делението, ще получим 0!
            // OR:
            // double ratio = (double) height / width;
            // thumbHeight = THUMB_MAX * ratio;
        }
        else // Portrait or square
        {
            thumbHeight = THUMB_SIZE;
            thumbWidth = THUMB_SIZE * width / height;
        }

        cout << "Thumbnail dimensions: " << thumbWidth << "x"
            << thumbHeight << " pixels" << endl;
    }
    else
    {
        cout << "Error! Please enter positive dimensions." << endl;
    }

    return 0;
}

