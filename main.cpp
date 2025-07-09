
#include <exception>
#include <vulkan/vulkan.h>

#include <iostream> 
#include <stdexcept>
#include <cstdlib> 

class HelloTriangleApplication {
public:
    void run() {
        initVulkan();
        mainLoop();
        cleanUp();
    }   

private:

    void initVulkan() {

    }

    void mainLoop() {

    }

    void cleanUp() {

    }

};

int main() {

    HelloTriangleApplication app;

    try {
        app.run();
    } catch (const std::exception& e) {
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}

