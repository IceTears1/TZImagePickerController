//
//  TZAssetCell.h
//  TZImagePickerController
//
//  Created by 谭真 on 15/12/24.
//  Copyright © 2015年 谭真. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Photos/Photos.h>

typedef enum : NSUInteger {
    TZAssetCellTypePhoto = 0,
    TZAssetCellTypeLivePhoto,
    TZAssetCellTypePhotoGif,
    TZAssetCellTypeVideo,
    TZAssetCellTypeAudio,
} TZAssetCellType;

@class TZAssetModel;
@interface TZAssetCell : UICollectionViewCell
@property (weak, nonatomic) UIButton *selectPhotoButton;
@property (weak, nonatomic) UIButton *cannotSelectLayerButton;
@property (nonatomic, strong) TZAssetModel *model;
@property (assign, nonatomic) NSInteger index;
@property (nonatomic, copy) void (^didSelectPhotoBlock)(BOOL);
//新增block 用于 判断大小超限时候的返回值
@property (nonatomic, copy) void (^didSelectErrorPhotoBlock)(NSString *str);
@property (nonatomic, assign) TZAssetCellType type;
@property (nonatomic, assign) BOOL allowPickingGif;
@property (nonatomic, assign) BOOL allowPickingMultipleVideo;
@property (nonatomic, copy) NSString *representedAssetIdentifier;
@property (nonatomic, assign) int32_t imageRequestID;

#pragma mark - 新增/修改属性（查询此版本修改的地方 可以 全局搜索）
/// Default is 0 即 不限制    最大可选图片的大小   单位M
@property (nonatomic, assign) NSInteger maxPhotoLength;
/// Default is 0 即 不限制    最大可选gif图片的大小   单位M
@property (nonatomic, assign) NSInteger maxGIfLength;



@property (nonatomic, strong) UIImage *photoSelImage;
@property (nonatomic, strong) UIImage *photoDefImage;

@property (nonatomic, assign) BOOL showSelectBtn;
@property (assign, nonatomic) BOOL allowPreview;
@property (assign, nonatomic) BOOL useCachedImage;

@property (nonatomic, copy) void (^assetCellDidSetModelBlock)(TZAssetCell *cell, UIImageView *imageView, UIImageView *selectImageView, UILabel *indexLabel, UIView *bottomView, UILabel *timeLength, UIImageView *videoImgView);
@property (nonatomic, copy) void (^assetCellDidLayoutSubviewsBlock)(TZAssetCell *cell, UIImageView *imageView, UIImageView *selectImageView, UILabel *indexLabel, UIView *bottomView, UILabel *timeLength, UIImageView *videoImgView);
@end


@class TZAlbumModel;
@interface TZAlbumCell : UITableViewCell
@property (nonatomic, strong) TZAlbumModel *model;
@property (weak, nonatomic) UIButton *selectedCountButton;

@property (nonatomic, copy) void (^albumCellDidSetModelBlock)(TZAlbumCell *cell, UIImageView *posterImageView, UILabel *titleLabel);
@property (nonatomic, copy) void (^albumCellDidLayoutSubviewsBlock)(TZAlbumCell *cell, UIImageView *posterImageView, UILabel *titleLabel);
@end


@interface TZAssetCameraCell : UICollectionViewCell
@property (nonatomic, strong) UIImageView *imageView;
@end
