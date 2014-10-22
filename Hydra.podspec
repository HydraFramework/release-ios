Pod::Spec.new do |s|
  s.name         = "Hydra"
  s.version      = "3.1.8"
  s.summary      = "Hydra release."
  s.description  = <<-DESC
                   Hydra release 3.x.
                   DESC
  s.homepage     = "https://github.com/HydraFramework/release-ios"
  s.license      = "MIT"
  s.author       = { "samchang" => "sam.chang@me.com" }
  s.platform     = :ios, "6.0.0"
  s.source       = { :git => "http://git.luafan.com/release-ios.git", :tag => "v3.1.8" }
  s.frameworks   = 'AssetsLibrary', 'MessageUI', 'AddressBookUI', 'AddressBook', 'Accelerate', 'MapKit', 'AudioToolbox', 'CoreTelephony', 'QuickLook', 'Social', 'CoreLocation'
  s.libraries = 'resolv'

  s.default_subspec = 'Stable'

  s.subspec 'Stable' do |ss|
    ss.resource = 'Stable/builtin'
    ss.ios.vendored_frameworks = 'Stable/EOS.framework'
  end

  s.subspec 'Release52' do |ss|
    ss.resource = 'Release/builtin'
    ss.ios.vendored_frameworks = 'Release/EOS.framework'
  end

  s.subspec 'Debug52' do |ss|
    ss.resource = 'Debug/builtin'
    ss.ios.vendored_frameworks = 'Debug/EOS.framework'
  end

  s.dependency 'DTCoreText', '~> 1.6.12'
  s.dependency 'TouchJSON', '~> 1.1'
  s.dependency 'ASIHTTPRequest', '~> 1.8.2'
  s.dependency 'CocoaAsyncSocket', '~> 7.3.5'
  s.dependency 'FMDB/common', '~> 2.3'
  s.dependency 'Reachability', '~> 3.1.1'
  s.dependency 'ZipArchive', '~> 1.2.0'
  s.dependency 'UIDevice-Hardware', '~> 0.1.3'
  s.dependency 'NSData+Base64', '~> 1.0.0'
  s.dependency 'ZBarSDK', '~> 1.3.1'
  s.dependency 'GZIP', '~> 1.0.2'
  s.dependency 'AnimatedGIFImageSerialization', '~> 0.2.0'
end
