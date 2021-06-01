//
//  CMSRefreshNormalHeader.h
//  CMSPaaS
//
//  Created by admin on 2020/11/11.
//

#import <MJRefresh/MJRefresh.h>

NS_ASSUME_NONNULL_BEGIN

@interface CMSRefreshNormalHeader : MJRefreshStateHeader

+ (instancetype)normalHeaderWithRefreshingBlock:(MJRefreshComponentAction)refreshingBlock;
+ (instancetype)normalHeaderWithRefreshingTarget:(id)target refreshingAction:(SEL)action;

@property (nonatomic, assign) NSInteger skin;
@property (nonatomic, assign) BOOL needTheme;
@property (nonatomic, assign) BOOL immersive; //iphoneX并且hideNavBar，那么布局往下偏移
@property (assign, nonatomic) UIActivityIndicatorViewStyle activityIndicatorViewStyle;
// default NO;
@property (nonatomic, assign, getter=isShowLestTime) BOOL showLestTime;

@end

NS_ASSUME_NONNULL_END
