#ifndef EXAMPLE_RENDER_H_
#define EXAMPLE_RENDER_H_

#include <atomic>  // C++11

#include "render-config.h"

namespace example {

class Renderer {
 public:
  Renderer() {}
  ~Renderer() {}

  /// Loads glTF mesh data.
  bool LoadGLTFMesh(const char* gltf_filename, float scene_scale);

  /// Builds bvh.
  bool BuildBVH();

  /// Returns false when the rendering was canceled.
  bool Render(RenderLayer* layer, float quat[4], const RenderConfig& config,
              std::atomic<bool>& cancel_flag);
};
};

#endif  // EXAMPLE_RENDER_H_
