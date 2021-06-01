//
//  UIImage+CMSColorShape.h
//  CMSPaaSBenchmark
//
//  Created by symbio on 2020/11/24.
//  Copyright © 2020 CMS. All rights reserved.
//

#import <UIKit/UIKit.h>

/// 三角形绘制方向
typedef enum : NSUInteger {
    CMSTriangleImageDirectionDecline, /// 向下
    CMSTriangleImageDirectionUp, /// 向上
    CMSTriangleImageDirectionLeft, /// 向左
    CMSTriangleImageDirectionRight /// 向右
} CMSTriangleImageDirection;


NS_ASSUME_NONNULL_BEGIN

@interface UIImage (CMSColorShape)
+ (UIImage *)cms_imageWithColor:(UIColor *)color size:(CGSize)size;

+ (UIImage *)cms_imageWithColor:(UIColor *)color forSize:(CGSize)size withCornerRadius:(CGFloat)radius;

/// 绘制三角形
/// @param color 填充颜色
/// @param size 绘制大小
/// @param direction 三角形箭头朝向
+ (UIImage *)cms_triangleImageWithColor:(UIColor *)color
                                   size:(CGSize)size
                              direction:(CMSTriangleImageDirection)direction;


/// 绘制箭头
/// @param color 线条颜色
/// @param size 绘制大小
/// @param direction 三角形箭头朝向
+ (UIImage *)cms_arrowImageWithColor:(UIColor *)color
                                   size:(CGSize)size
                              direction:(CMSTriangleImageDirection)direction;

/// 绘制箭头
/// @param color 线条颜色
/// @param size 绘制大小
/// @param direction 箭头朝向
/// @param backgroudColor 背景颜色
+ (UIImage *)cms_arrowImageWithColor:(UIColor *)color
                                size:(CGSize)size
                           direction:(CMSTriangleImageDirection)direction
                      backgroudColor:(UIColor *)backgroudColor;

/// 绘制关闭按钮
/// @param color 颜色
/// @param size size
+ (UIImage *)cms_closeImageWithColor:(UIColor *)color
                                  size:(CGSize)size;

/// 绘制关闭按钮图片
/// @param color 线条颜色
/// @param backgroudColor 背景颜色
/// @param size 图片大小
/// @param lineWidth 线宽
/// @param isRound 是否是圆形
+ (UIImage *)cms_closeImageWithColor:(UIColor *)color
                      backgroudColor:(UIColor * _Nullable)backgroudColor
                                size:(CGSize)size
                           lineWidth:(CGFloat)lineWidth
                             isRound:(BOOL)isRound;

+ (UIImage *)cms_addImageWithColor:(UIColor *)color
                      backgroudColor:(UIColor *)backgroudColor
                                size:(CGSize)size
                           lineWidth:(CGFloat)lineWidth
                             isRound:(BOOL)isRound;
@end

NS_ASSUME_NONNULL_END
