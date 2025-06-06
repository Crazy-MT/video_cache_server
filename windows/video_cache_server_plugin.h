#ifndef FLUTTER_PLUGIN_VIDEO_CACHE_SERVER_PLUGIN_H_
#define FLUTTER_PLUGIN_VIDEO_CACHE_SERVER_PLUGIN_H_

#include <flutter/method_channel.h>
#include <flutter/plugin_registrar_windows.h>

#include <memory>

namespace video_cache_server {

class VideoCacheServerPlugin : public flutter::Plugin {
 public:
  static void RegisterWithRegistrar(flutter::PluginRegistrarWindows *registrar);

  VideoCacheServerPlugin();

  virtual ~VideoCacheServerPlugin();

  // Disallow copy and assign.
  VideoCacheServerPlugin(const VideoCacheServerPlugin&) = delete;
  VideoCacheServerPlugin& operator=(const VideoCacheServerPlugin&) = delete;

  // Called when a method is called on this plugin's channel from Dart.
  void HandleMethodCall(
      const flutter::MethodCall<flutter::EncodableValue> &method_call,
      std::unique_ptr<flutter::MethodResult<flutter::EncodableValue>> result);
};

}  // namespace video_cache_server

#endif  // FLUTTER_PLUGIN_VIDEO_CACHE_SERVER_PLUGIN_H_
