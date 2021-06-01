//
//  UIView+CMSBadge.h
//  CMSPaaS
//
//  Created by liuyanliang on 2020/8/20.
//  Copyright © 2020 cmschina. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (CMSBadge)

/// 设置文字角标
/// @param text 角标文字
- (void)cms_setBadgeWithText:(NSString *)text;

/// 设置图片角标
/// @param image 角标图片
- (void)cms_setBadgeWithImage:(UIImage *)image;

/// 设置角标大小
/// @param image 角标图片
/// @param size 图片大小
- (void)cms_setBadgeWithImage:(UIImage *)image withSize:(CGSize)size;

/// 清除角标
- (void)cms_removeBadge;

/// 显示默认状态角标
- (void)cms_showBadge;
@end

NS_ASSUME_NONNULL_END
