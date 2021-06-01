//
//  UIView+CMSExtension.h
//  TestDemo
//
//  Created 吴演 on 2020/8/19.
//  Copyright © 2020 CMS. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, CMSCAGradientMode) {
    CMSCAGradientModeLeftToRignt = 0,
    CMSCAGradientModeRigntToLeft,
    CMSCAGradientModeTopToBottom,
    CMSCAGradientModeBottomToTop,
    CMSCAGradientModeLeftBottomToRightTop,
    CMSCAGradientModeLeftTopToRightBottom
};

typedef NS_ENUM(NSInteger, CMSBackgroundContentMode) {
    UIViewContentModeScaleAspectFillTop = 50,
    UIViewContentModeScaleAspectFillBottom,
    UIViewContentModeScaleAspectFillLeft,
    UIViewContentModeScaleAspectFillRight,   
};

@interface UIView (CMSBackground)

/** 设置背景图片
 *@param image 传入图片
 */
- (void)cms_setBackgroundImage:(UIImage*)image;

/** 给View设置背景图片，可设置模式
 *@param image 传入图片
 *@param contentMode 请传入类型为枚举CMSBackgroundContentMode(上方有声明)  或者系统UIViewContentMode
*/
- (void)cms_setBackgroundImage:(UIImage*)image contentMode:(NSInteger)contentMode;

/** View增加渐变背景
 *@param fromColor 初始颜色
 *@param toColor 结束颜色
*/
-(void)cms_setGradientBackgroundFromColor:(UIColor *)fromColor toColor:(UIColor *)toColor;

/** 增加渐变背景，可选模式
 *@param fromColor 初始颜色
 *@param toColor 结束颜色
 *@param gradientMode 渐变色方向
*/
-(void)cms_setGradientBackgroundFromColor:(UIColor *)fromColor toColor:(UIColor *)toColor gradientMode:(CMSCAGradientMode)gradientMode;

/** 增加渐变背景，自定义颜色数组
 *@param colors 颜色数组
*/
-(void)cms_setGradientBackgroundFromColors:(NSArray<UIColor *> *)colors;

/** 增加渐变背景，自定义颜色数组
 *@param colors 颜色数组
 *@param gradientMode 渐变色方向
*/
-(void)cms_setGradientBackgroundFromColors:(NSArray<UIColor *> *)colors gradientMode:(CMSCAGradientMode)gradientMode;

/** 增加渐变背景，自定义颜色数组
 *@param colors 颜色数组
 *@param locations locations
 *@param startPoint 起始锚点  左下为（0，1） 右上为（1， 0）
 *@param endPoint 结束锚点
*/
-(void)cms_setGradientBackgroundFromColors:(NSArray<UIColor *> *)colors locations:(nullable NSArray<NSNumber *> *)locations startPoint:(CGPoint)startPoint endPoint:(CGPoint)endPoint;

#pragma mark - 使用颜色路径 适配皮肤

/** theme 增加渐变背景，自定义颜色数组
 *@param colors 颜色数组
*/
-(void)cms_setGradientBackgroundFromColorsKey:(NSString *)colors;

/** theme 增加渐变背景，自定义颜色数组
 *@param colors 颜色数组
 *@param gradientMode 渐变色方向
*/
-(void)cms_setGradientBackgroundFromColorsKey:(NSString *)colors gradientMode:(CMSCAGradientMode)gradientMode;

/** theme 增加渐变背景，自定义颜色数组
 *@param colors 颜色数组
 *@param locations locations
 *@param startPoint 起始锚点  左下为（0，1） 右上为（1， 0）
 *@param endPoint 结束锚点
*/
-(void)cms_setGradientBackgroundFromColorsKey:(NSString *)colors locations:(nullable NSArray<NSNumber *> *)locations startPoint:(CGPoint)startPoint endPoint:(CGPoint)endPoint;
@end

NS_ASSUME_NONNULL_END
