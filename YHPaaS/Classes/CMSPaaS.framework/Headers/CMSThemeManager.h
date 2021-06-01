//
//  CMSThemeManager.h
//  CMSPaaS
//
//  Created by admin on 2020/12/17.
//

#import <Foundation/Foundation.h>
#import "UIColor+CMSFactory.h"
#import "CMSColorKey.h"
#import "CMSImageKey.h"
#import "UIView+CMSThemeView.h"

NS_ASSUME_NONNULL_BEGIN

/// 改变肤色会用该通知
#define CMS_ThemeUpdateNotification @"CMS_ThemeUpdateNotification"
/// 指定颜色  color 为路径时默认适配皮肤
#define cmsThemeColor(color)  [CMSThemeManager getThemeColor:color]

/// 指定颜色  color 为路径时可以指定皮肤 （指定皮肤不能随皮肤变好）
#define cmsThemeColorSpecifiedName(color,name)  [CMSThemeManager getThemeColor:color themeName:name]

@interface CMSThemeManager : NSObject

+ (instancetype)sharedInstance;
/// 更换主题，设置主题名称，
- (void)switchThemeWithName:(NSString *)themeName;
- (NSString *)currentThemeStatusBarStyle;

+ (NSString *)getDefaultThemeName;

/// themeColor 皮肤颜色key 或 #666666（注：必须带#）
/// themeName  nil 表示适配皮肤， 可以指定皮肤 例如：light 固定是 light 色值
+ (NSString *)getThemeColor:(NSString *)themeColor themeName:(NSString * _Nullable)themeName;
+ (NSString *)getThemeColor:(NSString *)themeColor;

/// themeImage 皮肤图片key
/// bundle://"imageName"
/// imagePath
/// http://"imagePath"? 或 https://"imagePath"?
/// theme://"imagePath"?themeName="themeName"
///
/// themeName  nil 表示适配皮肤， 可以指定皮肤 例如：light 固定是 light 色值
+ (NSString *)getThemeImage:(NSString *)themeImagePath themeName:(NSString * _Nullable)themeName;
/// themeName 表示适配皮肤
+ (NSString *)getThemeImage:(NSString *)themeImagePath;
+ (NSString *)getBundleImage:(NSString *)imageName;

#pragma mark -- 暂时没有外用，只有 UIView+CMSThemeView 和 颜色 UIColor+CMSFactory 使用
/// 根据路径获取图片  themeStyle 是否指定皮肤（ 默认 空 ，即当前皮肤）
- (void)imageDataWithKeyPath:(NSString *)keyPath
                  themeStyle:(NSString *)themeStyle
               imageCallBack:(void(^)(UIImage *image))callBack;
/// 根据路径获取颜色 themeStyle 是否指定皮肤（ 默认 空 ，即当前皮肤）
- (void)colorDataWithKeyPath:(NSString *)keyPath
                  themeStyle:(NSString *)themeStyle
               colorCallBack:(void(^)(UIColor *color))callBack;

/// 根据路径获取颜色数组 themeStyle 是否指定皮肤（ 默认 空 ，即当前皮肤）
- (void)gradientColorsDataWithKeyPath:(NSString *)keyPath
                           themeStyle:(NSString *)themeStyle
                        colorCallBack:(void(^)(NSArray<UIColor *> *colors))callBack;

@end


@interface CMSThemeDataModel : NSObject

@property (nonatomic, copy) NSDictionary *colorDic;
@property (nonatomic, copy) NSDictionary *imageDic;
@property (nonatomic, copy) NSString *statusBarStyle;

@end

NS_ASSUME_NONNULL_END
