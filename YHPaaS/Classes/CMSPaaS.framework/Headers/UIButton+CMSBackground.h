//
//  UIButton+CMSBackground.h
//  CMSPaaSBenchmark
//
//  Created by symbio on 2020/11/12.
//  Copyright © 2020 CMS. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIButton (CMSBackground)

/// 设置按钮图片
/// @param value 图片路径(支持file: http:)
/// @param state state
/// @param needTintColor 是否需要图片的 tintColor
- (void)cms_setImageOfValue:(NSString *)value forState:(UIControlState)state needTintColor:(BOOL)needTintColor;

@end

NS_ASSUME_NONNULL_END
