//
//  TZPhotoPreviewController.h
//  TZImagePickerController
//
//  Created by 谭真 on 15/12/24.
//  Copyright © 2015年 谭真. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TZPhotoPreviewController : UIViewController

@property (nonatomic, strong) NSMutableArray *models;                  ///< All photo models / 所有图片模型数组
@property (nonatomic, strong) NSMutableArray *photos;                  ///< All photos  / 所有图片数组
@property (nonatomic, assign) NSInteger currentIndex;           ///< Index of the photo user click / 用户点击的图片的索引
@property (nonatomic, assign) BOOL isSelectOriginalPhoto;       ///< If YES,return original photo / 是否返回原图
@property (nonatomic, assign) BOOL isCropImage;

#pragma mark - 新增/修改属性（查询此版本修改的地方 可以 全局搜索）
/// Default is 0 即 不限制    最大可选图片的大小   单位M
@property (nonatomic, assign) NSInteger maxPhotoLength;
/// Default is 0 即 不限制    最大可选gif图片的大小   单位M
@property (nonatomic, assign) NSInteger maxGIfLength;

/// Return the new selected photos / 返回最新的选中图片数组
@property (nonatomic, copy) void (^backButtonClickBlock)(BOOL isSelectOriginalPhoto);
@property (nonatomic, copy) void (^doneButtonClickBlock)(BOOL isSelectOriginalPhoto);
@property (nonatomic, copy) void (^doneButtonClickBlockCropMode)(UIImage *cropedImage,id asset);
@property (nonatomic, copy) void (^doneButtonClickBlockWithPreviewType)(NSArray<UIImage *> *photos,NSArray *assets,BOOL isSelectOriginalPhoto);

@end
