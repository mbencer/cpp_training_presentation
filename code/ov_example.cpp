#include <openvino/openvino.hpp>

int main() {
    ov::Core core;
    const auto model = core.read_model("/home/mbencer/models/mnist-8.onnx");
    std::cout << model->get_name() << std::endl;
    return 0;
}