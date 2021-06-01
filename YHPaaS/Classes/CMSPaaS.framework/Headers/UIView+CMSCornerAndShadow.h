//
//  UIView+CornerAndShadow.h
//  CMSPaaS
//
//  Created by admin on 2020/10/16.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (CMSCornerAndShadow)

@property (nonatomic, strong) UIImage *image;

/// 如果有 image 或者是 UIimageview 类型  请先给image 赋值
/// 全部切角
@property (nonatomic, assign) CGFloat cornerRadius;
/// 单独切 左上角  可以和其他切角混合使用
@property (nonatomic, assign) CGFloat cornerTopLeftRadius;
/// 单独切 右上角 可以和其他切角混合使用
@property (nonatomic, assign) CGFloat cornerTopRightRadius;
/// 单独切 左下角 可以和其他切角混合使用
@property (nonatomic, assign) CGFloat cornerBottomLeftRadius;
/// 单独切 右下角 可以和其他切角混合使用
@property (nonatomic, assign) CGFloat cornerBottomRightRadius;

/// 如果有 image 或者是 UIimageview 类型  请先给image 赋值
/// 如果有圆角，请先圆角 ，再阴影。
/// 默认添加阴影
- (void)cms_setShadowNormal;
/// 设置 阴影 透明度
- (void)cms_setShadowByOpacity:(CGFloat)shadowOpacity;
/// 设置 阴影 偏移量
- (void)cms_setShadowByOffset:(CGSize)shadowOffset;
/// 设置 阴影 阴影半径
- (void)cms_setShadowByRadius:(CGFloat)shadowRadius;
/// 设置 阴影  阴影颜色
- (void)cms_setShadowByColor:(UIColor *)shadowColor;

/// 设置 阴影 透明度 偏移量 阴影半径  阴影颜色
- (void)cms_setShadowByOpacity:(CGFloat)shadowOpacity
                  shadowOffset:(CGSize)shadowOffset
                  shadowRadius:(CGFloat)shadowRadius
                   shadowColor:(UIColor *)shadowColor;


@end

@interface CALayer (CMSCornerAndShadow)
/// 全部切角
@property (nonatomic, assign) CGFloat layerCornerRadius;

/// 单独切 左上角  可以和其他切角混合使用
@property (nonatomic, assign) CGFloat layerCornerTopLeftRadius;
/// 单独切 右上角 可以和其他切角混合使用
@property (nonatomic, assign) CGFloat layerCornerTopRightRadius;
/// 单独切 左下角 可以和其他切角混合使用
@property (nonatomic, assign) CGFloat layerCornerBottomLeftRadius;
/// 单独切 右下角 可以和其他切角混合使用
@property (nonatomic, assign) CGFloat layerCornerBottomRightRadius;

@end

NS_ASSUME_NONNULL_END
