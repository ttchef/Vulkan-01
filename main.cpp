
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <iostream> 
#include <stdexcept>
#include <cstdlib> 

const uint32_t WIDTH = 800;
const uint32_t HEIGHT = 600;

class HelloTriangleApplication {
public:
    void run() {
        initWindow();
        initVulkan();
        mainLoop();
        cleanUp();
    }   

private:

    GLFWwindow* window;

    void initWindow() {
        if (!glfwInit()) {
            std::cerr << "Failed to initialise GLFW!\n";
            return;
        }
    
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
        glfwWindowHint(GLFW_PLATFORM, GLFW_PLATFORM_WAYLAND);

        window = glfwCreateWindow(WIDTH, HEIGHT, "Vulkan", nullptr, nullptr);
        if (!window) {
            std::cerr << "Failed to create a window!\n";
            return;
        }

    }

    void initVulkan() {

    }

    void mainLoop() {
        while (!glfwWindowShouldClose(window)) {
            glfwPollEvents();
        }
    }

    void cleanUp() {
        glfwDestroyWindow(window);
        glfwTerminate();
    }

};

int main() {

    HelloTriangleApplication app;

    try {
        app.run();
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}

