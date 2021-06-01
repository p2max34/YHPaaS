//
//  CMSHistogramView.h
//  CMSHistogramViewDemo
//
//  Created by HJ on 2021/1/13.
//  Copyright © 2021 HJ. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CMSHistogramModel.h"

NS_ASSUME_NONNULL_BEGIN


@interface CMSHistogramView : UIView

/// 距离底部间隔 默认 10
@property (nonatomic, assign) CGFloat bottomSpace;
/// 一个Bar 中 上下 组件之间间隔 默认 3
@property (nonatomic, assign) CGFloat barControlSpace;
/// 一个Bar width  默认 动态   设置宽度 一般需要 设置间隔 barBetweenSpace
@property (nonatomic, assign) CGFloat barWidth;
/// 一个Bar width  最新宽度
@property (nonatomic, assign) CGFloat barMinWidth;
/// Bar 之前的间隔 默认 10 和 pageNumber 互斥
@property (nonatomic, assign) CGFloat barBetweenSpace;
/// 第一个 Bar 左边间距 默认 15
@property (nonatomic, assign) CGFloat firstBarLeftSpace;
/// 最后 一个 Bar 右边间距 默认 无
@property (nonatomic, assign) CGFloat lastBarRightSpace;

/// 是否分页  默认不分页滑动
@property (nonatomic, assign) BOOL scrollPagingEnabled;
/// 每页数量  默认一个页面显示完成 最小 bar 宽度 5 超过 滑动显示 和 barBetweenSpace 互斥
@property (nonatomic, assign) NSInteger pageNumber;
/// 是否显示当前页  默认一个页面显示完成 不显示，多页面显示
@property (nonatomic, assign) BOOL showPageControl;
/// 是否动画 默认 YES
@property (nonatomic, assign) BOOL animateBar;
/// 设置属性在赋值的前面
@property (nonatomic, strong) NSArray<CMSHistogramModel *> *datas;
/// 统一点击事件  互斥  单个点击事件
@property (nonatomic, strong) void(^overallTapCallBack)(void);
/// 单个点击事件  互斥  统一点击事件
@property (nonatomic, strong) void(^barCallBack)(CMSHistogramModel *model);
@property (nonatomic, strong) void(^barPageCallBack)(NSInteger page);
@end

NS_ASSUME_NONNULL_END
