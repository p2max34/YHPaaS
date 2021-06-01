//
//  CMSPopController.h
//  Pop
//
//  Created by symbio on 2021/4/2.
//

#import <UIKit/UIKit.h>
#import "UIView+CMSLayout.h"
NS_ASSUME_NONNULL_BEGIN

typedef enum : NSUInteger {
    CMSPopControllerStyleAlert,
    CMSPopControllerStyleSheet
} CMSPopControllerStyle;

@interface CMSPopController : UIViewController
@property (nonatomic, strong, readonly) UIView *contentView;
@property (nonatomic, strong, readonly) UIView *backgroundView;

@property (nonatomic, strong) id<UIViewControllerAnimatedTransitioning> animatedDelegate;

/// 背景点击回调
@property (nonatomic, copy) void (^didClickBackgroundCallback)(void);

+ (instancetype)alertControllerWithPreferredStyle:(CMSPopControllerStyle)preferredStyle;

- (void)pop;
- (void)dismiss;
@end


@interface CMSPopAnimation : NSObject<UIViewControllerAnimatedTransitioning>

- (instancetype)initWithPreferredStyle:(CMSPopControllerStyle)preferredStyle;

- (void)alertAnimateTransition:(id<UIViewControllerContextTransitioning>)transitionContext;
- (void)sheetAnimateTransition:(id<UIViewControllerContextTransitioning>)transitionContext;
- (void)animateTransition:(id<UIViewControllerContextTransitioning>)transitionContext preferredStyle:(CMSPopControllerStyle)preferredStyle;
@end

NS_ASSUME_NONNULL_END
