Pod::Spec.new do |s|
  s.name         = "Hydra"
  s.version      = "1.0.0"
  s.summary      = "Hydra release."
  s.description  = <<-DESC
                   Hydra release.
                   DESC
  s.homepage     = "https://github.com/HydraFramework/release-ios"
  s.license      = "MIT"
  s.author       = { "samchang" => "sam.chang@me.com" }
  s.platform     = :ios, "5.1.1"
  s.source       = { :git => "https://github.com/HydraFramework/release-ios.git", :tag => "v1.0.0" }
  s.ios.vendored_frameworks = 'EOS.framework'
end
