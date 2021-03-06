Pod::Spec.new do |s|

  s.name         = "AppOwiz-iOS"
  s.version      = "1.3"
  s.summary      = "AppOwiz-iOS SDK"
  s.description  = <<-DESC
                    Appowiz ios sdk
                   DESC
 s.homepage     = "https://github.com/AppOwiz/AppOwiz-iOS.git"
 s.license      = "MIT"
 s.author       = { "AppOwiz Team" => "techsupport@appowiz.com" }
 s.platform     = :ios
 s.ios.deployment_target = "9.0"
s.source       = {:git => "https://github.com/AppOwiz/AppOwiz-iOS.git" }
 s.requires_arc = true

 s.libraries = 'sqlite3.0','z'
 s.vendored_frameworks = 'AA_HelloApp/appOwiz/AppOwiziOS.framework'

 s.resource = "AA_HelloApp/appOwiz/*.bundle"
 s.source_files  = "AA_HelloApp/appOwiz/*.h", "AA_HelloApp/appOwiz/*.bundle"

  s.xcconfig       = { 'FRAMEWORK_SEARCH_PATHS' => "$(PODS_ROOT)/AppOwiz" }

 s.frameworks = "CoreFoundation", "SystemConfiguration","CoreMedia","QuartzCore","Foundation","UIKit","CoreTelephony","AVFoundation","MobileCoreServices","AudioToolbox","CoreVideo","Security","ImageIO","CoreText"
end
