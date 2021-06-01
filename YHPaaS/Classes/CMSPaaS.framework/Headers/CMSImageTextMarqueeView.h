//
//  CMSLabelMarqueeView.h
//  CMSPaaS
//
//  Created by 李嘉 on 2020/9/2.
//

#import <UIKit/UIKit.h>
@class CMSTextMarqueeModel;

NS_ASSUME_NONNULL_BEGIN

@interface CMSTextMarqueeModel : NSObject

@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *nwsId;
@property (nonatomic, copy) NSString *ID;

@end

@interface CMSTextMarqueeCollectionViewCell : UICollectionViewCell

@property (nonatomic, strong) CMSTextMarqueeModel *model;

@end

@interface CMSImageTextMarqueeView : UIView

/**
  快讯图片
 */
@property (strong, nonatomic)  UIImageView *newsImage;

/// 文字跑马灯
/// @param frame 视图大小位置
/// @param imageSize 图片的大小
/// @param imageUrl 图片的地址
/// @param newsModelArray 新闻model数组
- (instancetype)initWithFrame:(CGRect)frame
                    imageSize:(CGSize)imageSize
                     imageUrl:(NSURL *)imageUrl
               newsModelArray:(NSArray<CMSTextMarqueeModel *> *)newsModelArray;

@property (strong, nonatomic) NSArray *sourceArr;

@end

NS_ASSUME_NONNULL_END
