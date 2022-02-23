#include <iostream>
#include <vector>

using namespace std;

class Image {
    typedef vector<vector<unsigned char>> twoVector;

    public:
        Image(const int height, const int width) {
            twoVector vec(width , vector<unsigned char> (height, 0));
            image = vec;
            // Is this the best way to do this?
        };

        void ToString() {
            for (int i = 0; i < image.size(); i++) {
                for (int j = 0; j < image[i].size(); j++)
                {
                    cout << unsigned(image[i][j]) << " " << ends;
                }   
                cout << endl;
            }
        }

        int getHeight() const {
            return image[0].size();
        };

        int getWidth() const {
            return image.size();
        };

        unsigned getPixel(const int i, const int j) const {
            return unsigned(image[i][j]);
        };

        void updatePixel(const int i, const int j, const unsigned char value) {
            image[i][j] = value;
        };

    private:
        twoVector image;  
};

int main(int argc, char const *argv[])
{
    int height = 3;
    int width = 4;

    Image myImage(width, height);
    // Print image!
    myImage.ToString();

    // Get Pixel Data
    cout << "Pixel: " << myImage.getPixel(1,2) << endl;

    // Update pixel
    myImage.updatePixel(1,2,9);
    myImage.ToString();

    return 0;
}
