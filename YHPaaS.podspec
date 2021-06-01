#
# Be sure to run `pod lib lint YHPaaS.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'YHPaaS'
  s.version          = '0.1.0'
  s.summary          = 'Modules and components framework for iOS.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
  Modules and components framework for iOS.
                       DESC

  s.homepage         = 'https://github.com/p2max34/YHPaaS'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'p2max34' => '7209415@qq.com' }
  s.source           = { :git => 'https://github.com/p2max34/YHPaaS.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'
  s.vendored_frameworks = ['YHPaaS/Classes/CMSPaaS.framework']
  s.ios.deployment_target = '9.0'

  s.source_files = 'YHPaaS/Classes/**/*'
  s.frameworks = 'Foundation', 'CoreFoundation', 'UIKit'  # 依赖的 frameworks
  s.dependency 'YYCache', '1.0.3'
  s.dependency 'YYModel'
  s.dependency 'KVOController'
  s.dependency 'Masonry', '1.1.0'
  s.dependency 'Aspects', '1.4.1'
  s.dependency 'MJRefresh', '3.5.0'
  s.dependency 'SDWebImage/GIF', '4.4.3'
  s.dependency 'UITableView+FDTemplateLayoutCell', '1.6'
  s.dependency 'KVOController', '1.2.0'
  s.dependency 'AFNetworking', '3.2.1'
  s.dependency 'YYModel', '1.0.4'
  s.dependency 'IQKeyboardManager'
  s.dependency 'SVProgressHUD'
  # s.resource_bundles = {
  #   'YHPaaS' => ['YHPaaS/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
end
