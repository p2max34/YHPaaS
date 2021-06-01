//
//  CMSSegmentHeaderView+UITouch.h
//  CMSPaaS
//
//  Created by sway on 2021/4/8.
//

#import "CMSSegmentHeaderView.h"

NS_ASSUME_NONNULL_BEGIN

@interface CMSSegmentHeaderView (UITouch)
@property (nonatomic, copy) UIView *(^hitTestBlock)(CGPoint point, UIEvent *event, UIView *view);

@end

NS_ASSUME_NONNULL_END
