//
//  CMSSegmentHeaderView.h
//  cmsmobilesecurities
//
//  Created by Michael on 2018/6/4.
//  Copyright © 2018年 cms. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CMSSegmentHeaderView, CMSSegmentButtonItem;

@protocol CMSSegmentHeaderViewDelegate <UIScrollViewDelegate>

@optional

- (void)segmentHeaderView:(CMSSegmentHeaderView *)segmentHeaderView didSelectItemAtIndex:(NSInteger)index;

- (void)currentSelectedIndexDidChangeInSegmentHeaderView:(CMSSegmentHeaderView *)segmentHeaderView;

- (void)segmentHeaderView:(CMSSegmentHeaderView *)segmentHeaderView didClearBadgeAtIndex:(NSInteger)index;
- (void)segmentHeaderViewDidScroll:(CMSSegmentHeaderView *)segmentHeaderView;
@end

@interface CMSSegmentHeaderView : UIScrollView
@property (nonatomic, strong) UIView *indicatorView;
@property (nonatomic, strong) void(^didSelectItemBlock)(CMSSegmentHeaderView *headerView, NSInteger index);
@property (nonatomic, strong) void(^didChangeItemBlock)(CMSSegmentHeaderView *headerView);
@property (nonatomic, strong) void(^didClearBadgeBlock)(CMSSegmentHeaderView *headerView, NSInteger index);
@property (nonatomic, strong) UIView *line;
@property (nonatomic, weak) id<CMSSegmentHeaderViewDelegate> delegate;

/**
 *  带传入的参数，菜单标题列表
 */
@property (nonatomic, copy) NSArray<CMSSegmentButtonItem *> *items;

/**
 *  当前选中的菜单，默认为0
 */
@property (nonatomic, assign, readonly) NSInteger currentSelectedIndex;

/**
 *  默认选中的菜单，默认为0
 */
@property (nonatomic, assign) NSInteger defaultSelectedIndex;

/**
 *  正常态颜色值
 */
@property (nonatomic, strong) UIColor *normalColor;

/**
 *  选中态颜色值
 */
@property (nonatomic, strong) UIColor *selectedColor;

/**
 *  正常字体
 */
@property (nonatomic, strong) UIFont *normalFont;

/**
 *  选中字体
 */
@property (nonatomic, strong) UIFont *selectedFont;

/**
 *  button文字的垂直对齐方式
 */
@property (nonatomic, assign) UIControlContentVerticalAlignment buttonVerticalAlignment;

/**
 *  隐藏指示条
 */
@property (nonatomic, assign) BOOL hideIndicator;
/// 指示条高度
@property (nonatomic, assign) CGFloat indicatorHeight;


/**
 *  默认button的宽度
 */
@property (nonatomic, assign) CGFloat defaultButtonWidth;

/**
 *  item间的间隔
 */
@property (nonatomic, assign) CGFloat itemSpacing;

/**
 *  底部线
 */
@property (nonatomic, assign) BOOL needLine;

- (void)setSelectedIndex:(NSInteger)index animated:(BOOL)animated;

/**
 *  设置indicator的位置，positon代表index的小数形式，如1.3表示1和2中间的0.3的位置
 */
- (void)setIndicatorPosition:(CGFloat)position;

- (void)resetIndicatorViewFrame;

@end


@interface CMSSegmentButton : UIButton

@property (nonatomic, assign) BOOL showBadge;

@end

@interface CMSSegmentButtonItem : NSObject

@property (nonatomic, copy) NSString *title;
@property (nonatomic, assign) BOOL showBadge;
@property (nonatomic, assign) BOOL isSelected;

@end
