Pod::Spec.new do |s|
  s.name         = "BL_ImagePickerController"
  s.version      = "2.2.6.0"
  s.summary      = "修改TZImagePickerController 新增图片大小判断功能"
  s.homepage     = "https://github.com/IceTears1/TZImagePickerController"
  s.license      = "MIT"
  s.author             = { "binglei" => "642203775@qq.com" }
  s.platform     = :ios
  s.ios.deployment_target = "6.0"
  s.source       = { :git => "https://github.com/IceTears1/TZImagePickerController.git", :tag => "2.2.6.0" }
  s.requires_arc = true
  s.resources    = "TZImagePickerController/TZImagePickerController/*.{png,bundle}"
  s.source_files = "TZImagePickerController/TZImagePickerController/*.{h,m}"
  s.frameworks   = "Photos","AssetsLibrary"
end
