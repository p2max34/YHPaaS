//
//  CMSPagingView.h
//  cmsmobilesecurities
//
//  Created by Michael on 2018/6/6.
//  Copyright © 2018年 cms. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CMSPagingView;

@protocol CMSPagingViewDataSource <NSObject>

@required

- (NSInteger)numberOfPagesInPagingView:(CMSPagingView *)pagingView;

- (UIView *)viewForPageInPagingView:(CMSPagingView *)pagingView atIndex:(NSInteger)index;

@end

@protocol CMSPagingViewDelegate <UIScrollViewDelegate>

@optional

- (void)pagingView:(CMSPagingView *)pagingView didScrollToPageAtIndex:(NSInteger)index;

- (void)currentPageDidChangeInPagingView:(CMSPagingView *)pagingView;

- (void)pagingView:(CMSPagingView *)pagingView didScrollToScaleOfPage:(CGFloat)scale;

- (void)pagingView:(CMSPagingView *)pagingView didSelectPageAtIndex:(NSInteger)index animated:(BOOL)animated;

@end

@interface CMSPagingView : UIScrollView

@property (nonatomic, strong) NSInteger(^numberOfPagesBlock)(CMSPagingView *pagingView);
@property (nonatomic, strong) UIView *(^viewForPageBlock)(CMSPagingView *pagingView, NSInteger index);

@property (nonatomic, strong) void(^didScrollToPageBlock)(CMSPagingView *pagingView, NSInteger index);
@property (nonatomic, strong) void(^didChangePageBlock)(CMSPagingView *pagingView);
@property (nonatomic, strong) void(^didScrollToScaleBlock)(CMSPagingView *pagingView, CGFloat scale);
@property (nonatomic, strong) void(^didSelectPageBlock)(CMSPagingView *pagingView, NSInteger index, BOOL animated);


@property (nonatomic, weak) id<CMSPagingViewDataSource> dataSource;
@property (nonatomic, weak) id<CMSPagingViewDelegate> delegate;

@property (nonatomic, assign, readonly) NSInteger currentPageIndex;

@property (nonatomic, assign) BOOL preloading;   // 预加载

- (void)reloadData;

- (void)switchToPageIndex:(NSInteger)index animated:(BOOL)animated;

- (UIViewController *)viewController;

@end
