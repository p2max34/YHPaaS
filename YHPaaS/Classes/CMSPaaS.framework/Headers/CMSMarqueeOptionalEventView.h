//
//  CMSMarqueeOptionalEventView.h
//  CMSPaaS
//
//  Created by SJ on 2020/12/17.
//

#import <UIKit/UIKit.h>
#import "CMSMarqueeOptionalEventModel.h"
NS_ASSUME_NONNULL_BEGIN


@interface CMSMarqueeOptionalEventView : UIView

@property (nonatomic, copy) NSArray<CMSMarqueeOptionalEventModel *> *marqueeEventsData;

@property (nonatomic, assign) BOOL isAutoScroll;

/// 是否显示占位空view
/// @param show 是否显示
- (void)showEmptyView:(BOOL)show;

@end

NS_ASSUME_NONNULL_END
