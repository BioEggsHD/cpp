#include <iostream>
#include <cmath>

// Transform structure for better readability
struct Transform {
    double position[3]; // x, y, z
    double rotation[3]; // pitch, yaw, roll
    double size[3];     // width, height, depth
};

// Function to calculate 3D Euclidean distance
double calculateDistance(const Transform& obj1, const Transform& obj2) {
    double dx = obj1.position[0] - obj2.position[0];
    double dy = obj1.position[1] - obj2.position[1];
    double dz = obj1.position[2] - obj2.position[2];
    return std::sqrt(dx * dx + dy * dy + dz * dz);
}

// Function to calculate rotation from one object to face another
void rotateTo(Transform& obj1, const Transform& obj2) {
    double dx = obj2.position[0] - obj1.position[0];
    double dy = obj2.position[1] - obj1.position[1];
    double dz = obj2.position[2] - obj1.position[2];
    
    // Calculate angles
    double horizontalDistance = std::sqrt(dx * dx + dz * dz);
    double pitch = std::atan2(dy, horizontalDistance) * (180.0 / M_PI);
    double yaw = std::atan2(dx, dz) * (180.0 / M_PI);
    
    // Update rotation
    obj1.rotation[0] = pitch; // Pitch (X-axis rotation)
    obj1.rotation[1] = yaw;   // Yaw (Y-axis rotation)
    obj1.rotation[2] = 0.0;   // Roll (Z-axis rotation) not used in this example
}

int main() {
    // Define objects
    Transform camera = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    Transform target = {{10, 10, 10}, {0, 0, 0}, {1, 1, 1}};
    
    // Rotate camera to face the target
    rotateTo(camera, target);
    
    // Output the resulting rotation
    std::cout << "Camera Rotation:\n";
    std::cout << "Pitch: " << camera.rotation[0] << "°\n";
    std::cout << "Yaw: " << camera.rotation[1] << "°\n";
    std::cout << "Roll: " << camera.rotation[2] << "°\n";
    
    return 0;
}
