Pod::Spec.new do |s|
  s.name         = "Hydra"
  s.version      = "3.0.4"
  s.summary      = "Hydra release."
  s.description  = <<-DESC
                   Hydra release.
                   DESC
  s.homepage     = "https://github.com/HydraFramework/release-ios"
  s.license      = "MIT"
  s.author       = { "samchang" => "sam.chang@me.com" }
  s.platform     = :ios, "5.1.1"
  s.source       = { :git => "https://github.com/HydraFramework/release-ios.git", :tag => "v3.0.4" }
  s.ios.vendored_frameworks = 'EOS.framework'

  s.dependency 'DTCoreText', '~> 1.6.12'
  s.dependency 'TouchJSON', '~> 1.1'
  s.dependency 'ASIHTTPRequest', '~> 1.8.2'
  s.dependency 'CocoaAsyncSocket', '~> 7.3.5'
  s.dependency 'FMDB', '~> 2.3'
  s.dependency 'Reachability', '~> 3.1.1'
  s.dependency 'ZipArchive', '~> 1.2.0'
  s.dependency 'UIDevice-Hardware', '~> 0.1.3'
  s.dependency 'NSData+Base64', '~> 1.0.0'
  s.dependency 'ZBarSDK', '~> 1.3.1'
  s.dependency 'GZIP', '~> 1.0.2'
  s.dependency 'OpenSSL-Universal', '~> 1.0.1.h'

end
