#include <iostream>
// #include <cstdio>

int a = 99;

int main(int argc, char* argv[])
{
    std::cout << "Hello World!" << std::endl;
    
    std::string argStr = std::string("rtmp://192.168.20.2/live/demo");
    std::cout << "arg count: " << argc << std::endl;
    if (argc > 1) {
        std::cout << "read input file: " << argv[1] << std::endl;
        argStr = std::string(argv[1]);
    }
    const char *filepath = argStr.c_str();
    std::cout << "argStr: " << argStr << std::endl;
    std::cout << "filepath: " << filepath << std::endl;

    if(argStr == "/dev/video0"){
        std::cout << "argv[1] == /dev/video0 " << std::endl;
    }

    int a = 0;
    std::cout << "a = " << a << std::endl;
    std::cout << "::a = " << ::a << std::endl;

    int *pt = NULL;
    pt = &::a;
    std::cout << "pt = " << pt << "; *pt = " << *pt << std::endl;
    
    const char* config = "{\
    \"app_key\":\"45c6af3c98409b18a84451215d0bdd6e\",\
    \"global_config\": {\
    \"db_encrypt_key\": \"xxxxx\",\
    \"preload_attach\": true,\
    \"sdk_log_level\": 1,\
    }}";
    printf("Config:%s \n", config);

    std::cout << "Press Any key to exit..." << std::endl;
    std::cin.get();

    return EXIT_SUCCESS;
}
