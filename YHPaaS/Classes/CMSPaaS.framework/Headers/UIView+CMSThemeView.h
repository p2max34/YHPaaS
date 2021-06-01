//
//  UIView+CMSThemeView.h
//  CMSPaaS
//
//  Created by admin on 2020/12/21.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (CMSThemeView)
/// 设置皮肤文件名称 默认为空值，取当前皮肤
/// 可以设置指定皮肤  例如:  @"Dark" / @"Light" ；
/// cms_defaultThemeKey 为默认皮肤
/// 如何设置  cms_Color 或 cms_Image 有 themeName ，优先使用 themeName 指定皮肤
@property (nonatomic, copy) NSString *cms_themeStyle;
@property (nonatomic, copy) NSString *cms_themeBackgroundColor;
@property (nonatomic, copy) NSString *cms_themeTintColor;
/// 根据路径获取color 并缓存方法和参数 ()
- (void)cms_setThemeColorWithIvarName:(NSString *)ivarName colorPath:(NSString *)path;
@end

@interface UILabel (CMSThemeLabel)
@property (nonatomic, copy) NSString *cms_themeTextColor;
@property (nonatomic, copy) NSString *cms_themeHighlightedTextColor;
@property (nonatomic, copy) NSString *cms_themeShadowColor;
/// 主要是颜色
@property (nonatomic, strong) NSAttributedString *cms_themeAttributedText;

@end

@interface UITextField (CMSThemeTextField)
@property (nonatomic, copy) NSString *cms_themeTextColor;
@end

@interface UITextView (CMSThemeTextView)
@property (nonatomic, copy) NSString *cms_themeTextColor;
@end

@interface UIImageView (CMSThemeImageView)
@property (nonatomic, copy) NSString *cms_themeImage;
- (void)cms_themeSetImage:(UIImage *)image renderingMode:(UIImageRenderingMode)mode;

- (void)cms_themeSetImageKey:(NSString *)imageKey
               renderingMode:(UIImageRenderingMode)mode;

- (void)cms_themeSetImageKey:(NSString *)imageKey
stretchableImageWithLeftCapWidth:(CGFloat)leftCapWidth
                topCapHeight:(CGFloat)topCapHeight;

@end

@interface UIButton (CMSThemeButton)

- (void)cms_themeSetImage:(NSString *)path forState:(UIControlState)state;
- (void)cms_themeSetImage:(NSString *)path forState:(UIControlState)state renderingMode:(UIImageRenderingMode)mode;
- (void)cms_themeSetBackgroundImage:(NSString *)path forState:(UIControlState)state;
- (void)cms_themeSetTitleColor:(NSString *)path forState:(UIControlState)state;

@end

@interface UISwitch (CMSThemeSwitch)
@property (nonatomic, copy) NSString *cms_themeOnTintColor;
@property (nonatomic, copy) NSString *cms_themeThumbTintColor;
@end

@interface UISegmentedControl (CMSThemeSegmented)
@property (nonatomic, copy) NSString *cms_themeSelectedSegmentTintColor;
- (void)cms_themeSetTitleTextAttributes:(NSDictionary<NSAttributedStringKey,id> *)attributes forState:(UIControlState)state;
@end

@interface UISlider (CMSThemeSlider)
@property (nonatomic, copy) NSString *cms_themeThumbTintColor;
@property (nonatomic, copy) NSString *cms_themeMinimumTrackTintColor;
@property (nonatomic, copy) NSString *cms_themeMaximumTrackTintColor;

@end

@interface UITableView (CMSThemeTableView)
@property (nonatomic, copy) NSString *cms_themeSeparatorColor;
@end


@interface CALayer (CMSThemeLayer)
/// 设置皮肤文件名称 默认为空值，取当前皮肤  eg:  @"Dark" / @"Light" ； cms_defaultThemeKey 为默认皮肤
@property (nonatomic, copy) NSString *cms_themeStyle;
@property (nonatomic, copy) NSString *cms_themeBackgroundColor;
@property (nonatomic, copy) NSString *cms_themeBorderColor;
@property (nonatomic, copy) NSString *cms_themeShadowColor;
/// 根据路径获取cgcolor 并缓存方法和参数 ()
- (void)cms_setThemeCGColorWithIvarName:(NSString *)ivarName colorPath:(NSString *)path;
@end

@interface CAGradientLayer (CMSThemeGradientLayer)
/// 可以是色值数组路径 或 是直接 [#333333，#666666];
@property (nonatomic, copy) id cms_themeColors;
@end

@interface CAShapeLayer (CMSThemeShapeLayer)
@property (nonatomic, copy) NSString *cms_themeStrokeColor;
@end

@interface CATextLayer (CMSThemeTextLayer)
@property (nonatomic, copy) NSString *cms_themeForegroundColor;
@end

NS_ASSUME_NONNULL_END
