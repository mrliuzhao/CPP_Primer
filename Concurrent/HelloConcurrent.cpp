#include <iostream>
#include <thread>

void hello(){
    std::cout << "Hello Concurrent World!!!" << std::endl;
}


void hello2(){
    std::cout << "Hello Concurrent World Again!!!" << std::endl;
}


int main(){
    // std::thread t(hello);
    // t.join();

    std::thread test_t;
    if (test_t.joinable()) {
        std::cout << "test_t is joinable" << std::endl;
    } else {
        std::cout << "test_t is NOT joinable" << std::endl;
    }
    
    std::cout << "initialize subthread with a task!" << std::endl;
    test_t = std::thread(hello);
    if (test_t.joinable()) {
        std::cout << "test_t is joinable" << std::endl;
    } else {
        std::cout << "test_t is NOT joinable" << std::endl;
    }
    test_t.join();

    std::cout << "after join subthread, reallocate another task again!" << std::endl;
    test_t = std::thread(hello2);
    if (test_t.joinable()) {
        std::cout << "test_t is still joinable" << std::endl;
        test_t.join();
    }



    return EXIT_SUCCESS;
}





