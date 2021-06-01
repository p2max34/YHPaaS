//
//  CMSTitleImageView.h
//  CMSPaaS
//
//  Created by 李嘉 on 2020/8/26.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, CMSImageDirectionMode) {
    CMSImageDirectionModeLeftToRight = 0, //图片在左
    CMSImageDirectionModeRightToLeft,      //图片在右
    CMSImageDirectionModeTopToBottom,      //图片在上
    CMSImageDirectionModeBottomToTop      //图片在下

};

@interface CMSTitleImageView : UIView
/**
 文字标题
 */
@property (nonatomic, copy) NSString *title;
/**
 标题颜色
 */
@property (nonatomic, strong) UIColor *textColor;
/**
 图片
 */
@property (nonatomic, strong) NSURL *imageUrl;

/// 设置图片文字
/// @param frame 视图的大小
/// @param title 文字
/// @param textColor 文字颜色
/// @param imageUrl 图片链接
/// @param imageSize 图片大小
/// @param directionMode 图片位置
- (instancetype)initWithFrame:(CGRect)frame
                        title:(NSString *)title
                    textColor:(UIColor *)textColor
                     imageUrl:(NSURL *)imageUrl
                    imageSize:(CGSize )imageSize
                directionMode:(CMSImageDirectionMode)directionMode;

- (UIImageView *)getContentImageView;

@end

NS_ASSUME_NONNULL_END
