//
//  UIColor+Extension.h
//  cmsmobilesecurities
//
//  Created by huzj on 15/3/23.
//  Copyright (c) 2015年 cms. All rights reserved.
//

#import <UIKit/UIKit.h>


#define COLOR(r,g,b)                                ([UIColor colorWithRed:(r/255.0) green:(g/255.0) blue:(b/255.0) alpha:1])
#define COLORA(r,g,b,a)                             ([UIColor colorWithRed:(r/255.0) green:(g/255.0) blue:(b/255.0) alpha:a])

#define HEXCOLOR(hexValue)              [UIColor colorWithRed : ((CGFloat)((hexValue & 0xFF0000) >> 16)) / 255.0 green : ((CGFloat)((hexValue & 0xFF00) >> 8)) / 255.0 blue : ((CGFloat)(hexValue & 0xFF)) / 255.0 alpha : 1.0]
#define HEXACOLOR(hexValue, alphaValue) [UIColor colorWithRed : ((CGFloat)((hexValue & 0xFF0000) >> 16)) / 255.0 green : ((CGFloat)((hexValue & 0xFF00) >> 8)) / 255.0 blue : ((CGFloat)(hexValue & 0xFF)) / 255.0 alpha : (alphaValue)]


@interface UIColor(CMSFactory)

+ (UIColor *)cms_colorFromHexString:(NSString *)hexString;

+ (UIColor *)cms_colorFromHexString:(NSString *)hexString alpha:(CGFloat)alpha;

+ (UIColor *)cms_mixColor1:(UIColor*)color1 color2:(UIColor *)color2 ratio:(CGFloat)ratio;

+ (UIColor *)cms_mainTextColor;
+ (UIColor *)cms_secondTextColor;
+ (UIColor *)cms_detailTextColor;
//+ (UIColor *)cms_mainButtonBackgroundColor;
+ (UIColor *)cms_stockIndexUpColor;
+ (UIColor *)cms_stockUpColor;
+ (UIColor *)cms_stockDownColor;
+ (UIColor *)cms_linkTextColor;
+ (UIColor *)cms_separateLineColor;
+ (UIColor *)cms_backgroundColor;

+ (UIColor *)cms_colorFromColorKey:(NSString *)keyPath;

@end
