#include <iostream>
#include <vector>
#include <sstream>

#include <fstream>
#include <iomanip>
#include <sstream>
#include <string>
#include <math.h>

int get_pose_embedding(std::vector<double> &pose_embedding) {
    pose_embedding.push_back(3.14159);
    return 0;
}

void get_vec(double vec[2]){
    double x1 = 3.14;
    double y1 = 0.12;
    double x2 = 5.189;
    double y2 = 9.185;
    vec[0] = x2 - x1;
    vec[1] = y2 - y1;
    std::cout << "vec[0]: " << vec[0] << "; vec[1]:" << vec[1] << std::endl;
    if (true) {
        double vec_len = sqrt(pow(vec[0], 2.0) + pow(vec[1], 2.0));
        vec[0] = vec[0] / vec_len;
        vec[1] = vec[1] / vec_len;
    }
    std::cout << "After Norm, vec[0]: " << vec[0] << "; vec[1]:" << vec[1] << std::endl;
}

int main(int argc, char* argv[])
{
    std::cout << "Hello World!" << std::endl;
    
    std::string testStr;
    std::cout << "testStr.length(): " << testStr.length() << std::endl;
    testStr += "test";
    std::cout << "testStr: " << testStr << "  testStr.length(): " << testStr.length() << std::endl;

    testStr = "";
    std::cout << "testStr: " << testStr << "  testStr.length(): " << testStr.length() << std::endl;

    std::cout << "Going to get_vector." << std::endl;
    double vec[2] = {0.0, 0.0};
    get_vec(vec);
    std::cout << "in main, vec[0]: " << vec[0] << "; vec[1]:" << vec[1] << std::endl;
    vec[0] = 99.99;
    get_vec(vec);
    std::cout << "in main, vec[0]: " << vec[0] << "; vec[1]:" << vec[1] << std::endl;

    std::cout << "Press Any key to exit..." << std::endl;
    std::cin.get();

    return EXIT_SUCCESS;
}
