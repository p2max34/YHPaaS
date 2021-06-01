//
//  UIButton+CMSLayout.h
//  CMSPaaSBenchmark
//
//  Created by symbio on 2020/11/12.
//  Copyright © 2020 CMS. All rights reserved.
//

#import <UIKit/UIKit.h>

/// 定义一个枚举（包含了四种类型的button）
typedef NS_ENUM(NSUInteger, CMSButtonEdgeInsetsStyle) {
    CMSButtonEdgeInsetsStyleTop, // image在上，label在下
    CMSButtonEdgeInsetsStyleLeft, // image在左，label在右
    CMSButtonEdgeInsetsStyleBottom, // image在下，label在上
    CMSButtonEdgeInsetsStyleRight // image在右，label在左
};

NS_ASSUME_NONNULL_BEGIN

@interface UIButton (CMSLayout)
/// 设置button的titleLabel和imageView的布局样式，及间距
/// @param style titleLabel和imageView的布局样式
/// @param space titleLabel和imageView的间距
- (void)cms_layoutWithEdgeInsetsStyle:(CMSButtonEdgeInsetsStyle)style
                        imageTitleSpace:(CGFloat)space;
@end

NS_ASSUME_NONNULL_END
