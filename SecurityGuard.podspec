#
# Be sure to run `pod lib lint UPNetwork.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'SecurityGuard'
  s.version          = '1.27'
  s.summary          = 'encryption'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
  SecurityGuardSDK
  DESC

  s.homepage         = 'https://github.com/zyahs/test_pod/SecurityGuard'

  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'breeze' => 'breeze.zhou@bitget.com' }
  s.source           = { :git => 'https://github.com/zyahs/test_pod.git', :tag => s.version.to_s }
  

  s.ios.deployment_target = '12.0'

   s.swift_version = '5.0'
  s.pod_target_xcconfig = { 'BUILD_LIBRARY_FOR_DISTRIBUTION' => 'YES' }
 s.user_target_xcconfig = { 'BUILD_LIBRARY_FOR_DISTRIBUTION' => 'YES' }


  s.frameworks = 'Foundation', 'UIKit'
  s.vendored_frameworks ='SecurityGuard.xcframework'

    
  
end
