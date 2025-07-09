# Vulkan-01

## Drawing a Triangle
- Instance and physical device selection
- Logical device and queue families
- Window surface and swap chain
- Image views and framebuffers
- Render passes
- Graphics pipeline
- Command pools and command buffers
- Main loop

## Api Concepts
- All functions, enums and structs are definied in the vulkan.h header
- Functions habe a lower case vk prefix
- Types like enums and structs habe a Vk prefix
- Enum values habe a VK_ prefix
- The Api heavily uses structs to provide parameters to functions

Example:
```c++ 

VkXXXCreateInfo createInfo{};
createInfo.sType = VK_STRUCTURE_TYPE_XXX_CREATE_INFO;
createInfo.pNext = nullptr;
createInfo.foo = ...;
createInfo.bar = ...;

VkXXX object;
if (vkCreateXXX(&createInfo, nullptr, &object) != VK_SUCCESS) {
    std:cerr << "failed to create object" << std::endl;
    return false
}
```

- You often need to explicitly specify the type of structure in the sType member
- pNext can point to an extension structure 
- Functions that create or destroy an object will have a VkAllocationCallbacks parameter that allows you to use a custom allocator
- Almost all functions return a VkResult that is either VK_SUCCESS or and error code

### Validation Layers
- By default vulkan wont perform many erroc checking
- Vulkan allows you to enable extensive checks throguht a feature known as validation layers
- You can enable and disable them easily
- There are standard validation layers but you can also write your own

