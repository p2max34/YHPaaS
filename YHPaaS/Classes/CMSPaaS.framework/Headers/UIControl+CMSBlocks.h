//
//  UIControl+CMSBlocks.h
//  CMSPaaS
//
//  Created by liuyanliang on 2020/8/20.
//  Copyright © 2020 cmschina. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIControl (CMSBlocks)


- (void)cms_addEventHandler:(void (^)(id sender))handler forControlEvents:(UIControlEvents)controlEvents;

- (void)cms_removeEventHandlersForControlEvents:(UIControlEvents)controlEvents;

- (BOOL)cms_hasEventHandlersForControlEvents:(UIControlEvents)controlEvents;

@end

NS_ASSUME_NONNULL_END
