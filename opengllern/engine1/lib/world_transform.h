#ifndef ENGINE1_LIB_WORLD_TRANSFORM_H_
#define ENGINE1_LIB_WORLD_TRANSFORM_H_

#include <eigen3/Eigen/Dense>

namespace Engine1 {

class WorldTransform {
 public:

    WorldTransform(){}

    void SetScale(float x, float y, float z);
    void SetRotation(float x, float y, float z);
    void SetPosition(float x, float y, float z);

    void Translate(float x, float y, float z);
    void Rotate(float x, float y, float z);
    void Scale(float x, float y, float z);

    Eigen::Matrix4f GetMatrix();

 private:
    Eigen::Vector3f scale_;
    Eigen::Vector3f rotation_;
    Eigen::Vector3f position_;
};

} // namespace Engine1

#endif  // ENGINE1_LIB_WORLD_TRANSFORM_H_