# video_cache_server

A Flutter plugin that provides video caching functionality by running a local HTTP server to proxy and cache video content.

## Features

- Caches video content for offline playback
- Supports multiple platforms: Android, iOS, macOS, Windows, Linux, and Web
- Handles m3u8 (HLS) video streams
- Supports range requests for efficient streaming
- Customizable cache directory and server configuration

## Getting started

Add the package to your `pubspec.yaml`:

```yaml  
dependencies:  
  video_cache_server: ^0.0.4
```

## Usage
```dart  
import 'package:video_cache_server/video_cache_server.dart';

// Initialize the cache server  
final cacheServer = await VideoCacheServer(
  cacheDir: '/path/to/cache/directory',
  // Set the maximum cache size to 500MB (optional)
  // When the cache size exceeds this limit, the oldest cached files will be automatically deleted.
  maxCacheSize: 500 * 1024 * 1024,
).start();

// Convert a video URL to a cached URL  
final videoUrl = 'https://example.com/video.mp4';
final cachedUrl = cacheServer.getProxyUrl(videoUrl);

// Use the cached URL with your video player  
// ...  

// When done, stop the server  
await cacheServer.stop();
```
