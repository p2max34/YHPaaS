//
//  UIFont+CMSFactory.h
//  CMSPaaS
//
//  Created by symbio on 2021/5/12.
//

#import <UIKit/UIKit.h>

#define Font(x) [UIFont systemFontOfSize:x]

NS_ASSUME_NONNULL_BEGIN

@interface UIFont (CMSFactory)
/// 一级模块导航栏
/// @param isAdapter 是否进行适配
+ (UIFont *)cms_moduleTitleFontWithAdapter:(BOOL)isAdapter;
+ (UIFont *)cms_moduleTitleFont;

/// 文章标题
/// @param isAdapter 是否进行适配
+ (UIFont *)cms_articleTitleFontWithAdapter:(BOOL)isAdapter;
+ (UIFont *)cms_articleTitleFont;

/// 指数板块数字
/// @param isAdapter 是否进行适配
+ (UIFont *)cms_stockBlockDataFontWithAdapter:(BOOL)isAdapter;
+ (UIFont *)cms_stockBlockDataFont;

/// 一级标题/股票列表行情数字
/// @param isAdapter 是否进行适配
+ (UIFont *)cms_mainTitleFontWithAdapter:(BOOL)isAdapter;
+ (UIFont *)cms_mainTitleFont;

/// 二级标题
/// @param isAdapter 是否进行适配
+ (UIFont *)cms_secondaryTitleFontWithAdapter:(BOOL)isAdapter;
+ (UIFont *)cms_secondaryTitleFont ;

/// 主文案
/// @param isAdapter 是否进行适配
+ (UIFont *)cms_mainTextFontWithAdapter:(BOOL)isAdapter;
+ (UIFont *)cms_mainTextFont;

/// 次文案
/// @param isAdapter 是否进行适配
+ (UIFont *)cms_secondaryTextFontWithAdapter:(BOOL)isAdapter;
+ (UIFont *)cms_secondaryTextFont;

/// 图标文字
/// @param isAdapter 是否进行适配
+ (UIFont *)cms_iconTextFontWithAdapter:(BOOL)isAdapter;
+ (UIFont *)cms_iconTextFont;

/// 辅助文案
/// @param isAdapter 是否进行适配
+ (UIFont *)cms_subsidiaryTextFontWithAdapter:(BOOL)isAdapter;
+ (UIFont *)cms_subsidiaryTextFont;

/// 标签文字/list说明文字/图表文字
/// @param isAdapter 是否进行适配
+ (UIFont *)cms_tagTextFontWithAdapter:(BOOL)isAdapter;
+ (UIFont *)cms_tagTextFont;

///
/// @param isAdapter 是否进行适配
+ (UIFont *)cms_logoIconFontWithAdapter:(BOOL)isAdapter;
+ (UIFont *)cms_logoIconFont;

/// 获取粗字体
- (UIFont *)cms_bold;

@end

NS_ASSUME_NONNULL_END
