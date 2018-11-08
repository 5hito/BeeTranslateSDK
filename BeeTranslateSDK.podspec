
Pod::Spec.new do |s|

  s.name         = "BeeTranslateSDK"
  s.version      = "0.0.1"
  s.summary      = "translate sdk"
  s.description  = <<-DESC
    0.0.x:基础功能
                   DESC

  s.license = {"type"=>"MIT", "file"=>"LICENSE"}
  s.author             = { "5hito" => "beemans@foxmail.com" }
  s.homepage     = "https://github.com/5hito/BeeTranslateSDK"
  s.source       = { :git => "https://github.com/5hito/BeeTranslateSDK.git", :tag => s.version.to_s }

  s.source_files  = "lib/Header/*.h"
  s.resources = "lib/Resources/*.bundle"

  s.requires_arc = true
  s.ios.deployment_target    = '8.0'
  s.ios.vendored_libraries = 'lib/libBeeTranslateSDK.a'

  # s.xcconfig = { "HEADER_SEARCH_PATHS" => "$(SDKROOT)/usr/include/libxml2" }

  s.dependency "AFNetworking"

end
