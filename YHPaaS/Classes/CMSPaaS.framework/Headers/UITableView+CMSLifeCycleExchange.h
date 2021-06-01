//
//  UITableView+CMSLifeCycleExchange.h
//  CMSPaaS
//
//  Created by 吴演 on 2021/3/5.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UITableView (CMSLifeCycleExchange)

@end

// 该协议只能由Cell遵循
@protocol CMSTableViewCellLifeCycleProtocol <NSObject>

- (void)cellDidEndDisplay;

- (void)cellWillDisplay;

@end

NS_ASSUME_NONNULL_END
